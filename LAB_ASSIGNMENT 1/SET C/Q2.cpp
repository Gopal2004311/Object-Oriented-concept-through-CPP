/*2. Write a C++ program to calculate following series:
1/1! + 2/2! + 3/3! + …. +n/n!
*/
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class Series
{
private:
    int n, result = 0;
public:
    int generate(int);
private:
    int factorial(int);
};
int Series::factorial(int num)
{
    int fact = 1;
    for (int i = 1;i <= num;i++)
    {
        fact = fact * i;
    }
    return fact;
}
int Series::generate(int num)
{
    n = num;
    for (int i = 1;i <= n;i++)
    {
        if (i < n)
            cout << i << "/" << i << "+";
        else
            cout << i << "/" << i;

        int temp, fact;
        temp = i / i;
        fact = factorial(temp);
        result = result + fact;
    }
    cout << endl;
    return result;
}
int main()
{
    Series s;
    cout << "The series is:" << endl;
    int result = s.generate(50);
    cout << "The result of above series:" << result;
    getch();
    return 0;
}