#include "Actor.h"
#include <iostream>
#include <Windows.h>

using namespace std;

AActor::AActor()
{
	X = 0;
	Y = 0;
	Shape = ' ';
	bCollision = false;
	SortOrder = 1;
}

AActor::AActor(int NewX, int NewY, char NewShape, bool bNewCollision, int NewSortOrder)
{
	X = NewX;
	Y = NewY;
	Shape = NewShape;
	bCollision = bNewCollision;
	SortOrder = NewSortOrder;
}

AActor::~AActor()
{
}

void AActor::Tick()
{
}

void AActor::Render()
{
	COORD Cur;
	Cur.X = X;
	Cur.Y = Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);

	cout << Shape;
}
