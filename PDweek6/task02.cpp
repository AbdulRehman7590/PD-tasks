#include <iostream>
using namespace std;
main()
{
    string name, grade;
    float marks1, marks2, marks3, marks4, marks5;
    float totalmarks, percentage;

    cout <<"Enter student name :";
    cin >> name;

    cout <<"Enter English marks(out of 100) :";
    cin >> marks1;
    cout <<"Enter Maths marks(out of 100) :";
    cin >> marks2;
    cout <<"Enter Chemistry marks(out of 100) :";
    cin >> marks3;
    cout <<"Enter Social Science marks(out of 100) :";
    cin >> marks4;
    cout <<"Enter Biology marks(out of 100) :";
    cin >> marks5;

    totalmarks = marks1 + marks2 + marks3 + marks4 + marks5;

    percentage = (totalmarks*100)/500;

    if (percentage >= 50 && percentage < 60)
    {
        grade = "C";
    }
    if (percentage >= 60 && percentage < 70)
    {
        grade = "B";
    }
    if (percentage >= 70 && percentage < 80)
    {
        grade = "B+";
    }
    if (percentage >= 80 && percentage < 90)
    {
        grade = "A";
    }
    if (percentage >= 90 && percentage <= 100)
    {
        grade = "A+";
    }

    cout << name <<" " <<totalmarks <<" " <<percentage <<"% with " <<grade <<" grade." <<endl;

}