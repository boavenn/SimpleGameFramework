#pragma once
#include "State.h"

class StateManager
{
public:
	void pushState(std::unique_ptr<State> new_state);
	void popState();
	bool isEmpty();
	State& getTop();

private:
	std::vector<std::unique_ptr<State>> stack;
};

