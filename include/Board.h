#pragma once
#include <vector>
#include <string>
#include <fstream>

class Board
{
public:
	Board();
	~Board();
	bool readBoardText(int&,int&);
	char getNoteForVec(const int,const int)const;
	

private:
	std::ifstream m_board;
	std::vector<std::string> m_board_vec;
};
