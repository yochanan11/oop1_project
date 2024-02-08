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
	int m_life;
	int m_point;
	int m_time_left;
	int num_of_key;
};
