#include "DrawGame.h"
#include "macroes.h"
//-----------------------------------------
DrawGame::DrawGame():m_width(MENU_WIDTH + BOARD_WIDTH),m_height(WINDOW_HEIGHT)
{
}
//-----------------------------------------
DrawGame::~DrawGame()
{
}
//-----------------------------------------
void DrawGame::drawGameDetails()
{
}
//-----------------------------------------
void DrawGame::drawGame()
{
	sf::RenderWindow window(sf::VideoMode(m_width,m_height), "Board");
	m_window = &window;
}
//-----------------------------------------