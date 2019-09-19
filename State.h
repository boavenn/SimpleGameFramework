#pragma once
#include <SFML/Graphics.hpp>

class State
{
public:
	State(sf::RenderWindow& w) : window(w) {}
	virtual void update(float dt, sf::Event e) = 0;
	virtual void draw() = 0;
	virtual void checkInput(float dt, sf::Event e) = 0;

protected:
	sf::RenderWindow& window;
};

