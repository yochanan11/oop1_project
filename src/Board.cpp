#include "Board.h"
#include <sstream>

//------------------------------
Board::Board() :m_board(std::ifstream("Board.txt"))
{
}
//------------------------------
Board::~Board()
{
}
//-------------------------------
bool Board::readBoardText(int& m_row,int& m_col)
{
    std::string line;
    std::getline(m_board, line);
    auto size = std::istringstream(line);
    if (size >> m_row >> m_col)
    {
        m_board_vec.clear();
        for (unsigned int i = 0; i < m_row; ++i)
            if (std::getline(m_board, line))
                m_board_vec.push_back(line);
        std::getline(m_board, line);// for the space between levels
        return true;
    }
    return false;
}
//-------------------------------
char Board::getNoteForVec(const int r, const int c)const { return m_board_vec[r][c]; }
//-------------------------------