/*Set B:
1. Write a C++ program to create a class ‘MyArray’ which contains single dimensional
integer array of given size. Write a member function to display even and odd numbers
from a given array. (Use Dynamic Constructor to allocate and Destructor to free memory
of an object)
*/
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class MyArray
{
public:
    int length;
    int* a;
public:
    MyArray(int len)
    {
        length = len;
        a = new int[length];
        for (int i = 0;i < length;i++)
        {
            cout << "Enter " << i + 1 << " integer value:";
            cin >> a[i];
        }
        cout << endl;
    }

    void display()
    {
        cout << "The array is:" << endl;
        for (int i = 0;i < length;i++)
        {
            cout << a[i] << "\t";
        }
    }
    ~MyArray()
    {
        delete a;
    }
};
int main()
{
    int n;
    cout << "Enter length of array:";
    cin >> n;
    MyArray my(n);
    my.display();
    getch();
    return 0;
}
