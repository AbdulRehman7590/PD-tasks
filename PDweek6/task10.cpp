#include <iostream>
#include <windows.h>
using namespace std;

void printmaze();
void gotoxy(int x, int y);
void erase(int x, int y);
void printpacman(int x, int y);
char getCharAtxy(short int x, short int y);
float incrementscore(float pill);

int main()
{
    int pacmanX = 3;
    int pacmanY = 3;
    float score = 0;
    bool gamerunning = true;
    float Healthpill = 0;

    system("cls");
    printmaze();
    printpacman(pacmanX, pacmanY);

    while (gamerunning)
    {
        if (GetAsyncKeyState(VK_LEFT))
        {
            char nextlocation = getCharAtxy(pacmanX - 1, pacmanY);
            if (nextlocation == ' ')
            {
                erase(pacmanX, pacmanY);
                pacmanX = pacmanX - 1;
                printpacman(pacmanX, pacmanY);
            }
            else if (nextlocation == '.')
            {
                Healthpill = Healthpill + 1;
                score = incrementscore(Healthpill);
                erase(pacmanX, pacmanY);
                pacmanX = pacmanX - 1;
                printpacman(pacmanX, pacmanY);
            }
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            char nextlocation = getCharAtxy(pacmanX + 1, pacmanY);
            if (nextlocation == ' ')
            {
                erase(pacmanX, pacmanY);
                pacmanX = pacmanX + 1;
                printpacman(pacmanX, pacmanY);
            }
            else if (nextlocation == '.')
            {
                Healthpill = Healthpill + 1;
                score = incrementscore(Healthpill);
                erase(pacmanX, pacmanY);
                pacmanX = pacmanX + 1;
                printpacman(pacmanX, pacmanY);
            }
        }
        if (GetAsyncKeyState(VK_UP))
        {
            char nextlocation = getCharAtxy(pacmanX, pacmanY - 1);
            if (nextlocation == ' ')
            {
                erase(pacmanX, pacmanY);
                pacmanY = pacmanY - 1;
                printpacman(pacmanX, pacmanY);
            }
            else if (nextlocation == '.')
            {
                Healthpill = Healthpill + 1;
                score = incrementscore(Healthpill);
                erase(pacmanX, pacmanY);
                pacmanY = pacmanY - 1;
                printpacman(pacmanX, pacmanY);
            }
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            char nextlocation = getCharAtxy(pacmanX, pacmanY + 1);
            if (nextlocation == ' ')
            {
                erase(pacmanX, pacmanY);
                pacmanY = pacmanY + 1;
                printpacman(pacmanX, pacmanY);
            }
            else if (nextlocation == '.')
            {
                erase(pacmanX, pacmanY);
                pacmanY = pacmanY + 1;
                printpacman(pacmanX, pacmanY);
                Healthpill = Healthpill + 1;
                score = incrementscore(Healthpill);
            }
        }
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            gamerunning = false;
        }

        gotoxy(5, 12);
        cout << "Your score is : " << score << endl;
        Sleep(200);
    }
}

void printpacman(int x, int y)
{
    gotoxy(x, y);
    cout << "P";
}

void erase(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
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
    cout << "##############################" << endl;
    cout << "#  .     .          .        #" << endl;
    cout << "#            .               #" << endl;
    cout << "# .                  .  .    #" << endl;
    cout << "#     .        .             #" << endl;
    cout << "#     .            .         #" << endl;
    cout << "#        .              .    #" << endl;
    cout << "#        .   .            .  #" << endl;
    cout << "#  .             .           #" << endl;
    cout << "#       .            .       #" << endl;
    cout << "##############################" << endl;
}

float incrementscore(float pill)
{
   float result = pill*5;
   return result; 
}