#pragma once
#include <SFML/Graphics.hpp>

class Game
{
public:
	Game();
	void run();

private:
	void update(float dt, sf::Event e);
	void draw();

	sf::RenderWindow window;
};

