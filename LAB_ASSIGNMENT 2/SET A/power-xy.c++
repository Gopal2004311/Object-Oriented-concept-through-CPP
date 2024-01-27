#include <iostream>
#include <conio.h>
using namespace std;
class Power
{
public:
    int power(int n)
    {
        int i, result = 1;
        for (i = 1; i <= 2; i++)
        {
            result = result * n;
        }
        return result;
    }
};
int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;
    Power p;
    cout << "The power of " << n << " is " << p.power(n) << endl;
}


