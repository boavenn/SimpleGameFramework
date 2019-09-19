#pragma once
#include "Button.h"
#include "Keyboard.h"

class InputButton : public Button
{
public:
	InputButton(const sf::Vector2f& size, const sf::Vector2f& pos);

	bool& isInputActive();
	void checkUserInput(float dt, sf::Event e);

private:
	std::string input = "";
	bool is_input_active = false;
	Keyboard keyboard;
};

