/*
  A
  B C
  D E F
  G H I J
*/
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    char ch = 'A';
    int i, j, n;
    cout << "Enter size of pattern:";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            cout << ch << "\t";
            ch++;
        }
        cout << "\n";
    }
    getch();
    return 0;
}