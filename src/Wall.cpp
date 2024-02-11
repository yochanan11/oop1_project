#include "Wall.h"
//-----------------------------------
Wall::Wall(sf::Texture& tex) :StaticObj(tex) {

}
//-----------------------------------
Wall::~Wall() {

}
//-----------------------------------
sf::Sprite Wall::draw() {
	return m_sprite;
}
//-----------------------------------
