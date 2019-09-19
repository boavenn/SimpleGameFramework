#include "StateManager.h"

void StateManager::pushState(std::unique_ptr<State> new_state, bool is_swapping, bool is_first)
{
	if (is_swapping)
		stack.pop_back();
	if (is_first && !stack.empty())
		stack.clear();

	stack.push_back(std::move(new_state));
	stack.back()->setPlace(stack.size() - 1);

	if (!is_swapping && !is_first)
		stack.back()->isConcurrent() = true;
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

State& StateManager::getPrevious(unsigned idx)
{
	return *stack[idx - 1];
}
