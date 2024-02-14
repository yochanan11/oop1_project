#include "Controller.h"
#include "macroes.h"
#include <iostream>

//------------------------------
Controller::Controller()
{
}
//------------------------------
Controller::~Controller()
{
}
//-------------------------------
void Controller::run()
{
    if (m_level.buildLevel(m_my_board))
    {
        m_draw_game.drawGame();
        //std::cout << m_level.getCurrentLevel().getRows() << " " << m_level.getCurrentLevel().getCols() << "\n";
    }
}