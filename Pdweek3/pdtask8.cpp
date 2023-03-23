#include <iostream>
using namespace std;
main(){
float vegetables;
cout <<" Enter price of vegetables per kg : ";
cin >> vegetables;
float fruits;
cout <<" Enter price of fruits per kg : ";
cin >> fruits;
float vegesell;
cout <<" Enter amount of vegetables sold : ";
cin >> vegesell;
float fruitsell;
cout <<" Enter amount of fruits sold : ";
cin >> fruitsell;
float totalvege;
totalvege=vegesell*vegetables;
float totalfruits;
totalfruits=fruitsell*fruits;
float coins;
coins=totalvege+totalfruits;
cout <<" Total amount in coins is : " <<coins <<endl;
float rupees;
rupees=coins*0.51;
cout <<" Total amount in rupees is : " <<rupees;
}
