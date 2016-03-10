import requests

EB = "http://api.milkshakeiii.com/"
LOCAL = "http://192.168.0.16:5000/"
API_URL = EB

def submit_command(command):
	request_body_string = command
	request_url = API_URL + "game_command"
	take_turn_response = requests.post(request_url, data=request_body_string)
	print take_turn_response.text
