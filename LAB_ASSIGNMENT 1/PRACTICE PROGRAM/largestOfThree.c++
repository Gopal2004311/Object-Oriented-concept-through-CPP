#include <iostream>
#include <conio.h>
using namespace std;
class Largest
{
public:
    int largest(int, int, int);
};

int main()
{
    int p, q, r;
    cout << "Enter first number:";
    cin >> p;
    cout << "Enter second number:";
    cin >> q;
    cout << "Enter third number:";
    cin >> r;
    Largest a;
    cout << "The Largest number is:" << a.largest(p, q, r);
    getch();
    return 0;
}

int Largest::largest(int a, int b, int c)
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