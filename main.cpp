#include "Engine.h"

#include <iostream>

using namespace std;


int SDL_main(int argc, char* argv[])
{
	Engine* MyEngine = new Engine();
	MyEngine->Load("Level01.map");

	MyEngine->Run();

	delete MyEngine;
	MyEngine = nullptr;

	return 0;
}
