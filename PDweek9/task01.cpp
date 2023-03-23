#include <iostream>
using namespace std;
main()
{
    string fruit[] = {"peach", "apple", "guava", "watermelon"};
    int price[] = {60, 70, 40, 30};

    string name;
    cout <<"Enter the fruit name : " ;
    cin >> name;

    int quantity, bill;

    cout <<"Enter the amount of fruits buy (in kg) :";
    cin >> quantity;

    for(int idx = 0; idx < 4; idx++)
    {
        if(name == fruit[idx])
        {
            bill = quantity*price[idx];
        }
    }

    cout <<"Your total bill is : " <<bill <<endl;
}