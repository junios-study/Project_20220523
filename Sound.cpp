#include "Sound.h"

ASound::ASound(int NewX, int NewY, string Filename, int NewLoop = -1)
{
	X = NewX;
	Y = NewY;
	Loop = NewLoop;

	Music = Mix_LoadMUS(Filename.c_str());
}

ASound::~ASound()
{
	Mix_FreeMusic(Music);
}

void ASound::BeginPlay()
{
	Mix_PlayMusic(Music, Loop);
}
