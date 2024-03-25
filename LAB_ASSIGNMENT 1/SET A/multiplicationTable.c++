#include <iostream>
#include <conio.h>
using namespace std;
class Multiplication
{
public:
    int n;

public:
    void getValue()
    {
        cout << "Enter a number:";
        cin >> n;
    }
    void display(int i = 1)
    {
        if (i != 11)
        {
            cout << n * i << endl;
            display(i + 1);
        }
    }
};
int main()
{
    Multiplication m;
    m.getValue();
    cout << "---The Multiplication Table---" << endl;
    m.display();
    getch();
    return 0;
}