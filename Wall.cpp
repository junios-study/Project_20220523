#include "Wall.h"

AWall::AWall()
	: AActor()
{
	
}

AWall::AWall(int NewX, int NewY, char NewShape, bool bNewCollision, int NewSortOrder)
	: AActor(NewX, NewY, NewShape, bNewCollision, NewSortOrder)
{
}

AWall::~AWall()
{
}

