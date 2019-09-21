#pragma once
#include "Box.h"

class Button : public Box
{
public:
	Button(const sf::Vector2f& size, const sf::Vector2f& pos);
	void update(sf::RenderWindow& w);

	bool isActive(sf::RenderWindow& w);
	bool isClicked(sf::RenderWindow& w);

	void setToIdle();
	void setToActive();

protected:
	bool was_active = false;
};

