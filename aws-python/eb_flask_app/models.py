from application import db

class User(db.Model):
	id = db.Column(db.Integer, primary_key=True)
	username = db.Column(db.String(80), unique=True)
	email = db.Column(db.String(120), unique=True)

	rankings = db.relationship('Ranking', backref = 'user', lazy = 'dynamic')
	submissions = db.relationship('Submission', backref = 'user', lazy = 'dynamic')

	def __init__(self, username, email):
		self.username = username
		self.email = email

	def __repr__(self):
		return '<User %r>' % self.username


class Ranking(db.Model):
	id = db.Column(db.Integer, primary_key=True)
	
	league_name = db.Column(db.String(160), unique=True)
	mmr = (db.Integer)

	user_id = db.Column(db.Integer, db.ForeignKey('user.id'))
	
	def __init__(self, league_name, user):
		self.user = user
		self.league_name = league_name

	def __repr__ (self):
		return '<Zone %r>' % self.name

class Game(db.Model):
	id = db.Column(db.Integer, primary_key=True)
	league_name = db.Column(db.String(160), unique=True)

	submissions = db.relationship('Submission', backref = 'game', lazy = 'dynamic')
	map_data = db.Column(db.PickleType)

	winning_submission_id = (db.Integer)

	def __init__(self, league_name, map_data):
		self.league_name = league_name
		self.map_data = map_data

	def __repr__ (self):
		return '<Game ' + self.id + ', league ' + self.league_name + '>'

class Submission(db.Model):
	id = db.Column(db.Integer, primary_key=True)

	game_id = db.Column(db.Integer, db.ForeignKey('game.id'))
	user_id = db.Column(db.Integer, db.ForeignKey('user.id'))

	submission_data = db.Column(db.PickleType)

	def __init__(self, game, user, submission_data):
		self.game = game
		self.user = user
		self.submission_data = submission_data

	def __repr__(self):
		return '<Submission ' + self.id + ' - ' + self.user.name + '>'
