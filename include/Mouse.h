#pragma once
#include "MovingObj.h"

class Mouse : public MovingObj
{
public:
	Mouse();
	~Mouse();
	void move();
	void collusion();
	int getLife() const;
	void addLife();
	void lifeDownload();
	int getPoint() const;
	void addPoint();
	int getKey() const;
	void addKey();
	



private:
	int m_life = 3;
	int m_point = 0;
	int m_time_left = 0;
	int m_num_of_key = 0;
};
