def handle_command(command):
	words = command.split()
	if len(words) == 0:
		return "Invalid command"
	
	name = words[0]
	action = command[len(name):]
	return name + " commanded: " + action
