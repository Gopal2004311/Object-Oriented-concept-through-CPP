#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n1, n2;
    cout << "Enter first number:";
    cin >> n1;
    cout << "Enter second number:";
    cin >> n2;
    int choice;
    do
    {
        cout << "\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division";
        cout << "\n---------------------\n";
        cout << "Enter your choice:";
        cin >> choice;
        int result;
        switch (choice)
        {
        case 1:
            result = n1 + n2;
            cout << "Addition of " << n1 << " and " << n2 << " is " << result;
            break;
        case 2:
            result = n1 - n2;
            cout << "Subtraction of " << n1 << " and " << n2 << " is " << result;
            break;
        case 3:
            result = n1 * n2;
            cout << "Multiplication of " << n1 << " and " << n2 << " is " << result;
            break;
        case 4:
            result = n1 / n2;
            cout << "Division of " << n1 << " and " << n2 << " is " << result;
            break;
        }
        cout << "\n---------------------\n";
    } while (choice != 5);
    getch();
    return 0;
}