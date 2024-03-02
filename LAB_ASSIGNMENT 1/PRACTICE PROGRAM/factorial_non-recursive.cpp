#include <iostream>
#include <conio.h>
using namespace std;
class Fact
{
public:
    int factorial(int n)
    {
        int fact = 1;
        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        return fact;
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