#pragma once
#include "Actor.h"

//2차원 좌표에 자신을 렌더링하고 충돌하고 처리한다.
//입력을 처리한다.
class APlayer : public AActor
{
public:
	APlayer();
	virtual ~APlayer();
	APlayer(int NewX, int NewY, char NewShape, bool bNewCollision = false);


	virtual void Tick() override;
};

