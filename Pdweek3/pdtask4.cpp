#include <iostream>
using namespace std;
main() {
string name;
cout <<"Enter the name of student =";
cin >> name;
float subject1;
float subject2;
float subject3;
float subject4;
float subject5;
cout <<"Enter subject 1 marks = ";
cin  >> subject1;
cout <<"Enter subject 2 marks = ";
cin >> subject2;
cout <<"Enter subject 3 marks = ";
cin >> subject3;
cout <<"Enter subject 4 marks = ";
cin >> subject4;
cout <<"Enter subject 5 marks = ";
cin >> subject5;
float sum;
sum=subject1+subject2+subject3+subject4+subject5;
float percentage;
percentage=(sum*100)/500;
cout <<"Your total percentage is = " << percentage;

}