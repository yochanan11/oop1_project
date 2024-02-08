#pragma once
#include <SFML/Graphics.hpp>
class ObjectGame
{
public:
	ObjectGame();
	ObjectGame(sf::Texture&);
	virtual	~ObjectGame();
	virtual void draw();
private:
	sf::Sprite m_sprite;
};

