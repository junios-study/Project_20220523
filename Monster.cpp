#include "Monster.h"

AMonster::AMonster()
	:AActor()
{
}

AMonster::~AMonster()
{
}

AMonster::AMonster(int NewX, int NewY, char NewShape, bool bNewCollision)
	:AActor(NewX, NewY, NewShape, bNewCollision)
{
}

void AMonster::Tick()
{
}
