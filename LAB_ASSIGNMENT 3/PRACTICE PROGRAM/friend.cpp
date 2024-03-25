/*3. Write a C++ program to add two float numbers of two different classes using friend
function.*/
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class second;
class first
{
public:
    double a, addition;
public:
    void get()
    {
        cout << "Enter a number:";
        cin >> a;
    }
    friend void add(first&, second&);
};
class second
{
public:
    double b, addition;
public:
    void get()
    {
        cout << "Enter second number:";
        cin >> b;
    }
    friend void add(first&, second&);
};

void add(first& a, second& b)
{
    cout << "Addition of two float numbers:";
    a.addition = (a.a + b.b);
    b.addition = (a.a + b.b);
}
int main()
{
    first f;
    second s;
    f.get();
    s.get();
    add(f, s);
    cout << "Addition of two different class data members:" << endl;
    cout << "in first :" << f.addition << endl;
    cout << "in second :" << s.addition << endl;
    getch();
    return 0;
}