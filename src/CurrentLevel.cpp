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
void CurrentLevel::insertObj(std::vector<ObjectGame*> vec)
{
	m_current_level.push_back(vec);
}
//----------------------------------------
int CurrentLevel::getRows() const { return m_rows; }
//----------------------------------------
int CurrentLevel::getCols() const { return m_cols; }

//----------------------------------------
void CurrentLevel::setRows(const int rows) { m_rows = rows; }
//----------------------------------------
void CurrentLevel::setCols(const int cols) { m_cols = cols; }
//---------------------------------------
int CurrentLevel::getSizeVectorOfObj()const { return m_current_level.size(); }
//----------------------------------------
/*std::unique_ptr <ObjectGame> CurrentLevel::getSpriteForIndex(const int i)
{
	std::cout << m_current_level.size();
	return std::unique_ptr <ObjectGame>(m_current_level[i]);
}
--*/





