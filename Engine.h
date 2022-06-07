#pragma once
#include <string>
#include "SpriteType.h"

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
	void Input();

	inline static int GetKeyCode() { return Engine::KeyCode; }

protected:
	static int KeyCode;
};


