#pragma once
#include <SFML/Graphics.hpp>

class SingleTone
{
public:
	static SingleTone& instance() {
		static auto single_tone = SingleTone(); // static in function!
		return single_tone;
	}
	sf::Texture& getTexture(const char);

private:
	SingleTone();
	~SingleTone();

	sf::Texture m_cat_tex, m_cheese_tex, m_gift_tex, m_key_tex, m_mouse_tex
		, m_door_tex, m_wall_tex, m_default_tex, m_default2_tex, m_background_tex;
};
