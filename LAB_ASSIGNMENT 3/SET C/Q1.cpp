/*1. Write a C++ program to calculate multiplication of two integer numbers of two different
classes. (Use friend class)*/
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class Addition1
{
public:
    int a;
public:
    friend class Addition2;
};
class Addition2
{
public:
    int b;
public:
    Addition2(int p, int q)
    {
        b = q;
    }

    friend class Addition1;

};
int main()
{
    int;
    getch();
    return 0;
}