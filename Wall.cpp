#include "Wall.h"

AWall::AWall()
	: AActor()
{
	R = 0;
	G = 255;
	B = 0;

	LoadBMP("Data/wall.bmp");
}

AWall::AWall(int NewX, int NewY, char NewShape, bool bNewCollision, int NewSortOrder)
	: AActor(NewX, NewY, NewShape, bNewCollision, NewSortOrder)
{
	R = 0;
	G = 255;
	B = 0;

	LoadBMP("Data/wall.bmp");
}

AWall::~AWall()
{
}

