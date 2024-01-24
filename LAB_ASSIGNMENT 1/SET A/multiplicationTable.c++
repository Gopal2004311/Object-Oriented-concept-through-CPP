#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;
    int i, result;
    cout << "---The Multiplication Table---" << endl;
    for (i = 1; i <= 10; i++)
    {
        result = n * i;
        cout << result << endl;
    }
    getch();
    return 0;
}