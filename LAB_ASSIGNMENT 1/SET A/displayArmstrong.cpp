#include <iostream>
#include <conio.h>
void displayArmstrong(int, int);
using namespace std;
int main()
{
    int start, end;
    cout << "Enter start:";
    cin >> start;
    cout << "Enter end:";
    cin >> end;
    cout << "Total armstrong numbers within " << start << " to " << end << " is " << endl;
    displayArmstrong(start, end);
    getch();
    return 0;
}

void displayArmstrong(int s, int e)
{
    int d,i;
    for (i = s; i <= e; i++)
    {
        int result = 0;
        int temp = i;
        while (i > 0)
        {
            d = i % 10;
            result = result + (d * d * d);
            i = i / 10;
        }

        if (temp == result)
        {
            cout << "\t" << temp;
        }
    }
} 