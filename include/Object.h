#pragma once
#include <SFML/Graphics.hpp>
class Object
{
public:
	Object();
	~Object();
	virtual void draw();
private:
	sf::Sprite m_sprite;
};

