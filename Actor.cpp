#include "Actor.h"

AActor::AActor()
{
	X = 0;
	Y = 0;
	Shape = ' ';
	bCollision = false;
}

AActor::~AActor()
{
}

void AActor::Tick()
{
}

void AActor::Render()
{
}
