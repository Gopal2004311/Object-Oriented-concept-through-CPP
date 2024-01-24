#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i, n;
    cout << "Enter terms:";
    cin >> n;
    int result = 0;
    for (i = 1; i <= n; i++)
    {
        result = result + (i * i);
         if (i == n)
        {
            cout << "(" << i << "*" << i << ")";
        }
        else
        {
            cout << "(" << i << "*" << i << ")+";
        }
    }
    cout << "\n";
    cout << "The result of above series:" << result;
    getch();
    return 0;
}