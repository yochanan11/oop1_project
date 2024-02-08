#pragma once
#include <SFML/Graphics.hpp>
class ObjectGame
{
public:
	ObjectGame();
	virtual	~ObjectGame();
	virtual void draw();
private:
	sf::Sprite m_sprite;
};

