#include "StaticObj.h"
//-------------------------------------
StaticObj::StaticObj()
{

}
//-------------------------------------
StaticObj::~StaticObj()
{
}
//-------------------------------------
void StaticObj::draw(sf::RenderWindow& window)
{
	window.draw(m_sprite);
}
