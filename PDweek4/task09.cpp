#include <iostream>
using namespace std;

void compare(string x, string y);

main()
{
 string x;
 string y;
 while (true)
 {
  cout <<"Enter 1st number : ";
  cin >> x;
  cout <<"Enter 2nd integer : ";
  cin >> y;
  compare(x,y);
 }
}
void compare(string x, string y)
{
 if (x == y)
 {
  cout <<" FALSE " <<endl;
 }
 if (x != y)
 {
  cout <<" TRUE " <<endl;
 }
}