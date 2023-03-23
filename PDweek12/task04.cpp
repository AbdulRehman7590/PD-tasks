#include <iostream>
#include <fstream>
#include <windows.h>
#include <conio.h>
using namespace std;
void missing(string line);

main()
{
    fstream letters;
    string linedata;
    letters.open("alphabets.txt", ios::in);
    while (!letters.eof())
    {
        getline(letters, linedata);
    }
    letters.close();
    missing(linedata);
}
void missing(string line)
{
    string given;
    cout << "Enter the letter : ";
    getline(cin, given);

    int givensize = given.length();
    int size = line.length();

    for (int x = 0; x < size; x++)
    {
        for (int y = 0; y < givensize; y++)
        {
            if (given[y] == line[x])
            {
                line[x] = ' ';
            }
        }
    }
    for (int x = 0; x < size; x++)
    {
        if (line[x] == ' ')
        {
            continue;
        }
        else
        {
            cout <<line[x];
        }
        
    }
}
