/*1. Write a C++ program to sort integer and float array elements in ascending order by using
function overloading.*/
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

void sort(int a[], int length)
{
    int temp;
    for (int pass = 1;pass <= length;pass++)
    {
        for (int i = 0;i < length - pass;i++)
        {
            if (a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
}
void sort(float a[], int length)
{
    float temp;
    for (int pass = 1;pass <= length;pass++)
    {
        for (int i = 0;i < length - pass;i++)
        {
            if (a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
}

int main()
{
    int a[max], n;
    float b[max];
    cout << "Enter size of array:";
    cin >> n;
    for (int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    cout << "Enter fractional number:";
    for (int i = 0;i < n;i++)
    {
        cin >> b[i];
    }
    sort(a, n);
    sort(b, n);
    cout << "After sorting integer:" << endl;
    for (int i = 0;i < n;i++)
        cout << a[i] << "\t";
    cout << endl;
    cout << "After sorting float:" << endl;
    for (int i = 0;i < n;i++)
        cout << b[i] << "\t";
    getch();
    return 0;
}
