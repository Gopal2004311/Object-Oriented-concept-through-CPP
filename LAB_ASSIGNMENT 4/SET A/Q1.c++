/*1. Write a C++ program to create a class ‘MyNumber’ with three data members of type
integer. Create and initialize the object using default constructor, parameterized
constructor and parameterized constructor with default value. Write a member function to
display average of given three numbers for all objects.*/
#include <iostream>
#include <conio.h>
using namespace std;
class MyNumber
{
public:
    int a, b, c, average = 0;

public:
    MyNumber(int, int, int);
    void display();
};
MyNumber::MyNumber(int a, int b, int c)
{
    this->a = a;
    this->b = b;
    this->c = c;
}

void MyNumber::display()
{
    this->average = ((this->a + this->b + this->c) / 3);
    cout << "Average:" << this->average;
}
int main()
{
    cout << "Enter three numbers:";
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    MyNumber a(n1, n2, n3);
    a.display();
    getch();
    return 0;
}