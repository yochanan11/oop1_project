#pragma once
#include "Board.h"
#include "CurrentLevel.h"

class Level
{
public:
	Level();
	~Level();
	bool buildLevel(Board&);
	std::unique_ptr<ObjectGame> getObject(const char);
	CurrentLevel getCurrentLevel()const;
private:
	CurrentLevel m_current_level;
	
	ObjectGame* m_object_game = nullptr;
};
