#include <iostream>
#include <windows.h>
using namespace std;

void printmaze();
void gotoxy(int x, int y);
void clear(int x, int y, char previous);
void printpacman(int x, int y);
void printghost1(int x, int y);
void printghost2(int x, int y);
char getCharAtxy(short int x, short int y);

main()
{
    int gx = 1;
    int gy = 2;
    int g2x = 2;
    int g2y = 2;
    string direction = "right";
    string direction2 = "up";
    char previousChar = ' ';
    
    system("cls");
    printmaze();
    printghost1(gx, gy);
    printghost2(gx, gy);
    while (true)
    {
        Sleep (200);

        if (direction == "right")
        {
            char nextlocation = getCharAtxy(gx+1, gy);
            if (nextlocation == '#')
            {
                direction = "left";
            }
            else if(nextlocation == ' ' || nextlocation == '.')
            {
                clear(gx, gy, previousChar);
                gx = gx+1;
                previousChar = nextlocation;
                printghost1(gx, gy);
            }
        }
        if (direction == "left")
        {
            char nextlocation = getCharAtxy(gx-1, gy);
            if (nextlocation == '#')
            {
                direction = "right";
            }
            else if(nextlocation == ' ' || nextlocation == '.')
            {
                clear(gx, gy, previousChar);
                gx = gx-1;
                previousChar = nextlocation;
                printghost1(gx, gy);
            }
        }
        if (direction2 == "up")
        {
            char nextlocation = getCharAtxy(g2x, g2y-1);
            if (nextlocation == '#')
            {
                direction2 = "down";
            }
            else if(nextlocation == ' ' || nextlocation == '.')
            {
                clear(g2x, g2y, previousChar);
                g2y = g2y-1;
                previousChar = nextlocation;
                printghost2(g2x, g2y);
            }
        }
        if (direction2 == "down")
        {
            char nextlocation = getCharAtxy(g2x, g2y+1);
            if (nextlocation == '#')
            {
                direction2 = "up";
            }
            else if(nextlocation == ' ' || nextlocation == '.')
            {
                clear(g2x, g2y, previousChar);
                g2y = g2y+1;
                previousChar = nextlocation;
                printghost2(g2x, g2y);
            }
        }
    }
}

void printpacman(int x, int y)
{
gotoxy(x, y);
cout << "P";
}

void printghost1(int x, int y)
{
gotoxy(x, y);
cout << "G";
}

void printghost2(int x, int y)
{
gotoxy(x, y);
cout << "H";
}

void clear(int x, int y, char previous)
{
gotoxy(x, y);
cout <<previous;
}

char getCharAtxy(short int x, short int y)
{
CHAR_INFO ci;
COORD xy = {0, 0};
SMALL_RECT rect = {x, y, x, y};
COORD coordBufSize;
coordBufSize.X = 1;
coordBufSize.Y = 1;
return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
: ' ';
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