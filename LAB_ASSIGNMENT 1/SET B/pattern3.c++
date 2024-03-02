/*2. Write a C++ program to print the followingpattern
 *
 * *
 * * *
 * * * **/

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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (int k = 0; k < 78; k++)
        {
            cout << "\t*";
        }

        cout << "\n";
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