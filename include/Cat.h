#pragma once
#include "MovingObj.h"

class Cat : public MovingObj
{
public:
	Cat(sf::Texture&);
	~Cat();
	void move();
	void collusion();

private:
	
};
