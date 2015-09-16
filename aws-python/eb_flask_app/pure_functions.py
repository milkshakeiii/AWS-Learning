from milkshakeiii_pb2 import *

def EmptyGame(height = 8, width = 8):
	return ([[NO_PIECE for i in range(height)] for j in range(width)])

def PieceRepresentation(piece):
	if (piece == NO_PIECE):
		return "-"
	if (piece == CIRCLE):
		return "O"
	if (piece == SQUARE):
		return "H"
	if (piece == UP_TRIANGLE):
		return "^"
	if (piece == DOWN_TRIANGLE):
		return "v"
	if (piece == UP_EL):
		return "L"
	if (piece == DOWN_EL):
		return "7"
	if (piece == EX):
		return "X"
	return "?"

def ValidateTurn(game_history, turn):
	game = GameFromHistory(game_history)
	game = ResultOfPlace(game, turn)
	turn_count = len(game_history.constituent_turns) + 1
	if (turn_count <= 6 and CountPieces(game) != turn_count):
		return False
	return True

def CountPieces(game):
	count = 0
	for row in game:
		for piece in row:
			if (piece != 0):
				count = count + 1
	return count

def CheckForWinner(game_history):
	if (len(game_history.constituent_turns)) <= 6:
		return None
	game = GameFromHistory(game_history)
	piece_owners = PieceOwnersFromHistory(game_history)
	living_piece_owners = set()
	for row in range(len(game)):
		for column in range(len(game[row])):
			piece = game[row][column]
			if (piece != NO_PIECE):
				living_piece_owners.add(piece_owners[row][column])
	print living_piece_owners
	if (len(living_piece_owners) == 1):
		return living_piece_owners.pop()
	return None
				
		

def PieceOwnersFromHistory(game_history):
	game = GameFromHistory(game_history)
	piece_owners = [[None for square in game[0]] for row in game]
	for turn in game_history.constituent_turns:
		row = turn.row_place
		column = turn.column_place
		piece_owners[row][column] = turn.player_id
	print piece_owners
	return piece_owners

def GameFromHistory(game_history):
	game = EmptyGame()
	for turn in game_history.constituent_turns:
		game = ResultOfPlace(game, turn)
	return game

def ResultOfPlace(game, turn):
	row = turn.row_place
	column = turn.column_place
	game[row][column] = turn.placed_piece
	game = ResultOfActivate(game, row, column)
	game[row][column] = turn.placed_piece
	return game

def ResultOfActivate(game, row, column):
	piece = game[row][column]
	game[row][column] = 0
	print str(piece) + " exploded"
	if (piece == SQUARE):
		game = Propagate(game, (0, 1), row, column, -1)
		game = Propagate(game, (0, -1), row, column, -1)
		game = Propagate(game, (1, 0), row, column, -1)
		game = Propagate(game, (-1, 0), row, column, -1)
	if (piece == DOWN_TRIANGLE):
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
	if (piece == UP_TRIANGLE):
		game = Propagate(game, (0, -1), row, column, -1)
		game = Propagate(game, (1, 1), row, column, -1)
		game = Propagate(game, (-1, 1), row, column, -1)
	if (piece == EX):
		game = Propagate(game, (1, 1), row, column, -1)
		game = Propagate(game, (1, -1), row, column, -1)
		game = Propagate(game, (-1, 1), row, column, -1)
		game = Propagate(game, (-1, -1), row, column, -1)
	if (piece == DOWN_EL):
		game = Propagate(game, (0, 1), row, column, 2)
		game = Propagate(game, (-1, 0), row, column, 2)
	if (piece == UP_EL):
		game = Propagate(game, (0, -1), row, column, 2)
		game = Propagate(game, (1, 0), row, column, 2)
	if (piece == NO_PIECE):
		raise Exception("Result of Activate was called on a square with NO_PIECE!")
	return game

def Propagate(game, vector, row, column, distance):
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
