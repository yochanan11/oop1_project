#include "StaticObj.h"
StaticObj::StaticObj(){}
//-------------------------------------
StaticObj::StaticObj(sf::Texture& tex) :ObjectGame(tex)
{

}
//-------------------------------------
StaticObj::~StaticObj()
{
}
//-------------------------------------
sf::Sprite StaticObj::draw()
{
	return m_sprite;
}
