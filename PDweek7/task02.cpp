#include <iostream>
using namespace std;
void uppart(int rows);
void downpart(int rows);
main()
{
    int rows;
    cout << "Enter the desired no. of rows : ";
    cin >> rows;
    uppart(rows);
    downpart(rows);
}
void uppart(int rows)
{
    float space = rows, stars = 0;

    for (int count = 1; count <= rows; count++)
    {
        space = space - 1;
        for (int i = space; i >= 1; i--)
        {
            cout <<" ";
        }

        stars = rows - space;

        for(int j = 1; j <= stars; j++)
        {
            cout <<"*";
        }

        cout <<endl;
    }
}
void downpart(int rows)
{
    float space = 0, stars = 0;

    for (int count = 1; count <= rows; count++)
    {
        space = space+1;

        for (int i = space; i >= 1; i--)
        {
            cout <<" ";
        }

        stars = rows-space;

        for (int j = 1; j <= stars; j++)
        {
            cout <<"*";
        }
        cout <<endl;
    }   
}