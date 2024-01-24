#include <iostream>
#include <conio.h>
using namespace std;
int power(int);
int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;
    cout << "The power of " << n << " is " << power(n) << endl;
}

int power(int n)
{
    int i, result = 1;
    for (i = 1; i <= 2; i++)
    {
        result = result * n;
    }
    return result;
}
