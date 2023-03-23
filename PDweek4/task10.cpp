#include <iostream>
using namespace std;

void discount(string name, float price);

main()
{
 string countryname;
 float ticket;
 while(true)
 {
  cout <<"Enter country name : ";
  cin >> countryname;
  cout <<"Enter ticket price in dollars : ";
  cin >> ticket;
  discount(countryname,ticket);
 }
}
void discount(string name, float price)
{
 if (name == "pakistan")
 {
  cout <<"your final price is : " << price*0.95 <<endl;
 }
 if (name == "ireland")
 {
  cout <<"Your final price is : " << price*0.90 <<endl;
 }

 if (name == "india")
 {
  cout <<"Your final price is : " << price*0.80 <<endl;
 }

 if (name == "england")
 {
  cout <<"Your final price is : " << price*0.70 <<endl;
 }

 if (name == "canada")
 {
  cout <<"Your final price is : " << price*0.55 <<endl;
 }
}