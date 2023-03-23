#include <iostream>
using namespace std;
main()
{
    int num, number;
    cout <<"Enter number : ";
    cin >> num;
    
    for (int count = 1; count <= num; count = count + 1)
    {
        number = count;

        if(number % 4 == 0)
        {
            number = number* 10;
        }
        cout << number <<",";
    }
}