#include "Floor.h"

AFloor::AFloor()
{
}

AFloor::AFloor(int NewX, int NewY, char NewShape, bool bNewCollision, int NewSortOrder)
 : AActor(NewX, NewY, NewShape, bNewCollision, NewSortOrder)
{
}

AFloor::~AFloor()
{
}
