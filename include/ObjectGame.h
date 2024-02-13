#pragma once
#include <SFML/Graphics.hpp>
class ObjectGame
{
public:
	ObjectGame();
	void setPosition(const sf::Vector2f);
	void setOrigin(const float,const float);
	void setScale(const float, const float);
	bool isDel() const;
	void eatObj(const bool);
	virtual	~ObjectGame() = default;
	virtual sf::Sprite draw();
protected:
	sf::Sprite m_sprite;
private:
	
};

