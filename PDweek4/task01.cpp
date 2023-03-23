#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y);

main()
{
cout <<"Test" <<endl;

gotoxy(15,15);
cout <<"MY name is Abul Rehman" <<endl;
}

void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}