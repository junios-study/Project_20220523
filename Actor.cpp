#include "Actor.h"
#include <iostream>
#include <Windows.h>
#include "Engine.h"
#include "World.h"


using namespace std;

AActor::AActor()
{
	X = 0;
	Y = 0;
	Shape = ' ';
	bCollision = false;
	SortOrder = 1;

	ColorKey = SDL_Color { 255, 255, 255, 0 };
}

AActor::AActor(int NewX, int NewY, char NewShape, bool bNewCollision, int NewSortOrder)
{
	X = NewX;
	Y = NewY;
	Shape = NewShape;
	bCollision = bNewCollision;
	SortOrder = NewSortOrder;

	ColorKey = SDL_Color { 255, 255, 255, 0 };

}

AActor::~AActor()
{
	SDL_FreeSurface(Image);
	SDL_DestroyTexture(Texture);
}

void AActor::Tick()
{
}

void AActor::Render()
{
	//COORD Cur;
	//Cur.X = X;
	//Cur.Y = Y;
	//SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);

	//cout << Shape;

	if (Texture == nullptr)
	{
		SDL_SetRenderDrawColor(GEngine->MyRenderer, R, G, B, A);
		SDL_RenderFillRect(GEngine->MyRenderer, new SDL_Rect{ X * Size, Y * Size, Size, Size });
	}
	else
	{
		//VRAM ±×·Á¶ó
		SDL_RenderCopy(GEngine->MyRenderer, Texture, 
			NULL,
			new SDL_Rect{ X * Size, Y * Size, Size, Size });
	}

}

void AActor::LoadBMP(string Filename)
{
	//SSD File -> Memory(Ram)
	Image = SDL_LoadBMP(Filename.c_str());

	//Color Key
	SDL_SetColorKey(Image, SDL_TRUE, SDL_MapRGB(Image->format, ColorKey.r, ColorKey.g, ColorKey.b));

	//Memory -> VRAM(GPU)
	Texture = SDL_CreateTextureFromSurface(GEngine->MyRenderer, Image);
}

bool AActor::PredictCollision(int PredictX, int PredictY)
{
	for (auto Actor : GEngine->GetWorld()->MyActors)
	{
		if (Actor->X == PredictX && Actor->Y == PredictY && Actor->bCollision)
		{
			return true;
		}
	}

	return false;
}
