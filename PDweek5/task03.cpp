#include <iostream>
using namespace std;

float calculate(float P, float T);
float tax, final;

main()
{
 float price;
 char type;
 
 cout <<"Enter price of the vehicle : ";
 cin >> price;
 cout <<"Enter vehicle type code (capital) :";
 cin >> type;

 if (type == 'M')
 {
  tax = (price*6)/100;
  final = calculate(price, tax);
  cout <<"The final price on a vehicle of type Motorcycle after adding the tax is " <<final <<endl;
 }
 
 if (type == 'E')
 {
  tax = (price*8)/100;
  final = calculate(price, tax);
  cout <<"The final price on a vehicle of type Electric after adding the tax is  " <<final <<endl;
 }

 if (type == 'S')
 {
  tax = (price*10)/100;
  final = calculate(price, tax);
  cout <<"The final price on a vehicle of type Sedan after adding the tax is  " <<final <<endl;
 }

 if (type == 'V')
 {
  tax = (price*12)/100;
  final = calculate(price, tax);
  cout <<"The final price on a vehicle of type Van after adding the tax is  " <<final <<endl;
 }

 if (type == 'T')
 {
  tax = (price*15)/100;
  final = calculate(price, tax);
  cout <<"The final price on a vehicle of type Truck after adding the tax is " <<final <<endl;
 }

}

float calculate(float P, float T)
{
 float result;
 result = P+T;
 return result;
}