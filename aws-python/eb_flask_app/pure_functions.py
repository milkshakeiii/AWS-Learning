from milkshakeiii_pb2 import *

def EmptyGame(height = 8, width = 8):
	return ([[NO_PIECE for i in range(height)] for j in range(width)])

def ResultOfPlace(game, piece, row, column):
	game[row][column] = piece
	game = ResultOfActivate(game, row, column)
	game[row][column] = piece
	return game

def ResultOfActivate(game, row, column):
	piece = game[row][column]
	game[row][column] = 0
	print "SET SOMETHING TO 0000000"
	if (piece == SQUARE):
		game = Propagate(game, (0, 1), row, column, -1)
		game = Propagate(game, (0, -1), row, column, -1)
		game = Propagate(game, (1, 0), row, column, -1)
		game = Propagate(game, (-1, 0), row, column, -1)
	if (piece == UP_TRIANGLE):
		game = Propagate(game, (0, 1), row, column, -1)
		game = Propagate(game, (1, -1), row, column, -1)
		game = Propagate(game, (-1, -1), row, column, -1)
	if (piece == CIRCLE):
		game = Propagate(game, (0, 1), row, column, 1)
		game = Propagate(game, (0, -1), row, column, 1)
		game = Propagate(game, (-1, 0), row, column, 1)
		game = Propagate(game, (1, 0), row, column, 1)
		game = Propagate(game, (1, 1), row, column, 1)
		game = Propagate(game, (-1, 1), row, column, 1)
		game = Propagate(game, (1, -1), row, column, 1)
		game = Propagate(game, (-1, -1), row, column, 1)
	if (piece == NO_PIECE):
		raise Exception("Result of Activate was called on a square with NO_PIECE!")
	return game

def Propagate(game, vector, row, column, distance):
	print game
	if (distance == 0):
		return game
	distance = distance - 1
	new_row = row + vector[1]
	new_column = column + vector[0]
	if (new_row >= len(game) or new_column >= len(game[0]) or new_row < 0 or new_column < 0):
		print "TERMINATE" + str(new_row) + str(new_column)
		return game
	if game[new_row][new_column] == NO_PIECE:
		game = Propagate(game, vector, new_row, new_column, distance)
	else:
		game = ResultOfActivate(game, new_row, new_column)
	return game
