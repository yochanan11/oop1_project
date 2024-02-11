#pragma once
#include "StaticObj.h"

class Wall : public StaticObj
{

public:
	Wall(sf::Texture&);
	~Wall();
	sf::Sprite draw();

private:

};
