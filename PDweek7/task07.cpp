#include <iostream>
using namespace std;
main()
{
    int num, number;
    float average = 0, result = 0, minibus = 0, truck = 0, train = 0;
    float R1, R2, R3, averageprice;
    float minibuspercent, truckpercent, trainpercent;

    cout << "Enter no. of the cargo : ";
    cin >> num;

    for (int count = 1; count <= num; count++)
    {
        cout << "Enter the cargo's : ";
        cin >> number;

        result = average + number;
        average = result;

        if (number <= 3)
        {
            R1 = minibus + number;
            minibus = R1;
        }
        else
        {
            R1 = 0;
        }

        if (number > 3 && number <= 11)
        {
            R2 = truck + number;
            truck = R2;
        }
        else
        {
            R2 = 0;
        }
        if (number > 11)
        {
            R3 = train + number;
            train = R3;
        }
        else
        {
            R3 = 0;
        }
    }
    minibuspercent = (minibus * 100) / result;
    truckpercent = (truck * 100) / result;
    trainpercent = (train * 100) / result;

    averageprice = (minibus * 200 + truck * 175 + train * 120) / result;

    cout << averageprice << endl;
    cout << minibuspercent << endl;
    cout << truckpercent << endl;
    cout << trainpercent << endl;
}