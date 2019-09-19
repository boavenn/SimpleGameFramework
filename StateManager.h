#pragma once
#include "State.h"

class StateManager
{
public:
	void pushState(std::unique_ptr<State> new_state, bool is_swapping = 0, bool is_first = 0);
	void popState();
	bool isEmpty();
	State& getTop();
	State& getPrevious(unsigned idx);

private:
	std::vector<std::unique_ptr<State>> stack;
};

