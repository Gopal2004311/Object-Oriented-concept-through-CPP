#include <iostream>
#include <conio.h>
using namespace std;
class Armstrong
{
public:
    int result = 1, d, temp, temp1, count = 0, sum = 0;

public:
    int armstrong(int n)
    {
        temp = n;
        while (temp > 0)
        {
            d = temp % 10;
            count++;
            temp = temp / 10;
        }
        temp = n;
        while (temp > 0)
        {
            d = temp % 10;
            for (int i = 1; i <= count; i++)
            {
                result = result * d;
            }
            sum += result;
            result = 1;
            temp = temp / 10;
        }
        cout << "the value of sum=" << sum << endl;
        return (sum == n) ? 1 : 0;
    }
};
int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;
    Armstrong A;
    if (A.armstrong(n))
    {
        cout << "The number " << n << " is Armstrong!!";
    }
    else
    {
        cout << "The number " << n << " is not Armstrong!!";
    }
    getch();
    return 0;
}