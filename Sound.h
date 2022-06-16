#pragma once
#include "Actor.h"
#include <string>
#include "SDL_mixer.h"


using namespace std;

class ASound : public AActor
{
public:
	ASound(int NewX, int NewY, string Filename, int NewLoop);
	virtual ~ASound();

	//남욱이만 숙제
	//볼륨조절 추가
	virtual void BeginPlay() override;

	Mix_Music* Music;
	int Loop;
};

