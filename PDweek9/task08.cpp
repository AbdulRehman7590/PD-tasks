#include <iostream>
using namespace std;
main()
{
    int size;
    cout <<"Enter number of colors :";
    cin >> size;

    string colors[size];

    for (int idx = 0; idx < size; idx++)
    {
        cout <<"Enter color :";
        cin >> colors[idx];
    }

    string col = colors[0];

    int counter = 0;

    for(int idx = 0; idx < size; idx++)
    {
        if (col == colors[idx])
        {
            counter = counter;
        }
        else
        {
            col = colors[idx];
            counter++; 
        }
    }

    int time = size*2;
    time = time+counter;

    cout <<time <<endl;
}