#include <iostream>
#include <fstream>

#include "Engine.h"
#include "World.h"
#include "Wall.h"
#include "Player.h"
#include "Goal.h"
#include "Floor.h"
#include "Monster.h"

Engine::Engine()
{
	Initilize();
}

Engine::~Engine()
{
	Terminate();
}

void Engine::Initilize()
{
	bRunning = true;
	MyWorld = new World();
}

void Engine::Load(string MapFilename)
{
	//Load
	ifstream MapFile(MapFilename);

	int Y = 0;
	while (MapFile.peek() != EOF)
	{
		char Buffer[1024] = { 0, };
		MapFile.getline(Buffer, 1024);

		for (size_t X = 0; X < strlen(Buffer); ++X)
		{
			char Cursor = Buffer[X];
			switch (Cursor)
			{
			case '#':
				MyWorld->MyActors.push_back(new AWall(X, Y, '#', true));
				break;
			case ' ':
				MyWorld->MyActors.push_back(new AFloor(X, Y, ' ', false));
				break;
			case 'P':
				MyWorld->MyActors.push_back(new APlayer(X, Y, 'P', true));
				break;
			case 'G':
				MyWorld->MyActors.push_back(new AGoal(X, Y, 'G', false));
				break;
			case 'M':
				MyWorld->MyActors.push_back(new AMonster(X, Y, 'M', false));
				break;
			}
		}


		Y++;
	}

	MapFile.close();
}

void Engine::Run()
{
	//Run
	while (bRunning) //1 Frame
	{
		MyWorld->Tick();
		MyWorld->Render();
	}
}

void Engine::Terminate()
{
	delete MyWorld;
	MyWorld = nullptr;
}
