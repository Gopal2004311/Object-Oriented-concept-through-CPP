/*4. Create a C++ class Integer that contains one integer data member. Overload following
binary operators (+,-,*,/)*/
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class Integer
{
    int n;
public:
    Integer() { ; }
    Integer(int num) { n = num; }
    //using friend keyword we need to accept two object as a argument
    friend Integer operator+(Integer& number, Integer& number1)
    {
        Integer ob1;
        ob1.n = number.n + number1.n;
        return ob1;
    }
    friend Integer operator-(Integer& number, Integer& number1)
    {
        Integer ob1;
        ob1.n = number.n - number1.n;
        return ob1;
    }

    //without using friend function we need to pass only one object as a argument
    //second is refer itself
    Integer operator*(Integer& number1)
    {
        Integer ob1;
        ob1.n = n * number1.n;
        return ob1;
    }
    Integer operator/(Integer& number1)
    {
        Integer ob1;
        ob1.n = n / number1.n;
        return ob1;
    }

    //extraction operator overloaded here to print an object
    friend ostream& operator<<(ostream& print, Integer& ob)
    {
        print << ob.n;
        return print;
    }
};

int main()
{
    int num1, num2;
    cout << "Enter two numbers:";
    cin >> num1 >> num2;
    Integer n1(num1), n2(num2), add, mult, div, sub;
    add = n2 + n1;
    mult = n2 * n1;
    div = n2 / n1;
    sub = n2 - n1;
    cout << "Addition:" << add << endl;
    cout << "Multiplication:" << mult << endl;
    cout << "Division:" << div << endl;
    cout << "Subtraction:" << sub << endl;
    getch();
    return 0;
}