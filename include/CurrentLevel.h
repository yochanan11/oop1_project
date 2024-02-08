#pragma once
#include "ObjectGame.h"
#include "Cat.h"
#include "Mouse.h"
#include <vector>

class CurrentLevel
{
public:
	CurrentLevel();
	~CurrentLevel();
	void draw();
	void delFromVector();
	void insertObj();
	int getRows() const;
	void setRows(const int);
	int getCols() const;
	void setCols(const int);
	sf::Texture& getTexture(const char);


private:
	std::vector <std::vector <ObjectGame*>> m_current_level;
	std::vector <Cat> m_cats;
	Mouse m_mouse;
	int m_rows, m_cols;
	sf::Texture m_cat_tex, m_cheese_tex, m_gift_tex, m_key_tex, m_mouse_tex
		, m_door_tex, m_wall_tex, m_default_tex, m_default2_tex, m_backgorund_tex;
};



