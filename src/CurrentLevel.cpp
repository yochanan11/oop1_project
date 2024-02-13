#include "CurrentLevel.h"
#include "macroes.h"
#include "Level.h"
#include <iostream>

//------------------------------
CurrentLevel::CurrentLevel()
{
}
//------------------------------
CurrentLevel::~CurrentLevel()
{
}
//-------------------------------
void CurrentLevel::draw()
{
	
}
//----------------------------------
void CurrentLevel::delFromVector()
{

}
//----------------------------------------
void CurrentLevel::insertObj(StaticObj* vec)
{
	m_current_level.push_back(vec);
}
//----------------------------------------
int CurrentLevel::getSizeVectorOfObj()const { return m_current_level.size(); }
//----------------------------------------
/*std::unique_ptr <ObjectGame> CurrentLevel::getSpriteForIndex(const int i)
{
	std::cout << m_current_level.size();
	return std::unique_ptr <ObjectGame>(m_current_level[i]);
}
--*/





