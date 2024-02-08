#pragma once
#include "Board.h"
#include "CurrentLevel.h"

class Level
{
public:
	Level();
	~Level();
	bool buildLevel(Board&);


private:
	CurrentLevel m_current_level;
};
