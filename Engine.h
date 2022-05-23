#pragma once
#include <string>

class World;

using namespace std;

class Engine
{
public:
	Engine();
	virtual ~Engine();

	World* MyWorld;
	bool bRunning;

	void Initilize();
	void Load(string MapFilename);
	void Run();
	void Terminate();
};

