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
	int row, col;
	if (board.readBoardText(row, col))
	{
		m_current_level.setRows(row);
		m_current_level.setCols(col);
		for (size_t r = 0; r < m_current_level.getRows(); r++)
		{
			std::vector<ObjectGame*> temp_vec;
			for (size_t c = 0; c < m_current_level.getCols(); c++)
			{
				temp_vec.push_back(getObject(board.getNoteForVec(r, c)));
			}
			m_current_level.insertObj(temp_vec);
		}
		return true;
	}
	return false;
}
//-------------------------------------------------
ObjectGame* Level::getObject(const char note)
{
	if (note == CAT_N)
	{
		auto cat = Cat(m_mouse_tex);
		m_object_game = &cat;

	}
	else if (note == MOUSE_N)
	{
		auto mouse = Mouse(m_mouse_tex);
		m_object_game = &mouse;
	}
	else if (note == DOOR_N)
	{
		auto door = Door(m_door_tex);
		m_object_game = &door;
	}
	else if (note == KEY_N)
	{
		auto key = Key(m_key_tex);
		m_object_game = &key;
	}
	else if (note == WALL_N)
	{
		auto wall = Wall(m_wall_tex);
		m_object_game = &wall;
	}
	else if (note == GIFT_N)
	{
		auto gift = Gift(m_gift_tex);
		m_object_game = &gift;
	}
	else if (note == CHEESE_N) {
		auto cheese = Cheese(m_cheese_tex);
		m_object_game = &cheese;
	}
	else {
		auto object_default = ObjectGame(m_default_tex);
		m_object_game = &object_default;
	}
	return m_object_game;
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
	}
}
