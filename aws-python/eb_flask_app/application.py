from flask import Flask

def say_hello(username = "earthlings and people named Chris"):
  return '<p>Hello %s!</p>' % username

#bits of text for the page
header_text = '''
	<html>\n<head><title>Henry's EB Flask Test</title></head>\n<body>'''
instructions = '''
	Append a username to the URL to say hello to someone specific.\n'''
home_link = '<p><a href="/">Back</a></p>\n'
footer_text = '</body>\n</html>'

# EB looks for an 'application' callable by default
application = Flask(__name__)

# add a rule for the index page.
application.add_url_rule('/', 'index', (lambda:
	header_text + say_hello() + instructions + footer_text))

# add a rule for a special page
application.add_url_rule('/<username>', 'hello', (lambda username:
	header_text + say_hello(username) + home_link + footer_text))

# run the app
if __name__ == "__main__":
	#debug true enables debug
	#but shouldn't be used in production
	#because we hate debugging
	application.debug = True
	application.run()
