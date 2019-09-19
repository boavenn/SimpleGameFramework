#include "StateManager.h"

void StateManager::pushState(std::unique_ptr<State> new_state)
{
	stack.push_back(std::move(new_state));
}

void StateManager::popState()
{
	stack.pop_back();
}

bool StateManager::isEmpty()
{
	return stack.empty();
}

State& StateManager::getTop()
{
	return *stack.back();
}
