#include <iostream>
#include <conio.h>
using namespace std;
class EvenOdd
{
    public:
    int evenOdd(int n)
    {
        return (n % 2 == 0) ? 1 : 0;
    }
};

int main()
{
    int n;
    cout << "Enter a number for checking even or odd:";
    cin >> n;
    EvenOdd e;
    if (e.evenOdd(n))
    {
        cout << "Number is Even!";
    }
    else
    {
        cout << "Number is Odd!";
    }
    getch();
    return 0;
}