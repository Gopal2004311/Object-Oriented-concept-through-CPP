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
        int i, a = 0, b = 1, c = 0;
        for (i = 0; i < n; i++)
        {
            cout << c << "\t";
            c = a + b;
            a = b;
            b = c;
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