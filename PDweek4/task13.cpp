#include <iostream>
using namespace std;

main()
{
 int holiday;
 int workday;
 int holidaytime;
 int workdaytime;
 int totaltime;
 int gamestime;
 int hours;
 int minutes;

 cout <<"Enter no. of holidays : ";
 cin >> holiday;
 
 workday = 365-holiday;
 holidaytime = 127*holiday;
 workdaytime = 63*workday;
 
 totaltime = holidaytime + workdaytime;
 
 if (totaltime < 30000)
 {
  gamestime = 30000-totaltime;
  
  hours=gamestime/60;
  minutes=gamestime%60;
  cout<<"Tom will sleep" <<endl;
  cout<<hours <<" hours " <<minutes <<" minutes less for play";
 }
 
 if (totaltime >= 30000)
 {
  gamestime = totaltime-30000;

  hours=gamestime/60;
  minutes=gamestime%60;
  cout<<"Tom will run away" <<endl;
  cout<<hours <<" hours " <<minutes <<" minutes for play" <<endl;
 }

}