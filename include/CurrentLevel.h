#pragma once
#include "ObjectGame.h"
#include "Cat.h"
#include "Mouse.h"
#include <vector>

class StaticObj;

class CurrentLevel
{
public:
	CurrentLevel();
	~CurrentLevel();
	void draw();
	void delFromVector();
	void insertObj(StaticObj*);
	
	int getSizeVectorOfObj()const;
	std::unique_ptr <ObjectGame> getSpriteForIndex(const int);
	//ObjectGame* getTexture(const char);


private:
	std::vector <std::unique_ptr <StaticObj>> m_current_level;
	std::vector <Cat> m_cats;
	Mouse m_mouse;
	
};



