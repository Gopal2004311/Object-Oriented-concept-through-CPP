/*1. Write a C++ program to print the following pattern
    * * * * *
    * * * *
    * * *
    * *
    *
*/

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class Pattern
{
public:
   void display(int n)
   {
      for (int i = n; i >= 0; i--)
      {
         for (int j = 0;j < i;j++)
         {
            cout << "*" << "\t";
         }
         cout << endl;
      }
   }
};
int main()
{
   int n;
   cout << "Enter size:";
   cin >> n;
   Pattern p;
   p.display(n);
   getch();
   return 0;
}