#include "Player.h"
#include "Engine.h"
#include "World.h"
#include "Goal.h"
#include "SDL.h"

APlayer::APlayer()
	: AActor()
{
	R = 0;
	G = 0;
	B = 255;
}

APlayer::~APlayer()

{
}

APlayer::APlayer(int NewX, int NewY, char NewShape, bool bNewCollision, int NewSortOrder)
	: AActor(NewX, NewY, NewShape, bNewCollision, NewSortOrder)
{
	R = 0;
	G = 0;
	B = 255;
}

void APlayer::Tick()
{
	switch (GEngine->MyEvent.type)
	{
	case SDL_QUIT:
		GEngine->QuitGame();
		break;
	case SDL_KEYDOWN:
		switch (GEngine->MyEvent.key.keysym.sym)
		{
		case SDLK_w:
			Y = (PredictCollision(X, Y - 1) == false) ? Y - 1 : Y;
			break;
		case SDLK_s:
			Y = (PredictCollision(X, Y + 1) == false) ? Y + 1 : Y;
			break;
		case SDLK_a:
			X = (PredictCollision(X - 1, Y) == false) ? X - 1 : X;
			break;
		case SDLK_d:
			X = (PredictCollision(X + 1, Y) == false) ? X + 1 : X;
			break;
		}
	}

	if (IsGoal())
	{
		GEngine->QuitGame();
	}
}

bool APlayer::IsGoal()
{
	for (auto Actor : GEngine->GetWorld()->MyActors)
	{
		if (Actor->X == X && Actor->Y == Y)
		{
			AGoal* Goal = dynamic_cast<AGoal*>(Actor);
			if (Goal != nullptr)
			{
				return true;
			}
		}
	}

	return false;
}
