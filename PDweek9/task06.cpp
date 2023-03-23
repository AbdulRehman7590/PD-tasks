#include <iostream>
using namespace std;
main()
{
    int arrays[3];
    for(int idx = 0; idx < 3; idx++)
    {
        cin >> arrays[idx];
    }
    int num;
    cout <<"Transformations need to be done :";
    cin >> num;

    for (int idx = 0; idx < 3; idx++)
    {
        if (arrays[idx] % 2 != 0)
        {
            for (int count = 1; count <= num; count++)
            {
                arrays[idx] = arrays[idx] + 2;
            }
        }
        else 
        {
            for (int count = 1; count <= num; count++)
            {
                arrays[idx] = arrays[idx] - 2;
            }
        }
    }

    for (int idx = 0; idx < 3; idx++)
    {
        cout <<arrays[idx] <<",";
    }
}