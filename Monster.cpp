#include "Monster.h"

AMonster::AMonster()
	:AActor()
{
	R = 255;
	G = 255;
	B = 0;

	LoadBMP("Data/Slime.bmp");
}

AMonster::~AMonster()
{
}

AMonster::AMonster(int NewX, int NewY, char NewShape, bool bNewCollision, int NewSortOrder)
	:AActor(NewX, NewY, NewShape, bNewCollision, NewSortOrder)
{
	R = 255;
	G = 255;
	B = 0;

	LoadBMP("Data/Slime.bmp");
}

void AMonster::Tick()
{
}
