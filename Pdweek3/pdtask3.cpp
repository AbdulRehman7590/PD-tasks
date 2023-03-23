#include <iostream>
using namespace std;
main() {
int initialvelocity;
cout <<"Enter initial velocity = ";
cin >> initialvelocity;
int acceleration;
cout <<"Enter acceleration = ";
cin >> acceleration;
int time;
cout <<"Enter time = ";
cin >> time;
int finalvelocity;
finalvelocity=(acceleration*time)+initialvelocity;
cout <<"Your final velocity is = " <<finalvelocity;
}