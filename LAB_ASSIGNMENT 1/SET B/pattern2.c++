/*2. Write a C++ program to print the following pattern
       *
     * *
   * * *
*/
#include <iostream>
#include <conio.h>
using namespace std;
class Pattern
{
public:
    void display()
    {
        cout << "Enter size of pattern:";
        int n;
        cin >> n;
        for (int i = n; i >= 0; i--)
        {
            for (int j = 0; j < i; j++)
            {
                cout << "  ";

            }
            for (int j = i;j <= n;j++)
                cout << "*" << "\t";
            cout << endl;
        }
    }
};
int main()
{
    Pattern p;
    p.display();
    getch();
    return 0;
}