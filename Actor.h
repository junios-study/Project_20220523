#pragma once
#include "SpriteType.h"

//2차원 좌표에 자신을 렌더링하고 충돌하고 처리한다.
class AActor
{
public:
	AActor();
	AActor(int NewX, int NewY, char NewShape, bool bNewCollision = false);
	virtual ~AActor();

	ESpriteType Type;
	char Shape;
	int X;
	int Y;
	bool bCollision;
	
	virtual void Tick();
	virtual void Render();
};

