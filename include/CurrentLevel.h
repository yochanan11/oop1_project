#pragma once
#include "ObjectGame.h"
#include "Cat.h"
#include "Mouse.h"
#include <vector>

class CurrentLevel
{
public:
	CurrentLevel();
	~CurrentLevel();
	void draw();
	void delFromVector();
	void insertObj(std::vector<ObjectGame*>);
	int getRows() const;
	void setRows(const int);
	int getCols() const;
	void setCols(const int);
	int getSizeVectorOfObj()const;
	ObjectGame* getSpriteForIndex(const int,const int);
	//ObjectGame* getTexture(const char);


private:
	std::vector <std::vector <ObjectGame*>> m_current_level;
	std::vector <Cat> m_cats;
	//Mouse m_mouse;
	int m_rows, m_cols;
};



