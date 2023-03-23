#include <iostream>
using namespace std;
int calhr(int hh);
int calmin(int mm);
main()
{
    float examhr, exammin;
    float arrivehr, arrivemin;
    int result;
    string check;
    float hr = 0;
    float min = 0;

    cout << "Enter exams starting time (hr) :";
    cin >> examhr;
    cout << "Enter exams starting time (min) :";
    cin >> exammin;
    cout << "Enter arrival time (hr) :";
    cin >> arrivehr;
    cout << "Enter arrival time (min) :";
    cin >> arrivemin;

    float ExamMins = (examhr * 60) + exammin;
    float ArriveMins = (arrivehr * 60) + arrivemin;

    if (ExamMins < ArriveMins)
    {
        result = ArriveMins - ExamMins;
        check = "Late";
        cout << check << endl;
        if (result >= 60)
        {
            hr = calhr(result);
            min = calmin(result);
            cout << hr << ":" << min <<" hours after the test time." <<endl;
        }
        else
        {
            min = calmin(result);
            cout << min <<" minutes after the test time." << endl;
        }
    }
    else if (ExamMins == ArriveMins)
    {
        check = "On Time";
        result = 0;
        cout << check << endl;
    }
    else if (ExamMins > ArriveMins)
    {
        result = ExamMins - ArriveMins;

        if (result <= 30)
        {
            check = "On Time";
        }
        else
        {
            check = "Early";
        }
        cout << check << endl;

        if (result >= 60)
        {
            hr = calhr(result);
            min = calmin(result);
            cout << hr << ":" << min <<" hours before the test time." <<endl;
        }
        else
        {
            min = calmin(result);
            cout << min <<" minutes before the test time." << endl;
        }
    }
}
int calhr(int hh)
{
    hh = hh/60;
    if (hh > 23)
    {
        hh=0;
    }
    return hh;
}
int calmin(int mm)
{
    mm = mm%60;
    return mm;
}