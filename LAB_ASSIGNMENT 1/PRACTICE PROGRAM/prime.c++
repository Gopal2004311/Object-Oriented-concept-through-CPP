#include <iostream>
#include <conio.h>
using namespace std;
class Prime
{
public:
    int prime(int n)
    {
        int i, flag = 0;
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                flag = 1;
                break;
            }
        }
        return (flag == 0) ? 1 : 0;
    }
};

int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;
    Prime p;
    if (p.prime(n))
    {
<<<<<<< HEAD
        cout <<n<<" is prime!!";
    }
    else
    {
        cout <<n<<" is not prime!!";
=======
        cout << "Number is prime!!";
    }
    else
    {
        cout << "Number is not prime!!";
>>>>>>> d0af5042db75feed30c3349c618ff23d15bc4996
    }
    getch();
    return 0;
}