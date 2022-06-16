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

	//�����̸� ����
	//�������� �߰�
	virtual void BeginPlay() override;

	Mix_Music* Music;
	int Loop;
};

