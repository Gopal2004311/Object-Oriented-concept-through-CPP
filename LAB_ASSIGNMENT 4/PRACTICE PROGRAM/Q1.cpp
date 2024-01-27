/*1. Write a C++ program to create a class ‘MyNumber’ with three data members of type
integer. Create and initialize the object using default constructor and parameterized
constructor. Also define copy constructor to copy one object to another. Write a C++
program to illustrate the use of above class*/
#include <iostream>
#include <conio.h>
using namespace std;
class Default
{
public:
    int a, b, c;

public:
    Default(int, int, int);
    void display();
};
class MyNumber
{
public:
    int a, b, c;

public:
    MyNumber(int, int, int);
    MyNumber(MyNumber&);
    void display();
};
MyNumber::MyNumber(int a, int b, int c)
{
    this->a = a;
    this->b = b;
    this->c = c;
}
void Default::display()
{
    cout << "The default constructor called value first =" << this->a << endl;
    cout << "The default constructor called value second =" << this->b << endl;
    cout << "The default constructor called value third =" << this->c << endl;
}
Default::Default(int a = 10, int b = 20, int c = 30)
{
    this->a = a;
    this->b = b;
    this->c = c;
}
MyNumber::MyNumber(MyNumber& A)
{
    this->a = A.a;
    this->b = A.b;
    this->c = A.c;
}

void MyNumber::display()
{
    cout << "The parametrized constructor called value first =" << this->a << endl;
    cout << "The parametrized constructor called value second =" << this->b << endl;
    cout << "The parametrized constructor called value third =" << this->c << endl;
}
int main()
{
    Default object1;
    cout << "\n-----------------------------\n";
    cout << "\nThe default constrictor :\n";
    object1.display();
    cout << "\n-----------------------\n";
    MyNumber object2(10, 20, 30);
    cout << "\nThe parametrized constructor:\n";
    object2.display();
    cout << "\n-----------------------\n";
    MyNumber object3(object2);
    cout << "\nThe Copy constructor:\n";
    object3.display();
    cout << "\n-----------------------\n";
    getch();
    return 0;
}