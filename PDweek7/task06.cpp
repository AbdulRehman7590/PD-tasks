#include <iostream>
using namespace std;
main()
{
    int num, number;
    float p1=0, p2=0, p3=0;
    float percentage1=0, percentage2=0, percentage3=0;

    cout <<"Enter the number : ";
    cin >> num;

    for (int count = 1; count <= num; count++)
    {
        cout <<"Enter numbers : ";
        cin >> number;

        if (number%4 == 0)
        {
            p3 = p3 + 1;
        }
        if (number%3 == 0)
        {
            p2 = p2 + 1;
        }
        if (number%2 == 0)
        {
            p1 = p1 + 1;
        }
    }

    percentage1 = (p1*100)/num;
    percentage2 = (p2*100)/num;
    percentage3 = (p3*100)/num;

    cout <<percentage1 <<" %" <<endl;
    cout <<percentage2 <<" %" <<endl;
    cout <<percentage3 <<" %" <<endl;
}