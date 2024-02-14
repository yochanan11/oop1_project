#include "GameObj.h"
//------------------------------
GameObj::GameObj(){}
//------------------------------
GameObj::GameObj(sf::Texture& tex) : m_sprite(tex) {}
//------------------------------
void GameObj::setPosition(const sf::Vector2f vec) { m_sprite.setPosition(vec); }
//------------------------------
void GameObj::setOrigin(const float x, const float y) { m_sprite.setOrigin(x, y); }
//------------------------------
void GameObj::setScale(const float x, const float y) { m_sprite.scale(x, y); }
//------------------------------
//------------------------------

//------------------------------
bool GameObj::isDel() const { return true; }
//------------------------------
void GameObj:: eatObj(const bool){}
