from models import *

def handle_queue(queue_request):
	name = queue_request.username

	response = hello(name)


	db.session.commit()
	return response




def hello(name):
	matching_users = User.query.filter_by(username=name).all()
	if len(matching_users) == 1:
		return "Hello, " + name + ". I recognize you!"
	elif len(matching_users) == 0:
		new_user = User(name, name + '@no_email_given.com')
		db.session.add(new_user)
		return "Hello, " + name + ", and welcome!"
	else:
		return "Wait, do you have a twin?  Something is wrong..."
