#pragma once
#include "ObjectGame.h"
#include <vector>

class StaticObj;
class Mouse;
class Cat;

class CurrentLevel
{
public:
	CurrentLevel();
	~CurrentLevel();
	void draw();
	void delFromVector();
	void insertObj(std::unique_ptr<StaticObj>);
	
	int getSizeVectorOfObj()const;
	std::unique_ptr <ObjectGame> getSpriteForIndex(const int);
	//ObjectGame* getTexture(const char);


private:
	std::vector <std::unique_ptr <StaticObj>> m_current_level;
	std::vector <Cat> m_cats;
	//Mouse m_mouse;
	
};



