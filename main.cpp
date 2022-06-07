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
	//HW 초기화
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		SDL_Log("SDL_INIT_ERROR");
		return -1;
	}
	 
	//윈도창 만들기
	SDL_Window* MyWindow = SDL_CreateWindow("Maze", 100, 100, 800, 600, SDL_WINDOW_OPENGL);
	SDL_Renderer* MyRenderer = SDL_CreateRenderer(MyWindow, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_TARGETTEXTURE);



	bool bRunning = true;
	SDL_Event MyEvent;
	int X = 0;
	while (bRunning)
	{
		SDL_PollEvent(&MyEvent);

		switch(MyEvent.type)
		{
		case SDL_QUIT:
			bRunning = false;
			break;
		case SDL_KEYDOWN:
			SDL_Log("PressKey");
			break;
		}


		//그래픽 카드가 할일 등록
		SDL_SetRenderDrawColor(MyRenderer, 0xff, 0x00, 0x00, 0xff);
		SDL_RenderClear(MyRenderer);

		// Actor들 그려
		SDL_SetRenderDrawColor(MyRenderer, 0xff, 0xff, 0x00, 0xff);
		if (X > 800)
		{
			X = X - 100;
		}
		else
		{
			X++;
		}
		SDL_RenderFillRect(MyRenderer, new SDL_Rect{ X, 0, 100, 100 });


		//등록 된 일 시작
		SDL_RenderPresent(MyRenderer);
	}


	SDL_DestroyRenderer(MyRenderer);

	SDL_DestroyWindow(MyWindow);

	SDL_Quit();

	return 0;
}
