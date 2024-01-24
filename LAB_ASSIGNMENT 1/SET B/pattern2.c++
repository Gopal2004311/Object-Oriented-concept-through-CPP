/*  *
 **
 ***
 *****
 */
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i, j;
    cout << "Enter size of pattern:";
    int n;
    cin >> n;
    for (i = n; i >= 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            cout << "\t*";
        }
        cout << "\n";
        /*
         *
         **
         ***
         ****
         */
    }
    getch();
    return 0;
}