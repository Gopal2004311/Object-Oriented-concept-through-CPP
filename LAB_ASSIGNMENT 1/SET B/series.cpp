#include <iostream>
#include <conio.h>
using namespace std;
class Series
{
public:
    int result = 0;
public:
    void display(int);
    void displayResult();
};
void Series::display(int n)
{
    for (int i = 1; i <= n; i++)
    {
        result = result + (i * i);
        if (i == n)
        {
            cout << "(" << i << "*" << i << ")";
        }
        else
        {
            cout << "(" << i << "*" << i << ")+";
        }
    }
}

void Series::displayResult()
{
    cout << "\n The result of above series:" << result;
}
int main()
{
    int n;
    cout << "Enter terms:";
    cin >> n;
    Series s;
    s.display(n);
    s.displayResult();
    getch();
    return 0;
}