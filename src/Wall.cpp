#include "Wall.h"
//-----------------------------------
Wall::Wall() {

}
//-----------------------------------
Wall::~Wall() {

}
//-----------------------------------
void Wall::draw(sf::RenderWindow& window)
{
	window.draw(m_sprite);
}
//-----------------------------------
