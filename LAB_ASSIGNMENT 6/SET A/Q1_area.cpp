/*1. Write a C++ program to calculate area of cone, sphere and circle by using function
overloading.*/
//area of circle=pi*r*r
//area of sphere=4*pi*r*r
//area of cone=pi*r*(r+l)
#include <iostream>
#include <conio.h>
#include <string.h>
#define pi 3.14
using namespace std;
class Area
{
public:
    inline float areaOfCircle(float radius)
    {
        return (pi * (radius * radius));
    }

    inline float area(float radius)
    {
        return (4 * pi * (radius * radius));
    }

    inline float area(float radius, float length)
    {
        return pi * radius * (radius * length);
    }
};
int main()
{
    Area a;
    cout << "The area of circle =" << a.areaOfCircle(5.6) << endl;
    cout << "The area of sphere =" << a.area(4.5) << endl;
    cout << "The area of cone = " << a.area(6.4, 8.9) << endl;
    getch();
    return 0;
}