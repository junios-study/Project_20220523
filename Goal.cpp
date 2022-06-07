#include "Goal.h"

AGoal::AGoal()
	: AActor()
{
}

AGoal::AGoal(int NewX, int NewY, char NewShape, bool bNewCollision, int NewSortOrder)
	: AActor(NewX, NewY, NewShape, bNewCollision, NewSortOrder)
{
}

AGoal::~AGoal()
{
}

void AGoal::Tick()
{
}
