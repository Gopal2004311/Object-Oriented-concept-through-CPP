/*2. Create two base classes Learning_Info( Roll_No, Stud_Name, Class, Percentage) and
Earning_Info(No_of_hours_worked, Charges_per_hour). Derive a class Earn_Learn_info
from above two classes. Write necessary member functions to accept and display Student
information. Calculate total money earned by the student. (Use constructor in derived
class)*/
#include "Q2_student.h"
int main()
{
    EarnLearnInfo* s[max];
    int n;
    cout << "Enter how many student record you want to store:";
    cin >> n;
    for (int i = 0;i < n;i++)
    {
        s[i] = new EarnLearnInfo();
    }
    cout << "\n---------------------------" << endl;
    cout << "\nThe Students details are below:" << endl;
    for (int i = 0;i < n;i++)
    {
        cout << "\n-----------------------------" << endl;
        s[i]->display();
        s[i]->calculate();
    }
    getch();
    return 0;
}