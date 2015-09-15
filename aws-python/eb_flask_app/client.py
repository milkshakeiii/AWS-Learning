from milkshakeiii_pb2 import *
import requests

#API_URL = "http://api.milkshakeiii.com/"
API_URL = "http://192.168.1.11:5000/"

def take_turn_request(game_id, piece, row, column):
	game_turn_proto = GameTurn()
	game_turn_proto.game_id = game_id
	game_turn_proto.placed_piece_type = piece
	game_turn_proto.row_place = row
	game_turn_proto.column_place = column
	request_body_string = game_turn_proto.SerializeToString()
	request_url = API_URL + "take_turn"
	take_turn_response = requests.post(request_url, data=request_body_string)
	print take_turn_response.text
