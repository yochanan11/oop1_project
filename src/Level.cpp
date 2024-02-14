#include "Level.h"
#include "Board.h"
#include "macroes.h"
#include "Door.h"
#include "Wall.h"
#include "Gift.h"
#include "Key.h"
#include "Cheese.h"

#include <iostream>
//------------------------------
Level::Level()
{
}
//------------------------------
Level::~Level()
{
}
//-------------------------------
bool Level::buildLevel(Board& board)
{
	
	if (board.readBoardText())
	{
		return true;
	}
	return false;
}
//-------------------------------------------------
std::unique_ptr <ObjectGame> Level::getObject(const char note)
{
	switch (note)
	{
	case CAT_N:
		return std::make_unique<Cat>();
	case MOUSE_N:
		return std::make_unique<Mouse>();
	case CHEESE_N:
		return std::make_unique<Cheese>();
	case GIFT_N:
		return std::make_unique<Gift>();
	case KEY_N:
		return std::make_unique<Key>();
	case DOOR_N:
		return std::make_unique<Door>();
	case WALL_N:
		return std::make_unique<Wall>();
	}
}
//-------------------------------------------------

//---------------------------------------------------
CurrentLevel Level::getCurrentLevel() const
{
	return m_current_level;
}
//---------------------------------------------------

