#include <iostream>
using namespace std;
int main()
{
    string day, fruit;
    float quantity, amount;

    cout <<"Enter name of day : ";
    cin >> day;
    cout <<"Enter name of Fruit : ";
    cin >> fruit;
    cout <<"Enter quantity of fruit :";
    cin >> quantity;

    if(day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday")
    {
        if(fruit == "banana")
        {
            amount = quantity*2.50;
        }
        else if(fruit == "apple")
        {
            amount = quantity*1.20;
        }
        else if(fruit == "orange")
        {
            amount = quantity*0.85;
        }
        else if(fruit == "grapefruit")
        {
            amount = quantity*1.45;
        }
        else if(fruit == "kiwi")
        {
            amount = quantity*2.70;
        }
        else if(fruit == "pineapple")
        {
            amount = quantity*5.50;
        }
        else if(fruit == "grapes")
        {
            amount = quantity*3.85;
        }
        else
        {
            cout <<"Enter valid fruit.";
            return 0;
        }
    }
    else if(day == "saturday" || day == "sunday")
    {
        if(fruit == "banana")
        {
            amount = quantity*2.70;
        }
        else if(fruit == "apple")
        {
            amount = quantity*1.25;
        }
        else if(fruit == "orange")
        {
            amount = quantity*0.90;
        }
        else if(fruit == "grapefruit")
        {
            amount = quantity*1.60;
        }
        else if(fruit == "kiwi")
        {
            amount = quantity*3.00;
        }
        else if(fruit == "pineapple")
        {
            amount = quantity*5.60;
        }
        else if(fruit == "grapes")
        {
            amount = quantity*4.20;
        }
        else
        {
            cout <<"Enter valid fruit.";
            return 0;
        }
    }
    else
    {
        cout <<"Enter valid day.";
        return 0;
    }
    cout << amount;
}