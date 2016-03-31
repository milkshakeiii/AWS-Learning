from models import *
from messages import *

league_queues = {}
player_unread_games = {}

def handle_queue(queue_request):
	name = queue_request.username
	league_name = queue_request.league_name
	response_message = hello(name)
	user = User.query.filter_by(username = name).first()
	submission = queue_request.submission

	if league_name not in league_queues:
		league_queues[league_name] = []
	league_queues[league_name].append((user, submission))
	
	
	#for now, perform a two player game whenever two players have queued
	league_list = league_queues[league_name]
	if len(league_list) >= 2:
		do_two_player_game(league_list, league_name)

	print league_queues
	response = QueueResponse(True, response_message)
	db.session.commit()
	return response

def do_two_player_game(league_list, league_name):
	player_one_entry = league_list.pop()
	player_two_entry = league_list.pop()
	entries = [player_one_entry, player_two_entry]
	map = get_random_map()
	submissions = [entry[1] for entry in entries]
	users = [entry[0] for entry in entries]

	winning_submission = game_result(submissions, map)

	winning_entry = [entry for entry in entries if entry[1] == winning_submission][0]
	winning_user = winning_entry[0]
	winning_rankings = winning_user.rankings.filter_by(league_name = league_name)
	ranking = None
	if winning_rankings.count() == 0:
		ranking = Ranking(league_name, winning_user)
	else:
		ranking = winning_rankings.first()
	ranking.mmr = ranking.mmr + 1
	game = Game(league_name, map)
	
	for entry in entries:
		Submission(game, entry[0], entry[1])	

	for user in users:
		name = user.username
		if name in player_unread_games:
			player_unread_games[name] = player_unread_games[name] + [game]
		else:
			player_unread_games[name] = [game]



def hello(name):
	matching_users = User.query.filter_by(username=name).all()
	if len(matching_users) == 1:
		return "Hello, " + name + ". I recognize you!  Your submission has been queued."
	elif len(matching_users) == 0:
		new_user = User(name, name + '@no_email_given.com')
		db.session.add(new_user)
		return "Hello, " + name + ", and welcome!  Your submission has been queued."
	else:
		return "Wait, do you have a twin?  Something is wrong..."


def handle_get_games(get_games_request):
	name = get_games_request.username
	games = player_unread_games.get(name, [])
	player_unread_games[name] = []

	game_reports = [GameReport([submission.submission_data for submission in game.submissions.all()], game.map_data) for game in games]
	
	response = GetGamesResponse(games)
	return response

def get_index_text():
	user_mmr_by_league = {}
	for ranking in Ranking.query.all():
		league_name = ranking.league_name
		if league_name in user_mmr_by_league:
			user_mmr_by_league[league_name] = user_mmr_by_league[league_name] + [(ranking.mmr, ranking.user.username)]
		else:
			user_mmr_by_league[league_name] = [(ranking.mmr, ranking.user.username)]

	text = ""
	for item in user_mmr_by_league.items():
		text = text + "--------- " + item[0] + " ---------<br>"
		user_mmrs = item[1]
		sorted_users = list(reversed(sorted(user_mmrs)))
		for i in range(len(sorted_users)):
			user_mmr = sorted_users[i]
			text = text + str(i+1) + ": " + user_mmr[1] + " - " + str(user_mmr[0]) + "<br>"
		text = text + "<br><br><br>"
	text = text + "<br><br><br> currently queued: " + str(league_queues)

	return text

def game_result(submissions, map):
	if (len(submissions) < 2):
		raise "Can't have a game with less than two players!"

	return submissions[0]

def get_random_map():
	return 3
