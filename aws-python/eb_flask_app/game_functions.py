from models import *

def handle_command(command):
	words = command.split()
	if len(words) == 0:
		return "Invalid command"
	
	name = words[0]
	action = command[len(name):]
	action_words = action.split()

	if action_words[0] == "hello":
		response = hello(name, action_words)
	else:
		response = name + " commanded: " + action

	db.session.commit()
	return response




def hello(name, words):
	matching_users = User.query.filter_by(username=name).all()
	if len(matching_users) == 1:
		return "Hello, " + name + ". I recognize you!"
	elif len(matching_users) == 0:
		new_user = User(name, name + '@no_email_given.com')
		db.session.add(new_user)
		return "Hello, " + name + ", and welcome!"
	else:
		return "Wait, do you have a twin?  Something is wrong..."
