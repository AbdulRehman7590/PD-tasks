#include <iostream>
using namespace std;
int number(char num);
main()
{
    string Moves[10] = {"shimmy", "shake", "pirouette", "slide", "boxstep", "headspin", "dosado", "pop", "lock", "arabesque"};

    string pin;
    cout <<"Enter code (4 digits only) : ";
    getline(cin, pin);

    int num = pin.length();
    if (num > 4)
    {
        cout <<"Invalid number ";
        return 0;
    }

    for(int idx = 0; idx < num; idx++)
    {
        if (pin[idx] != '0' && pin[idx] != '1' && pin[idx] != '2' && pin[idx] != '3' && pin[idx] != '4' && pin[idx] != '5' && pin[idx] != '6' && pin[idx] != '7' && pin[idx] != '8' && pin[idx] != '9')
        {
            cout <<"Invalid number " <<endl;
            return 0;
        }
    }

    int code[num];
    for (int i = 0; i < num; i++)
    {
        code[i] = number(pin[i]);
    }
    
    string y = " ";
    for (int j = 0; j < num; j++)
    {
        for (int k = 0; k <= j+code[j]; k++)
        {
            y = Moves[k % 10];
        }
        cout <<y <<",";
    }

}

int number(char num)
{
    int Num = 0;

    if (num == '0')
    {
        Num = 0;
    }
    else if (num == '1')
    {
        Num = 1;
    }
    else if (num == '2')
    {
        Num = 2;
    }
    else if (num == '3')
    {
        Num = 3;
    }
    else if (num == '4')
    {
        Num = 4;
    }
    else if (num == '5')
    {
        Num = 5;
    }
    else if (num == '6')
    {
        Num = 6;
    }
    else if (num == '7')
    {
        Num = 7;
    }
    else if (num == '8')
    {
        Num = 8;
    }
    else if (num == '9')
    {
        Num = 9;
    }
    
    return Num;
}