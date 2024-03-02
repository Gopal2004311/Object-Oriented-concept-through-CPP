#include <iostream>
#include <conio.h>
using namespace std;
class Fibonacci
{
private:
    int n;

public:
    void getNum()
    {
        cout << "Enter a number to generate fibonacci series:";
        cin >> n;
    }
    void generate()
    {
        int i, a = 0, b = 1, c;
        cout << a << "\t";
        cout << b << "\t";
        for (i = 0; i < n - 2; i++)
        {
            c = a + b;
            a = b;
            b = c;
            cout << c << "\t";
        }
    }
};
int main()
{
    Fibonacci f;
    f.getNum();
    f.generate();
    getch();
    return 0;
}