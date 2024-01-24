#include <iostream>
#include <conio.h>
using namespace std;
int reverse(int);
int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;
    n = reverse(n);
    cout << "The reverse number is:" << n;
    getch();
    return 0;
}
int reverse(int n)
{
    int d, rev = 0;
    while (n > 0)
    {
        d = n % 10;
        rev = rev * 10 + d;
        n = n / 10;
    }
    return rev;
}