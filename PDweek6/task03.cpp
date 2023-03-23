#include <iostream>
using namespace std;
main()
{
    int date;
    string month, star, symbol;

    cout <<"Enter date of bith :";
    cin >> date;
    cout <<"Enter month of birth :";
    cin >> month;

    if (month == "March")
    {
        if(date >= 1 && date <= 20)
        {
            star = "Pisces";
            symbol = "The_Fishes";
        }
        else if (date <=31 && date >= 21)
        {
            star = "Aries";
            symbol = "The_Ram";
        }
    }
    else if (month == "April")
    {
        if(date >= 1 && date <= 19)
        {
            star = "Aries";
            symbol = "The_Ram";
        }
        else if (date >= 20 && date <= 30)
        {
            star = "Taurus";
            symbol = "The_Bull";
        }
    }
    else if (month == "May")
    {
        if(date >= 1 && date <= 20)
        {
            star = "Taurus";
            symbol = "The_Bull";
        }
        else if (date >= 21 && date <= 31)
        {
            star = "Gemini";
            symbol = "The_Twins";
        }
    }
    else if (month == "June")
    {
        if(date >= 1 && date <= 20)
        {
            star = "Gemini";
            symbol = "The_Twins";
        }
        else if (date >= 21 && date <= 30)
        {
            star = "Cancer";
            symbol = "The_Crab";
        }
    }
    else if (month == "July")
    {
        if(date >= 1 && date <= 22)
        {
            star = "Cancer";
            symbol = "The_Crab";
        }
        else if (date >= 23 && date <= 31)
        {
            star = "Leo";
            symbol = "The_Lion";
        }
    }
    else if (month == "August")
    {
        if(date >= 1 && date <= 22)
        {
            star = "Leo";
            symbol = "The_Lion";
        }
        else if (date >= 23 && date <= 31)
        {
            star = "Virgo";
            symbol = "The_Virgin";
        }
    }
    else if (month == "September")
    {
        if(date >= 1 && date <= 22)
        {
            star = "Virgo";
            symbol = "The_Virgin";
        }
        else if (date >= 23 && date <= 30)
        {
            star = "Libra";
            symbol = "The_Scales";
        }
    }
    else if (month == "October")
    {
        if(date >= 1 && date <= 22)
        {
            star = "Libra";
            symbol = "The_Scales";
        }
        else if (date >= 23 && date <= 31)
        {
            star = "Scorpio";
            symbol = "The_Scorpion";
        }
    }
    else if (month == "November")
    {
        if(date >= 1 && date <= 21)
        {
            star = "Scorpio";
            symbol = "The_Scorpion";
        }
        else if (date >= 22 && date <= 30)
        {
            star = "Sagittarius";
            symbol = "The_Archer";
        }
    }
    else if (month == "December")
    {
        if(date >= 1 && date <= 21)
        {
            star = "Sagittarius";
            symbol = "The_Archer";
        }
        else if (date >= 22 && date <= 31)
        {
            star = "Capricon";
            symbol = "The_Goat";
        }
    }
    else if (month == "January")
    {
        if(date >= 1 && date <= 19)
        {
            star = "Capricon";
            symbol = "The_Bull";
        }
        else if (date >= 20 && date <= 31)
        {
            star = "Aquarius";
            symbol = "The_Water_Bearer";
        }
    }
    else if (month == "February")
    {
        if(date >= 1 && date <= 18)
        {
            star = "Aquarius";
            symbol = "The_Water_Bearer";
        }
        else if (date >= 19 && date <= 29)
        {
            star = "Pisces";
            symbol = "The_Fishes";
        }
    }
    cout <<star <<" " <<symbol <<endl;
}