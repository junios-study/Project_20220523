#include "Engine.h"
#include "SDL.h"
#include <iostream>

using namespace std;

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
	//if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
	//{
	//	SDL_Log("SDL_INIT_ERROR");
	//	return -1;
	//}
	// 
	////윈도창 만들기
	//SDL_Window* MyWindow = SDL_CreateWindow("Maze", 100, 100, 800, 600, SDL_WINDOW_OPENGL);
	//SDL_Renderer* MyRenderer = SDL_CreateRenderer(MyWindow, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_TARGETTEXTURE);



	//bool bRunning = true;
	//SDL_Event MyEvent;
	//int X = 0;
	//while (bRunning)
	//{
	//	SDL_PollEvent(&MyEvent);

	//	switch(MyEvent.type)
	//	{
	//	case SDL_QUIT:
	//		bRunning = false;
	//		break;
	//	case SDL_KEYDOWN:
	//		SDL_Log("PressKey");
	//		break;
	//	}


	//	//그래픽 카드가 할일 등록
	//	SDL_SetRenderDrawColor(MyRenderer, 0xff, 0x00, 0x00, 0xff);
	//	SDL_RenderClear(MyRenderer);

	//	// Actor들 그려
	//	SDL_SetRenderDrawColor(MyRenderer, 0xff, 0xff, 0x00, 0xff);
	//	if (X > 800)
	//	{
	//		X = 0;
	//	}
	//	else
	//	{
	//		X++;
	//	}
	//	SDL_RenderFillRect(MyRenderer, new SDL_Rect{ X, 0, 100, 100 });


	//	//등록 된 일 시작
	//	SDL_RenderPresent(MyRenderer);
	//}


	//SDL_DestroyRenderer(MyRenderer);
	//SDL_DestroyWindow(MyWindow);
	//SDL_Quit();


	unsigned int Pawn   = 1; ///0000 0001
	unsigned int StaticMesh  = 2; ///0000 0010
	unsigned int DynamicMesh = 4; ///0000 0100
	unsigned int PhysicsBody = 8; ///0000 1000

	//0001 | 0001 = 0001  Or 둘중에 하나가 참이면 참
	//0000 | 0001 = 0001
	//0001 | 0000 = 0001

	//0001 & 0001 = 0001  And 둘중에 하나가 참이면 참
	//0000 & 0001 = 0000
	//0001 & 0000 = 0000

	unsigned char Player = Pawn | DynamicMesh | PhysicsBody;

	//Player & Red;		//0000 1110 & 0000 0001 => 0000 0000
	//Player & Blue;		//0000 1111 & 0000 0010 => 0000 0010
	//Player & Green;		//0000 1111 & 0000 0100 => 0000 0100
	//Player & White;		//0000 1111 & 0000 1000 => 0000 1000

	Player& (StaticMesh);  // 0000 1101 & 0000 0010 => 0000 0000 //false
	//bitmasking

	//Xor
	//0001 ^ 0001 => 0000
	//0001 ^ 0000 => 0001
	//0000 ^ 0001 => 0001
	//0000 ^ 0000 => 0000

	//0111 ^ 0010 => 0101
	//0101 ^ 0010 => 0111

	unsigned char A = 1;  // 0001
	A = A << 1;			  // 0010
	A = A << 1;			  // 0100
	A = A << 1;			  // 1000
	A = A >> 1;			  // 0100
	A = A >> 1;			  // 0010
	A = A >> 1;			  // 0001
	A = A >> 1;			  // 0000

	A = A << 1;			  // 0000 0000

	A = 0b10000000;			// 0000 0001

	printf("%d", (unsigned char)(A >> 8));

	return 0;
}
