#include <iostream>
#include <cmath>
using namespace std;


main()
{
 float hours, days, workers, timeleft;
  
 cout <<"Enter needed hours : ";
 cin >> hours;
 cout <<"Enter days : ";
 cin >> days;
 cout <<"Number of workers : ";
 cin >> workers;

 float hr = days*10;
 float Tday = (hr*10)/100;
 Tday = floor(Tday);
 float Lday = hr-Tday;
 
 float time = Lday*workers;
 
 if (hours < time)
 {
  timeleft = time-hours;
  cout <<"Yes! " <<timeleft <<" hours left" <<endl;
 }
 
 if (hours > time)
 {
  timeleft = hours-time;
  cout <<"Not enough time! " <<timeleft <<" hours needed." <<endl;
 }
 
 if (hours == time)
 {
  cout <<"Task is completed at given time" <<endl;
 }
 
}