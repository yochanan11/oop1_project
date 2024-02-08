#include "CurrentLevel.h"
#include "macroes.h"
#include <iostream>

//------------------------------
CurrentLevel::CurrentLevel()
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
void CurrentLevel::insertObj()
{

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
sf::Texture& CurrentLevel::getTexture(const char note) 
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
//----------------------------------------




