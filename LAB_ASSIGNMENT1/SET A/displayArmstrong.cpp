#include <iostream>
#include <conio.h>
using namespace std;
class Armstrong
{
public:
    int start, end;

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
        int d, i;
        int sum = 0, count = 0, result = 1;
        int temp, temp1;
        cout << "Total armstrong numbers within " << start << " to " << end << " is " << endl;
        for (i = start; i <= end; i++)
        {
            temp = i, temp1 = i;
            sum = 0;
            while (temp > 0)
            {
                d = temp % 10;
                count++;
                temp = temp / 10;
            }
            while (temp1 > 0)
            {
                d = temp1 % 10;
                for (int i = 1; i <= count; i++)
                {
                    result = result * d;
                }
                sum += result;
                result = 1;
                temp1 = temp1 / 10;
            }
            count = 0;
            if (i == sum)
            {
                cout << "\t" << i;
            }
        }
    }
};
int main()
{
    Armstrong a;
    a.getValue();
    a.displayArmstrong();
    getch();
    return 0;
}
