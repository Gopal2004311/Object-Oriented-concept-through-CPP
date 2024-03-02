/*1. Write a C++ program to create a class ‘MyNumber’ with three data members of type
integer. Create and initialize the object using default constructor and parameterized
constructor. Also define copy constructor to copy one object to another. Write a C++
program to illustrate the use of above class*/
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class MyNumber
{
public:
    int a, b, c;
public:
    MyNumber();
    MyNumber(int, int, int);
    MyNumber(MyNumber&);
    void display();
};

MyNumber::MyNumber()
{

    cout << "The default constructor called" << endl;
    cout << "Enter three numbers:";
    cin >> a >> b >> c;
}

MyNumber::MyNumber(int x, int y, int z)
{
    cout << "The parametrized constructor called" << endl;
    a = x;
    b = y;
    c = z;
}

MyNumber::MyNumber(MyNumber& copy)
{
    cout << "The Copy constructor called" << endl;
    a = copy.a;
    b = copy.b;
    c = copy.c;
}

void MyNumber::display()
{
    cout << "the values:" << a << "\t" << b << "\t" << c << "\t" << endl;
}
int main()
{
    MyNumber ob1;            //default constructor called
    MyNumber ob2(10, 20, 30);//parametrized constructor called
    MyNumber ob3(ob1);       //copy constructor called
    ob1.display();
    ob2.display();
    ob3.display();
    getch();
    return 0;
}