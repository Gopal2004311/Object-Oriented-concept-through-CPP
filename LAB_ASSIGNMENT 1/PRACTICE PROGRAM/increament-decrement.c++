#include <iostream>
#include <conio.h>
using namespace std;
class Number
{
public:
    void number(int n)
    {
        cout << "After pre-increment number is:" << ++n << endl;
        cout << "After post-increment number is:" << n++ << endl;
        cout << "After pre-decrement number is:" << --n << endl;
        cout << "After post-decrement number is:" << n-- << endl;
    }
};
int main()
{
    Number n1;
    int n;
    cout << "Enter a number:";
    cin >> n;
    n1.number(n);
    getch();
    return 0;
}