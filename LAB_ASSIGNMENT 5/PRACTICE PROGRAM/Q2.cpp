/*2. Create two base classes Learning_Info( Roll_No, Stud_Name, Class, Percentage) and
Earning_Info(No_of_hours_worked, Charges_per_hour). Derive a class Earn_Learn_info
from above two classes. Write necessary member functions to accept and display Student
information. Calculate total money earned by the student. (Use constructor in derived
class)*/
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class LearningInfo
{
protected:
    int roll_no;
    char Stud_name[max];
    char Stud_class[max];
    float percentage;
protected:
    void acceptLearn();
    void displayLearn();
};

void LearningInfo::acceptLearn()
{
    cout << "\nEnter Roll no.:";
    cin >> roll_no;
    cout << "\nEnter student name:";
    cin >> Stud_name;
    cout << "\nEnter Student class:";
    cin >> Stud_class;
    cout << "\nEnter Student percentage:";
    cin >> percentage;
}

void LearningInfo::displayLearn()
{
    cout << "\nThe Student roll no:" << roll_no;
    cout << "\nThe Student name:" << Stud_name;
    cout << "\nThe Student class:" << Stud_class;
    cout << "\nThe Student Percentage:" << percentage;
}
class EarningInfo
{
protected:
    int no_of_hours_worked;
    int charges_per_hour;
protected:
    void acceptEarn();
    void displayEarn();
};

void EarningInfo::acceptEarn()
{
    cout << "\nEnter No. of hours worked:";
    cin >> no_of_hours_worked;
    cout << "\nEnter Charges of per hour:";
    cin >> charges_per_hour;
}

void EarningInfo::displayEarn()
{
    cout << "\nThe Working hours:" << no_of_hours_worked;
    cout << "\nThe Charges per hour:" << charges_per_hour;
}
class EarnLearnInfo :protected LearningInfo, protected EarningInfo
{
public:
    EarnLearnInfo();
    void calculate();
    void display();
};

EarnLearnInfo::EarnLearnInfo()
{
    acceptLearn();
    acceptEarn();
}

void EarnLearnInfo::calculate()
{
    cout << "\nTotal money earn by Student:" << (no_of_hours_worked * charges_per_hour);
}

void EarnLearnInfo::display()
{
    displayLearn();
    displayEarn();
}
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