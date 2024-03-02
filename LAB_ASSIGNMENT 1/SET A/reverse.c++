#include <iostream>
#include <conio.h>
using namespace std;
class Reverse
{
public:
    int n;

public:
    void getValue()
    {
        cout << "Enter a number:";
        cin >> n;
    }
    int reverse()
    {
        int rev = 0;
        while (n > 0)
        {
            int d = n % 10;
            rev = rev * 10 + d;
            n = n / 10;
        }
        return rev;
    }
};
int main()
{
    cout << "the reverse is ";
    Reverse R;
    R.getValue();
    cout << "the reverse number is " << R.reverse();
    getch();
    return 0;
}
