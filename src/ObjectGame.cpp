#include "ObjectGame.h"
//------------------------------
ObjectGame::ObjectGame(){}
//------------------------------
void ObjectGame::setPosition(const sf::Vector2f vec) { m_sprite.setPosition(vec); }
//------------------------------
void ObjectGame::setOrigin(const float x, const float y) { m_sprite.setOrigin(x, y); }
//------------------------------
void ObjectGame::setScale(const float x, const float y) { m_sprite.scale(x, y); }
//------------------------------

//------------------------------

//------------------------------
bool ObjectGame::isDel() const { return true; }
//------------------------------
void ObjectGame:: eatObj(const bool){}
