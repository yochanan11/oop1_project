#pragma once
#include <SFML/Graphics.hpp>

class DrawGame
{
public:
	DrawGame();
	~DrawGame();
	void drawGameDetails();
	void drawGame();

private:
	sf::RenderWindow* m_window = nullptr;
	float m_width;
	float m_height;
};

