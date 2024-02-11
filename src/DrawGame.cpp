#include "DrawGame.h"
#include "macroes.h"
//-----------------------------------------
DrawGame::DrawGame() :m_width(MENU_WIDTH + BOARD_WIDTH), m_height(WINDOW_HEIGHT), 
m_window(sf::RenderWindow(sf::VideoMode(MENU_WIDTH + BOARD_WIDTH, WINDOW_HEIGHT), "Board"))
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
	//sf::RenderWindow window(sf::VideoMode(m_width,m_height), "Board");
	//m_window = &window;
}
//-----------------------------------------
bool DrawGame::isOpen()const { return m_window.isOpen(); }
//-----------------------------------------
void DrawGame::closeWindow() { m_window.close(); }
//-----------------------------------------

//-----------------------------------------
//sf::Event DrawGame::pollEvent(sf::Event event) {return m_window->pollEvent(event); }
//--------------------------------------------
sf::RenderWindow* DrawGame::getWindow()
{
	return &m_window;
}
//-----------------------------------------