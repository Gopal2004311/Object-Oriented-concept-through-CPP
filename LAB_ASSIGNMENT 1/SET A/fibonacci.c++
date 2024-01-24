#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number to generate fibonacci series:" << endl;
    cin >> n;
    int i, a = 0, b = 1, c;
    cout << a << "\t";
    cout << b << "\t";
    for (i = 0; i < n; i++)       
    {
        c = a + b;
        a = b;
        b = c;
        cout << c << "\t";
    }
    getch();
    return 0;
}