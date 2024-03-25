/*3. Write a C++ program to create a class Integer. Write a C++ program to implement
necessary member functions to overload the operator unary pre and post decrement‘--’for an
integer number.*/
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class Integer
{
public:
    int n;
    Integer() { ; }
    Integer(int a)
    {
        n = a;
    }
    void operator--(int n)
    {
        this->n = --n;
    }
};

int main()
{
    Integer n1(20);
    cout << "Before decrement value:" << n1.n << endl;
    --n1.n;
    cout << "The After decrement value:" << n1.n << endl;
    getch();
    return 0;
}