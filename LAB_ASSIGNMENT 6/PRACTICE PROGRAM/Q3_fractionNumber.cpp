/*3. Create a class Fraction containing data members as Numerator and Denominator. Write
a C++ program to overload operators ++, -- and * to increment, decrement a Fraction and
multiply two Fraction respectively. (Use constructor to initialize values of an object)*/
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class Fraction
{
protected:
    float numerator;
    float denominator;
public:
    /*Fraction() { ; }
    Fraction(float n, float d)
    {
        numerator = n;
        denominator = d;
    }*/
    //accepting values from user using >>operator overloading
    friend istream& operator>>(istream& input, Fraction& f)
    {
        cout << "Enter Numerator:";
        input >> f.numerator;
        cout << "Enter Denominator:";
        input >> f.denominator;
        return input;
    }

    //printing the object using <<operator overloading
    friend ostream& operator<<(ostream& out, Fraction& f)
    {
        out << f.denominator << " " << f.numerator << endl;
        return out;
    }
    //using friend keyword
    friend void operator++(Fraction& f)
    {
        ++f.denominator;
        ++f.numerator;
    }

    friend void operator--(Fraction& f)
    {
        --f.denominator;
        --f.numerator;
    }

    //without using friend keyword
    Fraction operator*(Fraction& f2)
    {
        Fraction f;
        f.denominator = denominator * f2.denominator;
        f.numerator = numerator * f2.numerator;
        return f;
    }
    //above function using friend keyword
    // friend Fraction operator*(Fraction& f1, Fraction& f2)
    // {
    //     Fraction f;
    //     f.denominator = f1.denominator * f2.denominator;
    //     f.numerator = f1.numerator * f2.numerator;
    //     return f;
    // }
};
int main()
{
    Fraction f, f1, f2;
    cin >> f;
    cin >> f1;
    cout << "The original f values d and n are =" << f << endl;
    ++f;
    cout << "After incrementing value of f are=" << f << endl;
    cout << "The original f1 values d and n are =" << f1 << endl;
    --f1;
    cout << "After decrementing values of f1 are=" << f1 << endl;
    f2 = f * f1;
    cout << "After multiplying values of f and f1 are =" << f2 << endl;
    getch();
    return 0;
}