#include <iostream>
#include <conio.h>
using namespace std;
class Perfect
{
public:
    int perfect(int n)
    {
        int i, result = 0;
        for (i = 1; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                result = result + i;
            }
        }
        return (result == n) ? 1 : 0;
    }
};

int main()
{
    int n;
    cout << "Enter a Number:";
    cin >> n;
    Perfect p;
    if (p.perfect(n))
    {
        cout << "The Number is perfect!!";
    }
    else
    {
        cout << "The Number is not perfect!!";
    }
    getch();
    return 0;
}
