#include <iostream>
using namespace std;
main(){
int num;
cout <<" Enter 4 digit no. : ";
cin >> num;
int number1;
int number2;
int number3;
int number4;
number1=num%10;
num=num/10;
number2=num%10;
num=num/10;
number3=num%10;
num=num/10;
number4=num%10;
int sum;
sum=number1+number2+number3+number4;
cout <<" Your output is : " << sum;

}