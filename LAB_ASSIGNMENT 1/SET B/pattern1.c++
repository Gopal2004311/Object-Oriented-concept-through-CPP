/*
  A
  B C
  D E F
  G H I J
*/
#include <iostream>
#include <conio.h>
using namespace std;
class Pattern
{
    public:
    int n;
    public:
   void display()
   {
    char ch = 'A';
     cout << "Enter size of pattern:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << ch << "\t";
            ch++;
        }
        cout << "\n";
    }
   }
};
int main()
{
    Pattern p;
    p.display();
    getch();
    return 0;
}