#include "World.h"

World::World()
{
}

World::~World()
{
	for (auto Actor : MyActors)
	{
		delete Actor;
	}

	MyActors.clear();
}

void World::Tick()
{
	//index
	//for (int i = 0; i < MyActors.size(); ++i)
	//{
	//	MyActors[i]->Tick();
	//}

	////iterator container
	//for (auto iter = MyActors.begin(); iter != MyActors.end(); ++iter)
	////for (vector<AActor*>::iterator iter = MyActors.begin(); iter != MyActors.end(); ++iter)
	//{
	//	(*iter)->Tick();
	//}

	//range for, C++ 14
	for (auto Actor : MyActors)
	{
		Actor->Tick();
	}
}

void World::Render()
{
	for (AActor* Actor : MyActors)
	{
		Actor->Render();
	}
}
