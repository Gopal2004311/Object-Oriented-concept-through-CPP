#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
class Armstrong
{
public:
    unsigned long int start, end;

public:
    void getValue()
    {
        cout << "Enter start:";
        cin >> start;
        cout << "Enter end:";
        cin >> end;
    }
    void displayArmstrong()
    {
        unsigned long int d, i;
        unsigned long int sum = 0, count = 0;
        unsigned long int temp;
        cout << "Total armstrong numbers within " << start << " to " << end << " is :" << endl;
        for (i = start; i <= end; i++)
        {
            temp = i;
            sum = 0;
            while (temp)
            {
                d = temp % 10;
                count++;
                temp = temp / 10;
            }
            temp = i;
            while (temp)
            {
                d = temp % 10;
                sum += pow(d, count);
                temp = temp / 10;
            }
            count = 0;
            if (i == sum)
            {
                cout << "\n" << i;
            }
        }
    }
};
int main()
{
    Armstrong a;
    a.getValue();//a.start=10,a.end=2000;
    a.displayArmstrong();
    getch();
    return 0;
}
