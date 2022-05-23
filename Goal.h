#pragma once
#include "Actor.h"

class AGoal : public AActor
{
public:
	AGoal();
	virtual ~AGoal();

	virtual void Tick() override;
};

