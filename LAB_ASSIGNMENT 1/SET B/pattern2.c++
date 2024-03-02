/*2. Write a C++ program to print the following pattern
       *
     * *
   * * *
*/
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    cout << "Enter size of pattern:";
    int n, i;
    cin >> n;
    for (i = 0;i < n;i++)
    {
        for (int j = 0;j < n - i - 1;j++)
        {
            cout << "  ";

        }
        for (int j = i;j <= n;j++)
            cout << "*" << "\t";
        cout << endl;
    }
    getch();
    return 0;
}