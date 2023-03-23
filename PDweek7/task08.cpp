#include <iostream>
using namespace std;
void uppart(int rows);
main()
{
    int rows;
    cout << "Enter the desired no. of rows : ";
    cin >> rows;
    uppart(rows);
}
void uppart(int rows)
{
    float space = rows, stars = 0;

    for (int count = rows; count >= 1; count--)
    {
        stars = stars + 1;
        for (int i = 1; i <= stars; i++)
        {
            cout <<"*";
        }

        space = space - 1;
        for (int j = space; j >= 1; j--)
        {
            cout <<" ";
        }

        for (int j = space; j >= 1; j--)
        {
            cout << " ";
        }
        
        stars = rows - space;
        for (int i = 1; i <= stars; i++)
        {
            cout << "*";
        }
        
        cout <<endl;
    }
}