#include <iostream>
using namespace std;
main()
{
    int h, x, y;

    cout <<"Enter value of h :";
    cin >> h;
    cout <<"Enter the x cordinate :";
    cin >> x;
    cout <<"Enter the y cordinate :";
    cin >> y;

   if ((x >= 0 && x <= 3 * h) && (y >= 0 && y <= h) || ((x >= h && x <= 2 * h) && (y >= h && y <= 4 * h))) {
        if (x % h == 0 && y % h == 0)
            cout <<"(" <<x <<"," <<y <<")"<< " is at Border." << endl;
        else
            cout <<"(" <<x <<"," <<y <<")"<< " is at Inside." << endl;
    }
    else {
        cout <<"(" <<x <<"," <<y <<")"<< " is at Outside." << endl;
    }
}
