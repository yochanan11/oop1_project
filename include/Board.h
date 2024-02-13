#pragma once
#include <vector>
#include <string>
#include <fstream>

class Board
{
public:
	Board();
	~Board();
	bool readBoardText();
	char getNoteForVec(const int,const int)const;
	int getRows() const;
	int getCols() const;
	

private:
	std::ifstream m_board;
	std::vector<std::string> m_board_vec;
	int m_rows, m_cols;
};
