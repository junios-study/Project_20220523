#include "Engine.h"
#include "SDL.h"

#pragma comment(lib, "SDL2main.lib")
#pragma comment(lib, "SDL2.lib")

using namespace std;

//int main()
//{
//	//Engine* MyEngine = new Engine();
//	//MyEngine->Load("Level01.map");
//
//	//MyEngine->Run();
//
//	//delete MyEngine;
//	//MyEngine = nullptr;
//
//
//	return 0;
//}

int SDL_main(int argc, char* argv[])
{
	//HW �ʱ�ȭ
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		SDL_Log("SDL_INIT_ERROR");
		return -1;
	}
	 
	//����â �����
	SDL_Window* MyWindow = SDL_CreateWindow("Maze", 100, 100, 800, 600, SDL_WINDOW_OPENGL);
	SDL_Renderer* MyRenderer = SDL_CreateRenderer(MyWindow, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_TARGETTEXTURE);

	//�׷��� ī�尡 ���� ���
	SDL_SetRenderDrawColor(MyRenderer, 0xff, 0x00, 0x00, 0xff);
	SDL_RenderClear(MyRenderer);

	//��� �� �� ����
	SDL_RenderPresent(MyRenderer);

	while (1);
	return 0;
}
