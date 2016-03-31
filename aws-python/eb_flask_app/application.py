import pickle

from flask import Flask, request
from flask_sqlalchemy import SQLAlchemy

# EB looks for an 'application' callable by default
application = Flask(__name__)
application.config['SQLALCHEMY_DATABASE_URI'] = 'sqlite:///henry-local-db' #first-eb-python-app-dev.us-west-2.elasticbeanstalk.com/'
application.config['SQLALCHEMY_TRACK_MODIFICATIONS'] = False
db = SQLAlchemy(application)


from game_functions import *
from models import *
from messages import *

@application.route("/")
def index():
	#bits of text for the page
	header_text = '''<html>\n<head><title>milkshakeiii's api</title></head>\n<body>'''
	footer_text = '</body>\n</html>'
	return header_text + get_index_text() + footer_text

@application.route("/queue", methods=["POST"])
def queue():
	queue_request_object = pickle.loads(request.data)
	response = handle_queue(queue_request_object)

	pickled_queue = pickle.dumps(response)	

	return pickled_queue

@application.route("/get_games", methods=["POST"])
def get_games():
	get_games_request_object = pickle.loads(request.data)
	games = handle_get_games(get_games_request_object)

	pickled_games = pickle.dumps(games)

	return pickled_games


# run the app
if __name__ == "__main__":
	db.create_all()

	#debug true enables debug
	#but shouldn't be used in production
	#because we hate debugging
	application.debug = True
	application.run('0.0.0.0')
