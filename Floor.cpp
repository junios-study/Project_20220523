#include "Floor.h"

AFloor::AFloor()
{
	R = 255;
	G = 255;
	B = 255;
}

AFloor::AFloor(int NewX, int NewY, char NewShape, bool bNewCollision, int NewSortOrder)
 : AActor(NewX, NewY, NewShape, bNewCollision, NewSortOrder)
{
	R = 255;
	G = 255;
	B = 255;
}

AFloor::~AFloor()
{
}
