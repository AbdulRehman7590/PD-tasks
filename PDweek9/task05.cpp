#include <iostream>
using namespace std;
main()
{
    bool check = false;

    string slot[4];

    for (int idx = 0; idx < 4; idx++)
    {
        cin >> slot[idx];
    }
    string y = slot[0];
    int count = 0;

    for (int idx = 0; idx < 4; idx++)
    {
        if (y == slot[idx])
        {
            count++;
        }
    }

    if(count == 4)
    {
        check = true;
    }

    cout <<check <<endl;
}