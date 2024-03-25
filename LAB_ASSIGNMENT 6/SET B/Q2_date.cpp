/*2. Create a class Date with members as dd, mm, yyyy. Write a C++ program for overloading
operators >> and <<to accept and display aDate.*/
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class Date
{
protected:
    int dd, yyyy;
    char mm[20];
public:

    friend istream& operator>>(istream& input, Date& date)
    {
        char month[12][20] = {
        "january",
        "february",
        "march",
        "april",
        "may",
        "june",
        "july",
        "august",
        "september",
        "october",
        "november",
        "december"
        };
        int d, m, y;
        cout << "Enter day(number):";
        input >> d;
        cout << "Enter month(number):";
        input >> m;
        cout << "Enter year(number):";
        input >> y;
        if (d <= 31 && d > 0)
        {
            date.dd = d;
        }
        else {
            date.dd = 0;
            cout << "Invalid day value!!" << endl;
        }
        if (m > 0 && m <= 12)
        {
            strcpy(date.mm, month[m - 1]);
        }
        else {
            date.mm[0] = '\0';
            cout << "Invalid month value!!" << endl;
        }
        date.yyyy = y;
        return input;
    }

    friend ostream& operator<<(ostream& print, Date& date)
    {
        if (date.dd != 0 && date.yyyy != 0 && date.mm[0] != '\0')
        {
            print << "The date:" << date.dd << "-" << date.mm << "-" << date.yyyy;
        }
        else {
            print << "Date does not constructed!!";
        }
        return print;
    }

};
int main()
{
    Date data;
    cin >> data;
    cout << data;
    getch();
    return 0;
}