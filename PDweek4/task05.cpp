#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y);

main()
{
 system("cls");
 
 gotoxy(15,10);
 cout <<"     A     BBBB   DDDD   U    U  L        RRRR    EEEEE H   H  MM    MM    A     NN    N " <<endl;
 gotoxy(15,11);
 cout <<"    A A    B   B  D   D  U    U  L        R   R   E     H   H  M M  M M   A A    N N   N " <<endl;
 gotoxy(15,12);
 cout <<"   A   A   BBBB   D    D U    U  L        RRRR    EEE   HHHHH  M  MM  M  A   A   N  N  N " <<endl;
 gotoxy(15,13);
 cout <<"  AAAAAAA  B   B  D   D  U    U  L        R   R   E     H   H  M      M AAAAAAA  N   N N " <<endl;
 gotoxy(15,14);
 cout <<"  A     A  BBBB   DDDD    UUUU   LLLLL    R    R  EEEEE H   H  M      M A     A  N    NN " <<endl;
}

void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}