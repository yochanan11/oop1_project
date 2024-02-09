#pragma once
#include "StaticObj.h"

class Wall : public StaticObj
{

public:
	Wall(sf::Texture&);
	~Wall();
	void draw();

private:

};
