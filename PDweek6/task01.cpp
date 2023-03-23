#include <iostream>
using namespace std;
main()
{
    string temperature, humidity;

    cout <<"Enter the temperature : ";
    cin >> temperature;
    cout <<"Enter humidity : ";
    cin >> humidity;

    if(temperature == "warm" && humidity == "dry")
    {
        cout <<"Play tennis." <<endl;
    }
    if(temperature == "warm" && humidity == "humid")
    {
        cout <<"Swim." <<endl;
    }
    if(temperature == "cold" && humidity == "dry")
    {
        cout <<"Play basketball." <<endl;
    }
    if(temperature == "cold" && humidity == "humid")
    {
        cout <<"Watch tv." <<endl;
    }
}