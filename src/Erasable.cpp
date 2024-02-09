#include "Erasable.h"
Erasable::Erasable(){}
//-----------------------------------
Erasable::Erasable(sf::Texture& tex):StaticObj(tex) {

}
//-----------------------------------
Erasable::~Erasable() {

}
//-----------------------------------
bool Erasable::isDel() const { return m_obj_del; }
//-----------------------------------
void Erasable::eatObj(const bool eaten) { m_obj_del = eaten; }
