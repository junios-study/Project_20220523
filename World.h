#pragma once
#include <vector>
#include "Actor.h"

using namespace std;

class World
{
public:
	World();
	virtual ~World();

	vector<AActor*> MyActors;

	void Tick();
	void Render();
};

