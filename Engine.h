#pragma once
#include <string>
#include "SpriteType.h"
#include "SDL.h"

#pragma comment(lib, "SDL2main.lib")
#pragma comment(lib, "SDL2.lib")

class World;

using namespace std;

class Engine
{
public:
	Engine();
	virtual ~Engine();


	void Initilize();
	void Load(string MapFilename);
	void Run();
	void Terminate();
	void Input();

	void QuitGame() { bRunning = false; }

	const Uint64 GetWorldDeltaSeconds() { return DeltaSeconds; }


	inline static int GetKeyCode() { return Engine::KeyCode; }

	inline static Engine* GetEngine() { return Instance; }

	inline World* GetWorld() const { return MyWorld; }

	SDL_Window* MyWindow;
	SDL_Renderer* MyRenderer;
	SDL_Event MyEvent;



protected:
	World* MyWorld;

	static int KeyCode;

	static Engine* Instance;

	bool bRunning;

	Uint64 LastTick;
	Uint64 DeltaSeconds;

};

#define GEngine Engine::GetEngine()


