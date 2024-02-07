#pragma once
#include "MovingObj.h"

class Mouse : public MovingObj
{
public:
	Mouse();
	~Mouse();
	void move();
	void collusion();

private:

};
