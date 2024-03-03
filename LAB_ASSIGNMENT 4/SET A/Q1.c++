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
    MyNumber();
    MyNumber(int, int, int);
    void display();
};
MyNumber::MyNumber()
{
    cout << "Default constructor called!" << endl;
    cout << "Enter three numbers:";
    cin >> this->a >> this->b >> this->c;
}

MyNumber::MyNumber(int a, int b, int c)
{
    cout << "parametrized constructor with default value called!" << endl;
    this->a = a;
    this->b = b;
    this->c = c;
}

void MyNumber::display()
{
    this->average = ((this->a + this->b + this->c) / 3);
<<<<<<< HEAD
    cout << "Average:" << this->average << endl;
}
int main()
{
    MyNumber b;
=======
    cout << "Average:" << this->average;
}
int main()
{
>>>>>>> d0af5042db75feed30c3349c618ff23d15bc4996
    cout << "Enter three numbers:";
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    MyNumber a(n1, n2, n3);
<<<<<<< HEAD
    MyNumber c;
=======
>>>>>>> d0af5042db75feed30c3349c618ff23d15bc4996
    a.display();
    b.display();
    c.display();
    getch();
    return 0;
}