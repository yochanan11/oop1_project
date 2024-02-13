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

        while (m_draw_game.getWindow()->isOpen())
        {
          m_draw_game.getWindow()->clear();
          m_draw_game.getWindow()->draw(sf::Sprite(m_level.getTexture(BACKGROUND_N)));
          for (size_t i = 0; i < m_my_board.getRows(); i++)
          {
              for (size_t j = 0; j < m_my_board.getCols(); j++)
                  m_draw_game.getWindow()->draw(m_level.getCurrentLevel().getSpriteForIndex(i)->draw());
          }
          m_draw_game.getWindow()->display();

            if (auto event = sf::Event{}; m_draw_game.getWindow()->pollEvent(event))
            {
                switch (event.type)
                {
                case sf::Event::Closed:
                    m_draw_game.getWindow()->close();
                    break;
                }
            }
        }
    }
}