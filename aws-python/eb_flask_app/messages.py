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
	def __init__(self, username, league_name):
		self.username = username
		self.league_name = league_name

class GetGameResponse():
	def __init__(self, games):
		self.games = games
	
	def __repr__(self):
		return "<GetGamesResponse with " + len(self.games) + " games>"
