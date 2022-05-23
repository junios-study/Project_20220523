#include <iostream>
#include "World.h"
#include "Wall.h"
#include "Player.h"
#include "Goal.h"

using namespace std;

int main()
{
	//Initialize
	bool bRunning = true;
	World* MyWorld = new World();

	//Load
	for (int i = 0; i <= 9; ++i)
	{
		MyWorld->MyActors.push_back(new AWall(i, 0, '#', true));
		MyWorld->MyActors.push_back(new AWall(i, 9, '#', true));
	}
	for (int i = 1; i <= 8; ++i)
	{
		MyWorld->MyActors.push_back(new AWall(0, i, '#', true));
		MyWorld->MyActors.push_back(new AWall(9, i, '#', true));
	}

	MyWorld->MyActors.push_back(new APlayer(1, 1, 'P', true));
	MyWorld->MyActors.push_back(new AGoal(8, 8, 'G', true));


	//Run
	while (bRunning) //1 Frame
	{
		MyWorld->Tick();
		MyWorld->Render();
	}

	//Terminate
	delete MyWorld;

	return 0;
}

