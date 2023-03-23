#include <iostream>
using namespace std;
main()
{
    int num, patients, result1, result2;
    int treated = 0, untreated = 0;

    int doctor = 7;
    int treatedpatients, untreatedpatients;

    cout << "Enter period/days, you need to go : ";
    cin >> num;

    for (int count = 1; count <= num; count++)
    {
        cout << "Enter no. of patients : ";
        cin >> patients;

         if(count % 3 == 0 && result2 > result1)
        {
            doctor = doctor + 1;
        }

        if (patients > doctor)
        {
            treatedpatients = doctor;
            untreatedpatients = patients - treatedpatients;
        }
        else
        {
            treatedpatients = patients;
            untreatedpatients = 0;
        }

        cout << "Day" << count << " :" << treatedpatients << " treated and " << untreatedpatients << " untreated patients for the day." << endl;

        result1 = treated + treatedpatients;
        treated = result1;
        result2 = untreated + untreatedpatients;
        untreated = result2;

    }
    cout << "Total treated patients  :" << result1 << endl;
    cout << "Total untreated patients : " << result2 << endl;
}