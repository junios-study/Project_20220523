#include "Sound.h"
#include "Engine.h"

ASound::ASound(int NewX, int NewY, string Filename, int NewLoop)
{
	X = NewX;
	Y = NewY;
	Loop = NewLoop;

	Music = Mix_LoadMUS(Filename.c_str());
	Mix_VolumeMusic(30);
}

ASound::~ASound()
{
	Mix_FreeMusic(Music);
}

void ASound::BeginPlay()
{
	Mix_PlayMusic(Music, Loop);
}

void ASound::Tick()
{
	switch (GEngine->MyEvent.type)
	{

	case SDL_KEYDOWN:
		switch (GEngine->MyEvent.key.keysym.sym)
		{
		case SDLK_EQUALS:
			Volume++;
			Volume = Volume > MIX_MAX_VOLUME ? MIX_MAX_VOLUME : Volume;
			break;
		case SDLK_MINUS:
			Volume--;
			Volume = Volume < 0 ? 0 : Volume;
			break;
		}

		Mix_VolumeMusic(Volume);

	}
}
