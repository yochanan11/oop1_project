#pragma once
#include "ObjectGame.h"


class MovingObj:public ObjectGame
{
public:
	MovingObj(sf::Texture&);
	~MovingObj();
	virtual void move();
	virtual void collusion();

private:

};
