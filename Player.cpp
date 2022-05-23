#include "Player.h"

APlayer::APlayer()
	: AActor()
{
}

APlayer::~APlayer()

{
}

APlayer::APlayer(int NewX, int NewY, char NewShape, bool bNewCollision)
	: AActor(NewX, NewY, NewShape, bNewCollision)
{
}

void APlayer::Tick()
{
}
