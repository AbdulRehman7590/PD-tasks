#include <iostream>
using namespace std;
main()
{
    string month;
    int stays;
    float studio;
    float price1, price2;
    float apartment;

    cout <<"Enter the name of the month :";
    cin >> month;
    cout <<"Enter no. of stays :";
    cin >> stays;

    if (month == "May" || month == "October")
    {
        studio = 50;
        apartment = 65;
        
        if(stays >= 7 && stays < 14)
        {
            price1 = studio - ((studio*5)/100);
            price2 = apartment;
        }
        else if (stays > 14)
        {
            price1 = studio - ((studio*30)/100);
            price2 = apartment - ((apartment*10)/100);
        }
        else
        {
            price1 = studio;
            price2 = apartment;
        }
    }
    else if (month == "June" || month == "September")
    {
        studio = 75.20;
        apartment = 68.70;

        if(stays > 14)
        {
            price1 = studio - ((studio*20)/100);
            price2 = apartment - ((apartment*10)/100);
        }
        else 
        {
            price1 = studio;
            price2 = apartment;
        }
    }
    else if(month == "July" || month == "August")
    {
        studio = 76;
        apartment = 77;

        if(stays > 14)
        {
            price1 = studio;
            price2 = apartment - ((apartment*10)/100);
        }
    }
    else
    {
        studio = 50;
        apartment = 65;

        if(stays > 14)
        {
            price1 = studio;
            price2 = apartment - ((apartment*10)/100);
        }
        else
        {
            price1 = studio;
            price2 = apartment;
        }
    }
    float finalprice1 = stays*price1;
    float finalprice2 = stays*price2;

    cout <<"Studio price is :" <<finalprice1 <<endl;
    cout <<"Apartment price is :" <<finalprice2 <<endl;
}