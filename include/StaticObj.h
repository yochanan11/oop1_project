#pragma once
#include "ObjectGame.h"

class StaticObj:public ObjectGame
{
public:
	StaticObj();
	StaticObj(sf::Texture&);
	~StaticObj();
	void draw();
private:

};

