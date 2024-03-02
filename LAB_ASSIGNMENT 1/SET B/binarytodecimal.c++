// 4. Write a C++ program to convert decimal number into binary number.
#include <iostream>
#include <conio.h>
using namespace std;
class Binary
{
public:
    void print(int num)
    {
        int i;
        int array[50];
        for (i = 0;num > 0;i++)
        {
            array[i] = num % 2;
            num = num / 2;
        }

        cout << "The binary number :" << endl;
        for (i = i - 1;i >= 0;i--)
            cout << array[i];
    }
};
int main()
{
    Binary b;
    int num;
    cout << "Enter a number:";
    cin >> num;
    b.print(num);
    getch();
    return 0;
}