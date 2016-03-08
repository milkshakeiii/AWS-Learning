from flask import Flask, request
from game_functions import *
from client import *




# EB looks for an 'application' callable by default
application = Flask(__name__)

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
