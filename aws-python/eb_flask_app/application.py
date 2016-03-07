from flask import Flask, request
from milkshakeiii_pb2 import *
from pure_functions import *
from client import *





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
	game_history = get_game_history(game_id)
	if (game == EmptyGame()):
		return "That game could not be found.  To start the game, just make the first move!"
	
	winner = CheckForWinner(game_history)
	if (winner != None):
		return "This game is in " + winner + "'s bag.  Also, I can't see " + winner  + " anywhere.  And his bag is padlocked and made of adamantium.  Basically I don't think you're getting this game out of " + winner + "'s bag any time soon.  Maybe try another game.  Or another bag?"

	game_string = ""
	for i in range(len(game)):
		row_string = ""
		for j in range(len(game[0])):
			row_string = row_string + PieceRepresentation(game[i][j]) + " "
		game_string = game_string + row_string  + "<br>"
	return game_string

@application.route("/url_turn/<game_id>/<player_id>/<piece>/<row>/<column>")
def url_turn(game_id, player_id, piece, row, column):
	piece_enum = NO_PIECE
	if (piece == "O"):
		piece_enum = CIRCLE
	if (piece == "H"):
		piece_enum = SQUARE
	if (piece == "X"):
		piece_enum = EX
	if (piece == "v"):
		piece_enum = DOWN_TRIANGLE
	if (piece == "^"):
		piece_enum = UP_TRIANGLE
	if (piece == "7"):
		piece_enum = DOWN_EL
	if (piece == "L"):
		piece_enum = UP_EL
	if (piece == "I"):
		piece_enum = I
	if (piece == "~"):
		piece_enum = TILDE
	if (piece == "Q"):
		piece_enum = CUE
	if (piece_enum == NO_PIECE):
		return "that's not a valid piece.  valid pieces are: O, H, X, v, ^, 7, L, I, ~, Q"
	turn_proto = pack_turn_proto(game_id, player_id, piece_enum, int(row), int(column))
	return do_turn(turn_proto)

@application.route("/take_turn", methods=["POST"])
def take_turn():
	turn = GameTurn()
	turn.ParseFromString(request.data)
	
	return do_turn(turn)

def do_turn(turn):
	game = get_game(turn.game_id)
	game_history = get_game_history(turn.game_id)

	if (not ValidateTurn(game_history, turn)):
		return "nooooo...! illegal move :("

	game = ResultOfPlace(game, turn)
	record_turn(turn.game_id, turn)
	return "success?"


def get_game_history(game_id):
	game_history = games.setdefault(game_id, GameHistory())
	return game_history

def get_game(game_id):
	game_history = get_game_history(game_id)
	return GameFromHistory(game_history)

def record_turn(game_id, turn):
	game_history = get_game_history(game_id)
	game_history.constituent_turns.extend([turn])
	games[game_id] = game_history

# run the app
if __name__ == "__main__":
	#debug true enables debug
	#but shouldn't be used in production
	#because we hate debugging
	application.debug = True
	application.run('0.0.0.0')
