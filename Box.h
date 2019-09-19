#pragma once
#include "ResourceManager.h"

class Box
{
public:
	Box(const sf::Vector2f& size, const sf::Vector2f& pos);
	void draw(sf::RenderWindow& w);

	void setMainIdleColor(const sf::Color& c);
	void setMainActiveColor(const sf::Color& c);
	void setOutlineIdleColor(const sf::Color& c);
	void setOutlineActiveColor(const sf::Color& c);
	void setTextIdleColor(const sf::Color& c);
	void setTextActiveColor(const sf::Color& c);
	void setFont(const std::string& font_name);
	void setText(const std::string& str, float spacing = 1.5f);
	void setTexture(const std::string& tex_name);

	const sf::Vector2f& getSize();
	const sf::Vector2f& getPosition();

protected:
	void updateMainColor(const sf::Color& c);
	void updateOutlineColor(const sf::Color& c);
	void updateTextColor(const sf::Color& c);
	void updateTextSize();

	sf::RectangleShape box;
	sf::Font font;
	sf::Text text;
	sf::Color main_idle, main_active;
	sf::Color outline_idle, outline_active;
	sf::Color text_idle, text_active;
	bool is_texture_set = false;
};

