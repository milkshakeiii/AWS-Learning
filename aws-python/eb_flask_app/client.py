import requests, pickle
from messages import *

EB = "http://api.milkshakeiii.com/"
LOCAL = "http://192.168.0.17:5000/"
API_URL = LOCAL

def submit_queue_request(queue_request):
	request_body_string = pickle.dumps(queue_request)
	request_url = API_URL + "queue"
	response = requests.post(request_url, data=request_body_string)
	if not (response_check(response)):
		print " Queue request came back with an error response. " + str(response)
		return
	queue_response = pickle.loads(response.text)
	print queue_response

def submit_get_games_request(get_games_request):
	request_body_string = pickle.dumps(get_games_request)
	request_url = API_URL + "get_games"
	response = requests.post(request_url, data=request_body_string)
	if not (response_check(response)):
		print "Get games request came back with an error response. " + str(response) + reponse.text
		return
	get_games_response = pickle.loads(response.text)
	print get_games_response

def response_check(response):
	return response.status_code == 200
	
