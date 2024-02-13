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
	if (!m_cat_tex.loadFromFile(CAT_F) ||
		!m_cheese_tex.loadFromFile(CHEESE_F) ||
		!m_default_tex.loadFromFile(DEFAULT_F) ||
		!m_default2_tex.loadFromFile(DEFAULT2_F) ||
		!m_door_tex.loadFromFile(DOOR_F) ||
		!m_gift_tex.loadFromFile(GIFT_F) ||
		!m_key_tex.loadFromFile(KEY_F) ||
		!m_mouse_tex.loadFromFile(MOUSE_F) ||
		!m_wall_tex.loadFromFile(WALL_F) ||
		!m_backgorund_tex.loadFromFile(BACKGROUND_F))
		//!m_font.loadFromFile("ARIAL.TTF"))
	{
		std::cerr << "This image was not loaded \n";
		EXIT_FAILURE;
	}
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
		return std::make_unique<Cat>;
	case MOUSE_N:
		return std::make_unique<Mouse>;
	case CHEESE_N:
		return std::make_unique<Cheese>;
	case GIFT_N:
		return std::make_unique<Gift>;
	case KEY_N:
		return std::make_unique<Key>;
	case DOOR_N:
		return std::make_unique<Door>;
	case WALL_N:
		return std::make_unique<Wall>;
	}
}
//-------------------------------------------------
sf::Texture& Level::getTexture(const char note) 
{
	switch (note)
	{
	case CAT_N:
		return m_cat_tex;
	case MOUSE_N:
		return m_mouse_tex;
	case CHEESE_N:
		return m_cheese_tex;
	case GIFT_N:
		return m_gift_tex;
	case KEY_N:
		return m_key_tex;
	case DOOR_N:
		return m_door_tex;
	case WALL_N:
		return m_wall_tex;
	case SPASE:
		return m_default_tex;
	case BACKGROUND_N:
		return m_backgorund_tex;
	}
}
//---------------------------------------------------
CurrentLevel Level::getCurrentLevel() const
{
	return m_current_level;
}
//---------------------------------------------------

