#include "Player.h"
#include "Engine.h"

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
	int KeyCode = Engine::GetKeyCode();

	switch (KeyCode)
	{
	case 'w':
		Y--;
		break;
	case 's':
		Y++;
		break;
	case 'a':
		X--;
		break;
	case 'd':
		X++;
		break;
	}
}
