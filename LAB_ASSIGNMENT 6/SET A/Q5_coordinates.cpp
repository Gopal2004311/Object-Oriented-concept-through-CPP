/*5. Consider a class Point containing x and y coordinates.Write a C++ program to implement
necessary functions to accept a point, to display a point and to find distance between two
points using operator overloading (-). (Use friend function)*/
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
class Point
{
    double x, y;
public:
    Point() { ; }
    Point(double p1, double p2)
    {
        x = p1;
        y = p2;
    }

    void display()
    {
        cout << "First point:" << x << endl;
        cout << "Second point:" << y << endl;
    }

    double operator-(Point& p)
    {
        double d;
        //d=√((x2 – x1)² + (y2 – y1)²).
        d = sqrt(pow((p.x - x), 2) + pow((p.y - y), 2));
        return d;
    }
};
int main()
{
    double distance, x1, x2, y1, y2;
    cout << "Enter First point x and y axes:";
    cin >> x1 >> y1;
    cout << "Enter second point x and y axes:";
    cin >> x2 >> y2;
    Point p1(x1, y1), p2(x2, y2);
    distance = p2 - p1;
    cout << "The Distance:" << distance << endl;
    getch();
    return 0;
}