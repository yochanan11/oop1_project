#pragma once

class Level
{
public:
	Level();
	~Level();
	void buildLevel(Board&);


private:
	CurrentLevel m_current_level;
};
