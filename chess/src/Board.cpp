#include "../include/Board.h"

Board::Board(Player*, Player*)
{
}

Board::~Board()
{
}

void Board::print() const
{
}

void Board::getString(char res[]) const {
	memcpy_s(res, 64, "rkbqkbkrpppppppp################################PPPPPPPPRNBQKBKR",64);
}

bool Board::isPieceOfPlayer(int row, int col, Player* pl) const
{
	return false;
}

bool Board::tryMove(int srcRow, int srcCol, int dstRow, int dstCol) const
{
	return false;
}

Piece** Board::getBoard() const
{
	return nullptr;
}

void Board::Move(int srcRow, int srcCol, int dstRow, int dstCol)
{
}

void Board::undoLastMove()
{
}
