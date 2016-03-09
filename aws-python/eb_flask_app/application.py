from flask import Flask, request
from flask_sqlalchemy import SQLAlchemy


# EB looks for an 'application' callable by default
application = Flask(__name__)
application.config['SQLALCHEMY_DATABASE_URI'] = 'sqlite:///henry-local-db' #first-eb-python-app-dev.us-west-2.elasticbeanstalk.com/'
application.config['SQLALCHEMY_TRACK_MODIFICATIONS'] = False
db = SQLAlchemy(application)


from game_functions import *
from models import *


@application.route("/")
def index():
	#bits of text for the page
	header_text = '''<html>\n<head><title>milkshakeiii's api</title></head>\n<body>'''
	footer_text = '</body>\n</html>'
	return header_text + "heya" + footer_text

@application.route("/game_command", methods=["POST"])
def game_command():
	response = handle_command(request.data)
	
	return response



# run the app
if __name__ == "__main__":
	#debug true enables debug
	#but shouldn't be used in production
	#because we hate debugging
	application.debug = True
	application.run('0.0.0.0')
