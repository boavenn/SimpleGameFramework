#include "State.h"

bool State::isAbleToInput(float dt)
{
	if (input_ability)
		return true;
	else
	{
		transition_elapsed += dt;
		if (transition_elapsed >= transition_freeze_time)
		{
			transition_elapsed = 0.f;
			input_ability = true;
		}
		return input_ability;
	}
}
