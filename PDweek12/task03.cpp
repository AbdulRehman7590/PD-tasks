#include <iostream>
#include <fstream>
#include <windows.h>
#include <conio.h>
using namespace std;
string parseRecord(string line, int field);
void birthdaycake(string name, int date);
char symbol(int date);
main()
{
    string data, name;
    int date = 0;
    fstream bday;
    bday.open("birthday.txt", ios::in);
    while (!bday.eof())
    {
        getline(bday, data);
        name = parseRecord(data, 1);
        date = stoi(parseRecord(data, 2));
    }
    bday.close();
    birthdaycake(name, date);
}

void birthdaycake(string name, int date)
{
    char sign = symbol(date);
    for (int x = 0; x < 15; x++)
    {
        cout <<sign;
    }
    cout <<endl;
    cout <<sign <<date <<" HB" <<name <<"! " <<date <<sign <<endl;
    for (int x = 0; x < 15; x++)
    {
        cout <<sign;
    }
}

char symbol(int date)
{
    char sign;

    if (date % 2 == 0)
    {
        sign = '#';
    }
    else 
    {
        sign = '*';
    }
    return sign;
}

string parseRecord(string line, int field)
{
    int commaCount = 1;
    string item;
    for (int i = 0; line[i] != '\0'; i++)
    {
        if (line[i] == ',')
        {
            commaCount = commaCount + 1;
        }
        else if (commaCount == field)
        {
            item = item + line[i];
        }
    }
    return item;
}