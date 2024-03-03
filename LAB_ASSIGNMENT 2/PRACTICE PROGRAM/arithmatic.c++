#include <iostream>
#include <conio.h>
using namespace std;
class Operation
{
public:
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
};
int main()
{
    Operation n;
    int n1, n2;
    do
    {
        cout << "Enter first number:";
        cin >> n1;
        cout << "Enter second number:";
        cin >> n2;
        cout << "The result is: " << n.operation(n1, n2);
    } while (n1 > 0 && n2 > 0);
    getch();
    return 0;
}
