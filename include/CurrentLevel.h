#pragma once

class CurrentLevel
{
public:
	CurrentLevel();
	~CurrentLevel();
	void draw();
		void delFromVector();
		void insertObj();
		
private:
	vector <vector <Object*>> m_current_level;
	vector <Cat> m_cats;
	Player m_player;
	int rows, cols;
};



