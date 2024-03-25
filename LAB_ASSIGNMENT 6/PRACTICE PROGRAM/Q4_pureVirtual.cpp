/*4. Create a base class Conversion. Derive three different classes Weight (Gram, Kilogram),
Volume(Milliliter, Liter), Currency(Rupees, Paise) from Conversion class. Write a C++
program to perform read,convert and display operations.(UsePure virtual function)*/
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class Conversion
{
public:
    virtual void read(float, float) = 0;
    virtual void convert() = 0;
    virtual void display() = 0;
};

class Weight :public Conversion
{
protected:
    float gram;
    float kilogram;
    float gmToKg, kgToGm;
public:
    void read(float gm, float kg)
    {
        gram = gm;
        kilogram = kg;
    }

    void convert()
    {
        gmToKg = gram / 1000;
        kgToGm = kilogram * 1000;
    }

    void display()
    {
        cout << "The Gram value " << gram << " are in kilogram is: " << gmToKg << endl;
        cout << "The Kilogram value " << kilogram << " are in Gram is: " << kgToGm << endl;
    }
};

class Volume :public Conversion
{
protected:
    float milliliter;
    float liter;
    float mlToL, lToMl;
public:
    void read(float ml, float lt)
    {
        milliliter = ml;
        liter = lt;
    }

    void convert()
    {
        mlToL = milliliter / 1000;
        lToMl = liter * 1000;
    }

    void display()
    {
        cout << "The Milliliter value " << milliliter << " are in liter is: " << mlToL << endl;
        cout << "The Liter value " << liter << " are in Milliliter is: " << lToMl << endl;
    }
};

class Currency :public Conversion
{
protected:
    float rup;
    float paise;
    float rToP, pToR;
public:
    void read(float r, float p)
    {
        rup = r;
        paise = p;
    }

    void convert()
    {
        rToP = rup * 100;
        pToR = paise / 100;
    }

    void display()
    {
        cout << "The Ruppe value " << rup << " are in Paise is: " << rToP << endl;
        cout << "The Paise value " << paise << " are in Rupee is: " << pToR << endl;
    }
};
int main()
{
    Weight w;
    Currency c;
    Volume v;

    w.read(1000, 2);
    w.convert();
    w.display();

    c.read(4, 2500);
    c.convert();
    c.display();

    v.read(2500, 4);
    v.convert();
    v.display();

    getch();
    return 0;
}