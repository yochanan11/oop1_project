#pragma once
#include "ObjectGame.h"

class StaticObj:public ObjectGame
{
public:
	StaticObj();
	StaticObj(sf::Texture&);
	~StaticObj();
	sf::Sprite draw();
private:

};

