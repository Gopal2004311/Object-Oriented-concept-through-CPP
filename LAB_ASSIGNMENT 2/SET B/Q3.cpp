/*write a c++ program to calculate area and circumference of a circle.
(use default argument ,scope resolution operator and manipulators)*/
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class Circle
{
private:
    double radius;
public:
    double area(double, const double);
    double circumference(const double);
};
double Circle::area(double r, const double pi = 3.14)
{
    radius = r;
    return(pi * radius * radius);
}

double Circle::circumference(const double pi = 3.14)
{
    return(2 * pi * radius);
}
int main()
{
    Circle c;
    double area = c.area(43);
    double cir = c.circumference();
    cout << "the area:" << area << endl;
    cout << "the circum:" << cir << endl;
    return 0;
}