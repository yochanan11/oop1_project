#pragma once
#include <SFML/Graphics.hpp>

class DrawGame
{
public:
	DrawGame();
	~DrawGame();
	void drawGameDetails();
	void drawGame();
	bool isOpen()const;
	void closeWindow();
	//sf::Event pollEvent(sf::Event);
	sf::RenderWindow* getWindow();

private:
	sf::RenderWindow m_window;
	float m_width;
	float m_height;
};

