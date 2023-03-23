#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y);
void printmaze();
void playermove(int x, int y);

main()
{
 system("cls");
 printmaze();
 int x=3;
 int y=3;
 while(true)
 {
  playermove(x,y);
  if (x < 20)
   {
    x = x+1;
   }
  if (x == 20)
   {
    gotoxy(x-1,y);
    cout <<" ";
    x = 3;
   }
 }
}

void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printmaze()
{
 cout <<"##############################" <<endl;
 cout <<"#                            #" <<endl;
 cout <<"#                            #" <<endl;
 cout <<"#                            #" <<endl;
 cout <<"#                            #" <<endl;
 cout <<"#                            #" <<endl;
 cout <<"#                            #" <<endl;
 cout <<"#                            #" <<endl;
 cout <<"#                            #" <<endl;
 cout <<"#                            #" <<endl;
 cout <<"##############################" <<endl;
}

void playermove(int x, int y)
{
 gotoxy(x-1,y);
 cout <<" ";
 gotoxy(x,y);
 cout <<"P";
 Sleep(200);
}