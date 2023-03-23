#include <iostream>
using namespace std;
main()
{
    char service;
    float minutes, amount, min;
    string time;

    cout <<"Enter type of service (r/p): ";
    cin >> service;
    cout <<"No. of mins service is used : ";
    cin >> minutes;

    if (service == 'r' || service == 'R')
    {
        if(minutes <= 50)
        {
            amount = 10;
        }
        else
        {
            min = minutes-50;
            amount = 10 + (min*0.20);
        }
    }
    else if (service == 'p' || service == 'P')
    {
        cout <<"Enter time at which service is used (day/night) : ";
        cin >> time;
        
        if(time == "day" || time == "Day" )
        {
            if (minutes <= 75)
            {
                amount = 25.00;
            }
            else
            {
                min = minutes - 75;
                amount = 25.00 + (min*0.10);
            }
        }
        else
        {
            if (minutes <= 100)
            {
                amount = 25.00;
            }
            else
            {
                min = minutes - 100;
                amount = 25.00 + (min*0.05);
            }
        }
    }
    else
    {
        cout << "Enter valid service." <<endl;
        return 0;
    }
    cout <<"The charges are " <<amount <<"$" <<endl;
}
