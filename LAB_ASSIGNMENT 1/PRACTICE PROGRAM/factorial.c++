#include <iostream>
#include <conio.h>
using namespace std;
class Fact
{
public:
    int n;

public:
    int factorial(int num)
    {
        if (num == 1 || num == 0)
        {
            return 1;
        }
        else
        {
            return (factorial(num - 1) * num);
        }
    }
};
int main()
{
    Fact result;
    int n, r;
    cout << "Enter number for finding factorial:" << endl;
    cin >> n;
    r = result.factorial(n);
    cout << "The Factorial of " << n << " is:" << r << endl;
    getch();
    return 0;
}