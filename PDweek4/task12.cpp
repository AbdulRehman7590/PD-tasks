#include <iostream>
using namespace std;

void discount(float original);

main()
{
 float redrose = 2.00;
 float whiterose = 4.10;
 float tulips = 2.50;
 float Trrose;
 float Twrose;
 float Ttulips;
 float redprice;
 float whiteprice;
 float tulprice;
 float total;
 
 while (true)
 {
  cout <<"Enter total no. of red roses : ";
  cin >> Trrose;
  cout <<"Enter total no. of white roses : ";
  cin >> Twrose;
  cout <<"Enter total no. of tulips : ";
  cin >> Ttulips;
 
  redprice = Trrose*redrose;
  whiteprice = Twrose*whiterose;
  tulprice = Ttulips*tulips;
 
  total = redprice+whiteprice+tulprice;
 
  discount(total);
 }
}
void discount(float original)
{
 if (original > 200)
 {
  cout <<"Total payable amount is : " << original*0.80 <<endl;
 }
 if (original <= 200)
 {
  cout <<"Total payable amount is : " << original <<endl;
 }
}