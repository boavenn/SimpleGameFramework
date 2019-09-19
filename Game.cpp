#include "Game.h"

Game::Game() : window(sf::VideoMode(800, 600, 32), "WINDOW TITLE")
{

}

void Game::run()
{
	sf::Clock clock;
	sf::Event e;
	while (window.isOpen())
	{
		while (window.pollEvent(e))
		{
			if (e.type == sf::Event::Closed)
				window.close();
		}
		update(clock.restart().asSeconds(), e);
		draw();
	}
}

void Game::update(float dt, sf::Event e)
{

}

void Game::draw()
{
	window.clear();

	window.display();
}
