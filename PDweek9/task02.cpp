#include <iostream>
using namespace std;
main()
{
    string movies[]= {"gladiator", "starwars", "terminator", "takinglives", "tombrider"};

    string name;

    int discount;

    cout <<"Enter the movie name you want to watch : ";
    cin >> name;

    for (int idx = 0; idx < 5; idx++)
    {
        if (name == movies[idx] && idx % 2 == 0)
        {
            discount = (500*5)/100;

        }
        else if (name == movies[idx] && idx % 2 != 0)
        {
            discount = (500*10)/100;
        }
    }

    cout <<"Ticket price is : " <<500-discount <<endl;

}