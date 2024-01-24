/*3. Write a C++ program to create a class ‘MyArray’ which contains single dimensional
integer array of given size. Write a member function to display array in ascending order.
(Use Dynamic Constructor to allocate and Destructor to free memory of an object)*/
#include <iostream>
#include <conio.h>
const int MAX = 50;
using namespace std;
class MyArray
{
public:
    int *a;
    int length;

public:
    MyArray(int);
    void display();
    ~MyArray();
};

MyArray::MyArray(int length)
{
    this->length = length;
    this->a = new int[this->length];
    for (int i = 0; i < this->length; i++)
    {
        cout << "Enter " << i + 1 << " element:";
        cin >> this->a[i];
    }

    for (int pass = 1; pass <= this->length; pass++)
    {
        for (int i = 0; i < this->length - pass; i++) // i=0;i<n-pass
        {
            int temp;
            if (this->a[i] > this->a[i + 1])
            {
                temp = this->a[i];
                this->a[i] = this->a[i + 1];
                this->a[i + 1] = temp;
            }
        }
    }
}

MyArray::~MyArray()
{
    delete a;
    cout<<"\ndestructor are called!!";
}

void MyArray::display()
{
    for (int i = 0; i < this->length; i++)
    {
        cout << this->a[i] << "\t";
    }
}
int main()
{
    cout << "Enter size of array do you want with no limit:";
    int n;
    cin >> n;
    MyArray a(n);
    a.display();
    return 0;
}