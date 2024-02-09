#include "CurrentLevel.h"
#include "macroes.h"
#include "Door.h"
#include "Wall.h"
#include "Gift.h"
#include "Key.h"
#include "Cheese.h"

#include <iostream>

//------------------------------
CurrentLevel::CurrentLevel():m_mouse(m_mouse_tex)
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
CurrentLevel::~CurrentLevel()
{
}
//-------------------------------
void CurrentLevel::draw()
{
	
}
//----------------------------------
void CurrentLevel::delFromVector()
{

}
//----------------------------------------
void CurrentLevel::insertObj(std::vector<ObjectGame*> vec)
{
	m_current_level.push_back(vec);
}
//----------------------------------------
int CurrentLevel::getRows() const { return m_rows; }
//----------------------------------------
int CurrentLevel::getCols() const { return m_cols; }

//----------------------------------------
void CurrentLevel::setRows(const int rows) { m_rows = rows; }
//----------------------------------------
void CurrentLevel::setCols(const int cols) { m_cols = cols; }
//---------------------------------------
ObjectGame* CurrentLevel::getTexture(const char note) 
{
	if(note == CAT_N)
	{
		Cat* cat_ptr;
		auto cat = Cat(m_mouse_tex);
		cat_ptr = &cat;
		return cat_ptr;
	}
	else if(note == MOUSE_N)
	{
		auto mouse = Mouse(m_mouse_tex);
		return &mouse;
	}
	else if (note == DOOR_N)
	{
		auto door = Door();
		return &door;
	}
	else if (note == KEY_N)
	{
		auto key = Key();
		return &key;
	}
	else if (note == WALL_N)
	{
		auto wall = Wall(m_wall_tex);
		return &wall;
	}
	else if (note == GIFT_N)
	{
		auto gift = Gift();
		return &gift;
	}
	else if (note == CHEESE_N) {
		auto cheese = Cheese();
		return &cheese;
	}
	else {
		auto object_default = ObjectGame(m_default_tex);
		return &object_default;
	}

	/*switch (note)
	{
	case CAT_N:
		return &cat;
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
	}*/
}
//----------------------------------------




