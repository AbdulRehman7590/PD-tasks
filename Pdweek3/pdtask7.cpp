#include <iostream>
using namespace std;
main(){
string movie;
cout <<"Enter name of movie : ";
cin >> movie;
int adulticket;
cout <<"Enter adult ticket price : ";
cin >> adulticket;
int childticket;
cout <<"Enter child ticket price : ";
cin >> childticket;
int adticketsold;
cout <<"Enter no. of adult tickets sold : ";
cin >> adticketsold;
int childticketsold;
cout <<"Enter no. of child tickets sold : ";
cin >> childticketsold;
int adtotal;
adtotal=adulticket*adticketsold;
int chtotal;
chtotal=childticket*childticketsold;
int sum;
sum=adtotal+chtotal;
cout <<"Total amount generated : " << sum <<endl;
float donate;
cout <<"Enter percentage to donate : ";
cin >> donate;
float totaldonate;
totaldonate=(sum*donate)/100;
float afterdonation;
afterdonation=sum-totaldonate;
cout <<"Amount after donation : " <<afterdonation;
}