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

	void BeginPlay();
	void Tick();
	void Render();

	void SpawnActor(AActor* NewActor);

	//static vector<AActor*> GetActorList() {	return MyActors; }
};

