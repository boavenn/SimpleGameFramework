#pragma once
#include "states/StateManager.hpp"
#include "gui/Box.hpp"

class Game
{
public:
	Game();
	void run();

private:
	void update(float dt, sf::Event e);
	void draw();

	sf::RenderWindow window;
	StateManager state_manager;
	Box* fps;
};

