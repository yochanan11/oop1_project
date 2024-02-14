#pragma once
#include <SFML/Graphics.hpp>
class GameObj
{
public:
	GameObj();
	GameObj(sf::Texture&);
	void setPosition(const sf::Vector2f);
	void setOrigin(const float,const float);
	void setScale(const float, const float);
	bool isDel() const;
	void eatObj(const bool);
	virtual	~GameObj() = default;
	virtual void draw(sf::RenderWindow&) = 0;
protected:
	sf::Sprite m_sprite;
private:
	
};

