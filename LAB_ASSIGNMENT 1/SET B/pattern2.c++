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
    }
};
int main()
{
    Pattern p;
    p.display();
    getch();
    return 0;
}