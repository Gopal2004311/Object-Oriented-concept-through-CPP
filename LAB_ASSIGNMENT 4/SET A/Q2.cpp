/*3. Write a C++ program to create a class‘MyPoint’ with two integer data members as x& y. Define
copy constructor to copy one object to another. (Use Default and parameterized
constructor to initialize the appropriate objects) Write a C++ program to illustrate the use
of above class.
*/
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class MyPoint
{
public:
    int x, y;
public:
    MyPoint(int, int);
    MyPoint();
    MyPoint(MyPoint&);
    void display();

};
void MyPoint::display()
{
    cout << "the values:" << x << "\t" << y << endl;
}
MyPoint::MyPoint()
{
    cout << "Enter two numbers:";
    cin >> x >> y;
}

MyPoint::MyPoint(int a, int b)
{
    x = a;
    y = b;
}

MyPoint::MyPoint(MyPoint& object)
{
    x = object.x;
    y = object.y;
}
int main()
{
    MyPoint object1;//default constructor called
    MyPoint object2(10, 30);//parametrized constructor called
    MyPoint object3(object1);//copy constructor called
    object1.display();
    object2.display();
    object3.display();
    getch();
    return 0;
}