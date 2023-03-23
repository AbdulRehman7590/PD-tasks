#include <iostream>
using namespace std;

void compare(int x);

main()
{
 int x;
 while (true)
 {
  cout <<"Enter your speed : ";
  cin >> x;
  compare(x);
 }
}
void compare(int x)
{
 if (x > 100)
 {
  cout <<" Halt...YOU WILL BE CHALLENGED!!! " <<endl;
 }
 if (x <= 100)
 {
  cout <<" Perfect! You are going good. " <<endl;
 }
}