#include <iostream>
#include <windows.h>
using namespace std;

void printMenu();
void calculate(string Name, int Matricmarks, int Intermarks, int Ecat);
void compare(string Name1, int Ecat1, string Name2, int Ecat2);

main()
{
  string Name1;
  int Matricmarks1;
  int Intermarks1;
  int Ecat1;

  string Name2;
  int Matricmarks2;
  int Intermarks2;
  int Ecat2;
  string word;

 while (true)
 {
  system("cls"); 
  int num;
  printMenu();
  cout <<"Enter choice : ";
  cin >> num;
 
  if (num == 1)
  {
   system("cls");
   cout <<"You choosed : " <<num <<endl;
   
   cout <<"Enter your name = ";
   cin >> Name1;
   cout <<"Enter your matric marks(out of 1100) = ";
   cin >> Matricmarks1;
   cout <<"Enter your inter marks(out of 550) = ";
   cin >> Intermarks1;
   cout <<"Enter your ecat marks(out of 400) = ";
   cin >> Ecat1;

   cout <<"Press any key to continue...";
   cin >> word;
  }

  if (num == 2)
  {
   system("cls");
   cout <<"You choosed : " <<num <<endl;

   cout <<"Enter your name = ";
   cin >> Name2;
   cout <<"Enter your matric marks(out of 1100) = ";
   cin >> Matricmarks2;
   cout <<"Enter your inter marks(out of 550) = ";
   cin >> Intermarks2;
   cout <<"Enter your ecat marks(out of 400) = ";
   cin >> Ecat2;
   cout <<"Press any key to continue...";
   cin >> word;
  }

  if (num == 3)
  {
   system("cls");
   cout <<"You choosed : " <<num <<endl;

   calculate( Name1, Matricmarks1, Intermarks1, Ecat1);
   cout <<"Press any key to continue...";
   cin >> word;
  }

  if (num == 4)
  {
   system("cls");
   cout <<"You choosed : " <<num <<endl;

   calculate( Name2, Matricmarks2, Intermarks2, Ecat2);
   cout <<"Press any key to continue...";
   cin >> word;
  }
 
  if (num == 5)
  {
   system("cls");
   cout <<"You choosed : " <<num <<endl;

   compare( Name1, Ecat1, Name2, Ecat2);
   cout <<"Press any key to continue...";
   cin >> word;
  }
 }
}
void printMenu()
{
 cout<<"                                                                           " <<endl;
 cout<<"***************************************************************************" <<endl;
 cout<<"***************************************************************************" <<endl;
 cout<<"*                                                                         *" <<endl;
 cout<<"*                                                                         *" <<endl;
 cout<<"*                          Welcome to UET Lahore                          *" <<endl;
 cout<<"*                       Admission Management System                       *" <<endl;
 cout<<"*                                                                         *" <<endl;
 cout<<"*                                                                         *" <<endl;
 cout<<"***************************************************************************" <<endl;
 cout<<"***************************************************************************" <<endl <<endl;

 cout <<"Press 1 to Enter details of 1st student!      " <<endl;
 cout <<"Press 2 to Enter details of 2nd student!      " <<endl;
 cout <<"Press 3 to calculate aggregate of 1st student!" <<endl;
 cout <<"Press 4 to calculate aggregate of 2nd student!" <<endl;
 cout <<"Press 5 to display student with roll no. 01!  " <<endl;
}

void calculate(string Name, int Matricmarks, int Intermarks, int Ecat)
{
 float matric;
 matric=(Matricmarks*100)/1100;
 
 float inter;
 inter=(Intermarks*100)/550;
 
 float ecat;
 ecat=(Ecat*100)/400;
 
 float Ecatper;
 Ecatper=(ecat*40)/100;
 
 float Interper;
 Interper=(inter*30)/100;
 
 float Matricper;
 Matricper=(matric*30)/100;
 
 float aggregate;
 aggregate=Ecatper+Interper+Matricper;
 cout << Name <<" Your Aggregate is = " << aggregate <<endl;
}

void compare( string Name1, int Ecat1, string Name2, int Ecat2)
{ 
 if (Ecat1 > Ecat2)
 {
  cout <<"Roll no. 01 is : " << Name1 <<endl;
 }

 if (Ecat1 < Ecat2)
 {
  cout <<"Roll no. 01 is : " << Name2 <<endl;
 }
}