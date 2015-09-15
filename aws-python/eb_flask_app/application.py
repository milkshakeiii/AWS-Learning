from flask import Flask, request
from milkshakeiii_pb2 import *
from pure_functions import *






games = {}






# EB looks for an 'application' callable by default
application = Flask(__name__)

#bits of text for the page
header_text = '''
	<html>\n<head><title>milkshakeiii's api</title></head>\n<body>'''
footer_text = '</body>\n</html>'

# add a rule for the index page.
application.add_url_rule('/', 'index', (lambda:
	header_text + 'hello' + footer_text))

@application.route("/view_game/<game_id>")
def game_representation(game_id):
	game = get_game(game_id)
	if (game == EmptyGame()):
		return "That game could not be found.  To start the game, just make the first move!"
	game_string = ""
	for i in range(len(game)):
		row_string = ""
		for j in range(len(game[0])):
			row_string = row_string + str(game[i][j]) + "__"
		game_string = game_string + row_string  + "<br>"
	return game_string

@application.route("/take_turn", methods=["POST"])
def take_turn():
	turn = GameTurn()
	turn.ParseFromString(request.data)
	
	game = get_game(turn.game_id)
	game = ResultOfPlace(game, turn.placed_piece_type, turn.row_place, turn.column_place)

	games[turn.game_id] = game

	return "success?"

def get_game(game_id):
	game = games.setdefault(game_id, EmptyGame())
	return game

# run the app
if __name__ == "__main__":
	#debug true enables debug
	#but shouldn't be used in production
	#because we hate debugging
	application.debug = True
	application.run('0.0.0.0')
