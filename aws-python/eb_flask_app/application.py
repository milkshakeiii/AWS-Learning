from flask import Flask

def game_representation(game_id):
  return 'awesome game'

#bits of text for the page
header_text = '''
	<html>\n<head><title>milkshakeiii's api</title></head>\n<body>'''
footer_text = '</body>\n</html>'

# EB looks for an 'application' callable by default
application = Flask(__name__)

# add a rule for the index page.
application.add_url_rule('/', 'index', (lambda:
	header_text + 'hello' + instructions + footer_text))

# add a rule for a special page
application.add_url_rule('/<game_id>', 'hello', (lambda game_id:
	header_text + game_representation(game_id) + home_link + footer_text))

# run the app
if __name__ == "__main__":
	#debug true enables debug
	#but shouldn't be used in production
	#because we hate debugging
	application.debug = True
	application.run()
