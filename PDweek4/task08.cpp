#include <iostream>
using namespace std;

void compare(int x, int y);

main()
{
 int x;
 int y;
 while (true)
 {
  cout <<"Enter 1st number : ";
  cin >> x;
  cout <<"Enter 2nd integer : ";
  cin >> y;
  compare(x,y);
 }
}
void compare(int x, int y)
{
 if (x == y)
 {
  cout <<" TRUE " <<endl;
 }
 if (x != y)
 {
  cout <<" FALSE " <<endl;
 }
}