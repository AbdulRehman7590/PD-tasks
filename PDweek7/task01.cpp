#include <iostream>
using namespace std;
void asteriks(int rows);
main()
{
    int rows;
    cout <<"Ebter the desired no. of rows : ";
    cin >> rows;
    asteriks(rows);
}
void asteriks(int rows)
{
    for (int i = rows; i >= 1; i--)
    {
        for(int j = i; j >= 1; j--)
        {
            cout <<"*";
        }
        cout <<endl;
    }
}