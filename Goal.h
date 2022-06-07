#pragma once
#include "Actor.h"

class AGoal : public AActor
{
public:
	AGoal();
	AGoal(int NewX, int NewY, char NewShape, bool bNewCollision = false, int NewSortOrder = 3);
	virtual ~AGoal();

	virtual void Tick() override;

	void GoalCheck() {};
};

