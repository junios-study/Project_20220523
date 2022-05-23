#include "Floor.h"

AFloor::AFloor()
{
}

AFloor::AFloor(int NewX, int NewY, char NewShape, bool bNewCollision)
{
	AActor::AActor(NewX, NewY, NewShape, bNewCollision);
}

AFloor::~AFloor()
{
}
