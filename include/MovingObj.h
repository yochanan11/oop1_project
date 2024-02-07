#pragma once
#include "Object.h"


class MovingObj:public Object
{
public:
	MovingObj();
	~MovingObj();
	virtual void move();
	virtual void collusion();

private:

};
