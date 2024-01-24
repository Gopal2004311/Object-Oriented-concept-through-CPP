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
        temp = n, temp1 = n;
        while (n > 0)
        {
            d = n % 10;
            count++;
            n = n / 10;
        }
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
        if (temp1 == sum)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};
int main()
{
    int n;
    cout << "Enter intervals:";
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