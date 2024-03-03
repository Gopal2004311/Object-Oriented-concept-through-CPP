/*1. Write a C++ program to print the following pattern
  *
 * *
* * *
*/

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class Pattern
{
private:
    int n;
public:
    void print(int);
};
void Pattern::print(int num)
{
    n = num;
    int k;
    for (int i = 1; i <= n; ++i, k = 0)
    {
        for (int j = 1;j <= n - i;++j)
        {
            cout << "  ";
        }

        while (k != 2 * i - 1)
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }

}
int main()
{
    Pattern p;
    // int n1;
    // cout << "Enter size of pattern:";
    // cin >> n1;
    p.print(10);
    getch();
    return 0;
}