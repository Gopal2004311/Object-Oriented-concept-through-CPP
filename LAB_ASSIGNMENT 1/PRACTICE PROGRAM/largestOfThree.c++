#include <iostream>
#include <conio.h>
using namespace std;
int largest(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int main()
{
    int p, q, r;
    cout << "Enter first number:";
    cin >> p;
    cout << "Enter second number:";
    cin >> q;
    cout << "Enter third number:";
    cin >> r;
    cout<<"The Largest number is:"<<largest(p,q,r);
    getch();
    return 0;
}