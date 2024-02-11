#pragma once
#include "Board.h"
#include "CurrentLevel.h"

class Level
{
public:
	Level();
	~Level();
	bool buildLevel(Board&);
	ObjectGame* getObject(const char);
	sf::Texture& getTexture(const char);
	CurrentLevel getCurrentLevel()const;
private:
	CurrentLevel m_current_level;
	sf::Texture m_cat_tex, m_cheese_tex, m_gift_tex, m_key_tex, m_mouse_tex
		, m_door_tex, m_wall_tex, m_default_tex, m_default2_tex, m_backgorund_tex;
	ObjectGame* m_object_game = nullptr;
};
