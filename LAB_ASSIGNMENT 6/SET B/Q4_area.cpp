/*4. Create a base class Shape. Derive three different classes Circle, Rectangle and Triangle
from Shape class. Write a C++ program to calculate area of Circle, Rectangle and
Triangle. (Use pure virtual function).*/
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
const double pi = 3.14;
class Shape
{
public:
    virtual inline float areaOfCircle(float) = 0;
    virtual inline float areaOfRect(float, float) = 0;
    virtual inline float areaOfTri(float, float, float) = 0;
};

class Circle : public Shape
{
public:
    inline float areaOfCircle(float r)
    {
        return (pi * r * r);
    }
    inline float areaOfRect(float l, float b) { cout << l << b; return 1; }
    inline  float areaOfTri(float l, float b, float h) { cout << l << b << h; return 1; }
};

class Rectangle :public Shape {
public:
    inline float areaOfRect(float l, float b)
    {
        return (l * b);
    }
    inline float areaOfCircle(float r) { cout << r; return 1; }
    inline  float areaOfTri(float l, float b, float h) { cout << l << b << h; return 1; }
};

class Triangle :public Shape
{
public:
    inline  float areaOfTri(float b, float h)
    {
        return (1 / 2 * b * h);
    }
    inline float areaOfCircle(float r) { cout << r; return 1; }
    inline float areaOfRect(float l, float b) { cout << l << b; return 1; }
};


int main()
{
    Rectangle r;
    Circle c;
    Triangle t;
    cout << "The area of rectangle:" << r.areaOfRect(50, 30) << endl;
    cout << "The Area of Circle:" << c.areaOfCircle(20) << endl;
    cout << "The Area of Triangle:" << t.areaOfTri(20, 10, 15) << endl;
    getch();
    return 0;
}