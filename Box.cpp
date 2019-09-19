#include "Box.h"

Box::Box(const sf::Vector2f& size, const sf::Vector2f& pos)
{
	box.setSize(size);
	box.setOrigin({ float(size.x / 2.f), float(size.y / 2.f) });
	box.setPosition(pos);

	sf::Color default_c = sf::Color::Transparent;
	main_idle = default_c;
	main_active = default_c;
	outline_idle = default_c;
	outline_active = default_c;
	text_idle = default_c;
	text_active = default_c;
}

void Box::draw(sf::RenderWindow& w)
{
	w.draw(box);
	w.draw(text);
}

void Box::setMainIdleColor(const sf::Color& c)
{
	main_idle = c;
	updateMainColor(c);
}

void Box::setMainActiveColor(const sf::Color& c) 
{ 
	main_active = c; 
}

void Box::setOutlineIdleColor(const sf::Color& c)
{
	outline_idle = c;
	updateOutlineColor(c);
}

void Box::setOutlineActiveColor(const sf::Color& c)
{
	outline_active = c;
}

void Box::setTextIdleColor(const sf::Color& c)
{
	text_idle = c;
	updateTextColor(c);
}

void Box::setTextActiveColor(const sf::Color& c)
{
	text_active = c;
}

void Box::setFont(const std::string& font_name)
{
	font = ResourceManager::get().fonts.get(font_name);
	text.setFont(font);
}

void Box::setText(const std::string& str, float spacing)
{
	text.setString(str);
	text.setLetterSpacing(spacing);
	updateTextSize();
}

void Box::setTexture(const std::string& tex_name)
{
	box.setTexture(&ResourceManager::get().textures.get(tex_name));
	is_texture_set = true;
}

const sf::Vector2f& Box::getSize()
{
	return box.getSize();
}

const sf::Vector2f& Box::getPosition()
{
	return box.getPosition();
}

void Box::updateMainColor(const sf::Color& c)
{
	box.setFillColor(c);
}

void Box::updateOutlineColor(const sf::Color& c, float thickness)
{
	box.setOutlineColor(c);
	box.setOutlineThickness(thickness);
}

void Box::updateTextColor(const sf::Color& c)
{
	text.setFillColor(c);
}

void Box::updateTextSize()
{
	text.setCharacterSize(unsigned(box.getSize().y * 0.8f));
	sf::FloatRect text_rect = text.getLocalBounds();
	text.setOrigin(text_rect.left + text_rect.width / 2.f, text_rect.top + text_rect.height / 2.f);
	text.setPosition(box.getPosition());
}
