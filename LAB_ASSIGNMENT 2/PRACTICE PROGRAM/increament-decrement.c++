#include <iostream>
#include <conio.h>
using namespace std;
void number(int);
int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;
    number(n);
    getch();
    return 0;
}
void number(int n)
{
    cout << "After pre-increment number is:" << ++n << endl;
    cout << "After post-increment number is:" << n++ << endl;
    cout << "After pre-decrement number is:" << --n << endl;
    cout << "After post-decrement number is:" << n-- << endl;
}