class QueueRequest():
	def __init__(self, username, league_name, submission):
		self.username = username
		self.league_name = league_name
		self.submission = submission

class QueueResponse():
	def __init__(self, success, message):
		self.success = success
		self.message = message

	def __repr__(self):
		result = "no result"
		if self.success:
			result = "success"
		else:
			result = "failure"
		return "<QueueResponse, " + result + " - " + self.message + ">"

class GetGamesRequest():
	def __init__(self, username):
		self.username = username

class GetGamesResponse():
	def __init__(self, game_reports):
		self.game_reports = game_reports
	
	def __repr__(self):
		return "<GetGamesResponse with " + str(len(self.game_reports)) + " games>"

class GameReport():
	def __init__(self, submissions, map):
		self.submissions = submissions
		self.map = map
