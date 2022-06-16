#define _CRT_SECURE_NO_WARNINGS

#pragma once
#include "Actor.h"
#include <string>

#include "SDL_ttf.h"

#pragma comment(lib, "SDL2_ttf.lib")

using namespace std;

class AText : public AActor
{
public:
	AText(int NewX, int NewY, string NewMessage, SDL_Color NewColor, int NewSize);
	virtual ~AText();

	virtual void Render() override;

	string Message;
	SDL_Color Color;
	int Size;
	TTF_Font* Font;
	int Width = 0;
	int Height = 0;
	SDL_Rect Destination;
};

