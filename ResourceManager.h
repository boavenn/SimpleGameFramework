#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "ResourceHolder.h"

class ResourceManager
{
public:
	static ResourceManager& get();

	ResourceHolder<sf::Texture> textures;
	ResourceHolder<sf::SoundBuffer> audio;
	ResourceHolder<sf::Font> fonts;

private:
	ResourceManager();
};

