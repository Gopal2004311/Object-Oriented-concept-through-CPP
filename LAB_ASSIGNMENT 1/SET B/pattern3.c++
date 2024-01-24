/*2. Write a C++ program to print the followingpattern
 *
 * *
 * * *
 * * * **/

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i, j, k;
    cout << "Enter size of pattern:";
    int n;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (k = 0; k < 78; k++)
        {
            cout << "\t*";
        }

        cout << "\n";
    }
    getch();
    return 0;
}