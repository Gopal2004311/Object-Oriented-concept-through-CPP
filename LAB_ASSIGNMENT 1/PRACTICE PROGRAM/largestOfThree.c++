#include <iostream>
#include <conio.h>
using namespace std;
class Largest
<<<<<<< HEAD
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
=======
>>>>>>> d0af5042db75feed30c3349c618ff23d15bc4996
{
public:
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
<<<<<<< HEAD
    else if (b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
=======
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
    Largest l;
    cout << "The Largest number is:" << l.largest(p, q, r);
    getch();
    return 0;
>>>>>>> d0af5042db75feed30c3349c618ff23d15bc4996
}