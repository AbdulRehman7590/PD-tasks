#include <iostream>
using namespace std;
main()
{
   string s1;
   cout <<"Enter 1st string : ";
   cin >> s1;
   string s2;
   cout <<"Enter 2nd string : ";
   cin >> s2;

   int counter=0;
   int x = s1.length();
   int y = s2.length();

   for (int idx = 0; idx < x; idx++)
   {  
      for (int index = 0; index < y; index++)
      {
         if(s1[idx] == s2[index])
         {
            s2[index] = '!';
            counter++;  
         }
      }
        
   }
   cout <<"Common characters :" <<counter <<endl;

}