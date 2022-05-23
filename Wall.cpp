#include "Wall.h"

AWall::AWall()
	: AActor()
{
	
}

AWall::AWall(int NewX, int NewY, char NewShape, bool bNewCollision)
	: AActor(NewX, NewY, NewShape, bNewCollision)
{
}

AWall::~AWall()
{
}

