#include "Monster.h"
#include "Engine.h"
#include "Player.h"
#include "World.h"
#include <time.h>

AMonster::AMonster()
	:AActor()
{
	R = 255;
	G = 255;
	B = 0;

	LoadBMP("Data/Slime.bmp");

	srand((unsigned int)time(nullptr));

}

AMonster::~AMonster()
{
}

AMonster::AMonster(int NewX, int NewY, char NewShape, bool bNewCollision, int NewSortOrder)
	:AActor(NewX, NewY, NewShape, bNewCollision, NewSortOrder)
{
	srand((unsigned int)time(nullptr));
	R = 255;
	G = 255;
	B = 0;

	LoadBMP("Data/Slime.bmp");
}

void AMonster::Tick()
{
	ElapsedTime += GEngine->GetWorldDeltaSeconds();
	if (ElapsedTime >= ProcessTime)
	{
		int Direction = rand() % 4;
		switch (Direction)
		{
		case 0:
			Y = (PredictCollision(X, Y - 1) == false) ? Y - 1 : Y;
			break;
		case 1:
			Y = (PredictCollision(X, Y + 1) == false) ? Y + 1 : Y;
			break;
		case 2:
			X = (PredictCollision(X - 1, Y) == false) ? X - 1 : X;

			break;
		case 3:
			X = (PredictCollision(X + 1, Y) == false) ? X + 1 : X;
			break;
		}

		ElapsedTime = 0;
	}

	if (IsPlayer())
	{
		SDL_Log("GameOver");
		GEngine->QuitGame();
	}
}

bool AMonster::IsPlayer()
{
	for (auto Actor : GEngine->GetWorld()->MyActors)
	{
		if (Actor->X == X && Actor->Y == Y)
		{
			APlayer* Player = dynamic_cast<APlayer*>(Actor);
			if (Player != nullptr)
			{
				return true;
			}
		}
	}

	return false;
}

