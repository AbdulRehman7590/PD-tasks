#include <iostream>
using namespace std;
main()
{
    int num, num1=0, num2=0, result;

    cout <<"Enter the no. of triangle : ";
    cin >> num;

    for(int count = 1; count <= num; count++)
    {
        num1 = num1 + 1;
        result = num1+num2;
        num2 = result;        
    }

    cout <<"Triangle" <<num <<" has " <<result <<" dots in it." <<endl;
}