#pragma once
#include "StaticObj.h"

class Wall : public StaticObj
{

public:
	Wall();
	~Wall();
	void draw(sf::RenderWindow&);

private:

};
