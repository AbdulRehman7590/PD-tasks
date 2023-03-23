#include <iostream>
using namespace std;
main()
{
    string word;
    cout <<"Enter the string : ";
    cin >> word;

    int y = 0;
    y = word.length();

    bool check = false;

    if (y%2 == 0)
    {
        check = true;
    }

    cout <<check <<endl;
} 