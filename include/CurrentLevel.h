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
	std::unique_ptr <ObjectGame> getSpriteForIndex(const int);
	//ObjectGame* getTexture(const char);


private:
	std::vector <std::unique_ptr <ObjectGame>> m_current_level;
	std::vector <Cat> m_cats;
	//Mouse m_mouse;
	int m_rows, m_cols;
};



