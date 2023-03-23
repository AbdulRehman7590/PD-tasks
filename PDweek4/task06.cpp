 #include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y);
void printA();
void printW();
void printI();
void printS();

main()
{
 printA();
 printW();
 printA();
 printI();
 printS();
}

void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printA()
{
 cout <<"        AAA        " <<endl;
 cout <<"       A   A       " <<endl;
 cout <<"      A     A      " <<endl;
 cout <<"     AAAAAAAAA     " <<endl;
 cout <<"     A       A     " <<endl;
 cout <<"     A       A     " <<endl;
 cout <<"     A       A     " <<endl;
}
void printW()
{
 cout <<"  WW           WW  " <<endl;
 cout <<"  WW           WW  " <<endl;
 cout <<"  WW           WW  " <<endl;
 cout <<"  WW     W     WW  " <<endl;
 cout <<"   WW   WWW   WW   " <<endl;
 cout <<"     WWW  WWW      " <<endl;
 cout <<"      W    W       " <<endl;
}
void printS()
{
 cout <<"      SSSSSS       " <<endl;
 cout <<"     SS    SS      " <<endl;
 cout <<"     SS            " <<endl;
 cout <<"     SSSSSSSS      " <<endl;
 cout <<"           SS      " <<endl;
 cout <<"     SS    SS      " <<endl;
 cout <<"      SSSSSS       " <<endl;
}
void printI()
{
 cout <<"      IIIIII      " <<endl;
 cout <<"        II        " <<endl;
 cout <<"        II        " <<endl;
 cout <<"        II        " <<endl;
 cout <<"        II        " <<endl;
 cout <<"        II        " <<endl;
 cout <<"        II        " <<endl;
 cout <<"      IIIIII      " <<endl;
}
