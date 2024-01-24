// p=(l+w)*2;a=l*w;
#include <iostream>
#include <conio.h>
using namespace std;
int perimeter(int, int);
int area(int, int);
int main()
{
    int length, width;
    cout << "Enter length of rectangle:";
    cin >> length;
    cout << "Enter width of rectangle:";
    cin >> width;
    cout << "The Area of rectangle is " << area(length, width) << endl;
    cout << "The perimeter of rectangle is " << perimeter(length, width) << endl;
    getch();
    return 0;
}
int perimeter(int length, int width)
{
    int p = (length + width) * 2;
    return p;
}
int area(int length, int width)
{
    int a = length * width;
    return a;
}