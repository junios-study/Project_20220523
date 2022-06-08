#pragma once
#include "Actor.h"

//2���� ��ǥ�� �ڽ��� �������ϰ� �浹�ϰ� ó���Ѵ�.
//�Է��� ó���Ѵ�.
class APlayer : public AActor
{
public:
	APlayer();
	virtual ~APlayer();
	APlayer(int NewX, int NewY, char NewShape, bool bNewCollision = false, int NewSortOrder = 4);


	virtual void Tick() override;
	virtual void Render() override;

	bool IsGoal();

	Uint64 ElapsedTime = 0;
	Uint64 ProcessTime = 100;

	int SpriteIndex = 0;
	int SpriteDirection = 0;
};

