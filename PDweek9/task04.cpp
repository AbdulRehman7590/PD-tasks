#include <iostream>
using namespace std;
main()
{
    int size;
    cout <<"Enter the size of the array :";
    cin >>size;

    int array[size];

    for (int idx = 0; idx < size; idx++)
    {
        cout <<"Enter value : ";
        cin >> array[idx];
    }
    int y=0;
    for (int idx = 0; idx < size; idx++)
    {
        int count = array[idx];
        while(count > 0)
        {
            if (count%10 == 7)
            {
                y++;
            }
            count = count/10;
        }
    }
    if(y>0)
    {
        cout <<"BOOM !" <<endl;
    }
    else 
    {
        cout <<"There is no 7 in the array. " <<endl;
    }
}