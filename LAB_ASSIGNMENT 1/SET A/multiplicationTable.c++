#include <iostream>
#include <conio.h>
using namespace std;
class Multiplication
{
public:
    int n;

public:
    void getValue()
    {
        cout << "Enter a number:";
        cin >> n;
    }
<<<<<<< HEAD
   void display(int i = 1)
=======
    void display(int i = 1)
>>>>>>> d0af5042db75feed30c3349c618ff23d15bc4996
    {
        if (i != 11)
        {
            cout << n * i << endl;
            display(i + 1);
        }
    }
};
int main()
{
    Multiplication m;
    m.getValue();
    cout << "---The Multiplication Table---" << endl;
    m.display();
    getch();
    return 0;
}