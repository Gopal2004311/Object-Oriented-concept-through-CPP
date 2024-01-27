// p=(l+w)*2;a=l*w;
#include <iostream>
#include <conio.h>
using namespace std;
class Rectangle
{
public:
    int length, width;
public:
    void getValue()
    {
        cout << "Enter length of rectangle:";
        cin >> length;
        cout << "Enter width of rectangle:";
        cin >> width;
    }
    int perimeter()
    {
        int p = (length + width) * 2;
        return p;
    }
    int area()
    {
        int a = length * width;
        return a;
    }
};

int main()
{
    Rectangle r;
    r.getValue();
    cout << "The Area of rectangle is " << r.area() << endl;
    cout << "The perimeter of rectangle is " << r.perimeter() << endl;
    getch();
    return 0;
}
