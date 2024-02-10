#include "CurrentLevel.h"
#include "macroes.h"
#include "Level.h"

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

//----------------------------------------




