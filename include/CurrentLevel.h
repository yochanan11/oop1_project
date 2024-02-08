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
		void insertObj();
		
private:
	std::vector <std::vector <ObjectGame*>> m_current_level;
	std::vector <Cat> m_cats;
	Mouse m_mouse;
	int rows, cols;
};



