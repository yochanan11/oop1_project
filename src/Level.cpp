#include "Level.h"
#include "Board.h"

//------------------------------
Level::Level()
{
}
//------------------------------
Level::~Level()
{
}
//-------------------------------
bool Level::buildLevel(Board& board)
{
	int row, col;
	if (board.readBoardText(row, col))
	{
		m_current_level.setRows(row);
		m_current_level.setCols(col);
		for (size_t r = 0; r < m_current_level.getRows(); r++)
		{
			std::vector<ObjectGame*> temp_vec;
			for (size_t c = 0; c < m_current_level.getCols(); c++)
			{
				temp_vec.push_back(m_current_level.getTexture(board.getNoteForVec(r, c)));
			}
			m_current_level.insertObj(temp_vec);
		}
		return true;
	}
	return false;
}