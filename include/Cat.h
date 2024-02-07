#pragma once
#include "MovingObj.h"

class Cat : public MovingObj
{
public:
	Cat();
	~Cat();
	void move();
	void collusion();

private:

};
