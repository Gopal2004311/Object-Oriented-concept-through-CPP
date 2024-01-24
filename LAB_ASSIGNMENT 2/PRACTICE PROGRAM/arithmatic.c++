#include <iostream>
#include <conio.h>
using namespace std;
int operation(int, int);
int main()
{
    int n1, n2;
    cout << "Enter first number:";
    cin >> n1;
    cout << "Enter second number:";
    cin >> n2;
    cout << "The result is: " << operation(n1, n2);
    getch();
    return 0;
}
int operation(int n1, int n2)
{
    int choice;
    cout << "\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division";
    cout << "\nEnter your choice:";
    cin >> choice;
    switch (choice)
    {
    case 1:
        return (n1 + n2);
        break;
    case 2:
        return (n1 - n2);
        break;
    case 3:
        return (n1 * n2);
        break;
    case 4:
        return (n1 / n2);
        break;
    default:
        return 0;
    }
}