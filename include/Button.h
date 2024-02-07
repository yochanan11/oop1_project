#pragma once
#include <SFML/Graphics.hpp>
class Button
{
public:
	Button();
	~Button();
	void draw();
	virtual void action();

private:
	sf::Text m_text;
};
