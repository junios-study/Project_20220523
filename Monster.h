#pragma once
#include "Actor.h"


class AMonster : public AActor
{
public:
	AMonster();
	virtual ~AMonster();
	AMonster(int NewX, int NewY, char NewShape, bool bNewCollision = false, int NewSortOrder = 5);

	virtual void Tick() override;
};

