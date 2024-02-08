#include "Mouse.h"
//-----------------------------------
Mouse::Mouse() {

}
//-----------------------------------
Mouse::~Mouse() {

}
//-----------------------------------
void Mouse::move() {

}
//-----------------------------------
void Mouse::collusion()
{

}
//-----------------------------------
int Mouse::getLife() const { return m_life; }
//-----------------------------------
void Mouse::addLife() { m_life++; }
//-----------------------------------
void Mouse::lifeDownload(){ m_life--; }
//-----------------------------------
int Mouse::getPoint() const { return m_point; }
//-----------------------------------
void Mouse::addPoint() { m_point++; }
//-----------------------------------
int Mouse::getKey() const { return m_num_of_key; }
//-----------------------------------
void Mouse::addKey() { m_num_of_key++; }
//-----------------------------------
