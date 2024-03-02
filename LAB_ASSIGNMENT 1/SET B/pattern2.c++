<<<<<<< HEAD
/*2. Write a C++ program to print the following pattern
       *
     * *
   * * *
*/
=======
>>>>>>> d0af5042db75feed30c3349c618ff23d15bc4996
#include <iostream>
#include <conio.h>
using namespace std;
class Pattern
{
<<<<<<< HEAD
    cout << "Enter size of pattern:";
    int n, i;
    cin >> n;
    for (i = 0;i < n;i++)
    {
        for (int j = 0;j < n - i - 1;j++)
=======
    public:
    void display()
    {
     cout << "Enter size of pattern:";
    int n;
    cin >> n;
    for (int i = n; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
>>>>>>> d0af5042db75feed30c3349c618ff23d15bc4996
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