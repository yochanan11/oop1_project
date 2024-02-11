#pragma once
#include <SFML/Graphics.hpp>
class ObjectGame
{
public:
	ObjectGame();
	ObjectGame(sf::Texture&);
	void setPosition(const sf::Vector2f);
	void setOrigin(const float,const float);
	void setScale(const float, const float);

	virtual	~ObjectGame();
	virtual sf::Sprite draw();
protected:
	sf::Sprite m_sprite;
private:
	
};

