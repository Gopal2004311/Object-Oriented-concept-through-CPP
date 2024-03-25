/*2. Design a base class Employee (emp-code, name). Derive two classes as Fulltime (daily
rate, number of days, salary) and Part time (number of working hours, hourly rate, salary)
from Employee. Write a C++ menu driven program to:
i.Accept the details of ‘n’ employees and calculate the salary.
ii. Display the details of ‘n’employees.
iii. Search a givenEmployee.*/
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class Employee
{
protected:
    int emp_code;
    char name[max];
protected:
    void acceptEmployee();
    void displayEmployee();
public:
    char getName();
};

void Employee::acceptEmployee()
{
    cout << "Enter Employee code:";
    cin >> emp_code;
    cout << "Enter Employee name:";
    cin >> name;
}

void Employee::displayEmployee()
{
    cout << "\nThe Employee code:" << emp_code << endl;
    cout << "The Employee name:" << name << endl;
}

char Employee::getName()
{
    return name[0];
}
class FullTime :public Employee
{
protected:
    float dailyRate;
    int noOfDays;
    float salary = 0;
public:
    FullTime();
    void calculateSalary();
    void display();
};
FullTime::FullTime()
{
    acceptEmployee();
    cout << "Enter daily rate:";
    cin >> dailyRate;
    cout << "Enter no of days are worked:";
    cin >> noOfDays;
}
void FullTime::display()
{
    displayEmployee();
    cout << "The Employee daily rate:" << dailyRate << endl;
    cout << "The Employee no of days, he has work:" << noOfDays << endl;
    cout << "The salary of Employee:";
    if (salary == 0)
        cout << "" << endl;
    else
        cout << salary << endl;
}
void FullTime::calculateSalary()
{
    salary = (dailyRate * noOfDays);
}
class PartTime :public Employee
{
protected:
    int noOfWorkHours;
    float rate;
    float salary;
public:
    PartTime();
    void calculateSalary();
    void display();
};

PartTime::PartTime()
{
    acceptEmployee();
    cout << "Enter Employee no of working hours:";
    cin >> noOfWorkHours;
    cout << "Enter Employee work rate of per hour:";
    cin >> rate;
}

void PartTime::calculateSalary()
{
    salary = (noOfWorkHours * rate);
}

void PartTime::display()
{
    displayEmployee();
    cout << "The Employee working hours:" << noOfWorkHours << endl;
    cout << "The Employee Work rate per hour:" << rate << endl;
    cout << "The Employee salary";
    if (salary == 0)
        cout << "" << endl;
    else
        cout << salary << endl;
}
int main()
{
    /*i.Accept the details of ‘n’ employees and calculate the salary.
     ii. Display the details of ‘n’employees.
     iii. Search a givenEmployee.*/
    FullTime* empFull[max];
    PartTime* empPart[max];
    int choice, part = 0, full = 0;
    char temp[max], value[max];
    do
    {
        cout << "-------Choices------" << endl;
        cout << "1.Accept details.\n2.Display details.\n3.Search given employee.\n4.Exit" << endl;
        cout << "-----------------------" << endl;
        cout << "Enter your choice:";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter how many part time Employees(if no then enter 0):";
            cin >> part;
            cout << "Enter how many full time Employee(if no then enter 0):";
            cin >> full;
            if (full > 0)
            {
                cout << "-----Enter details of Full time Employee-------" << endl;
                for (int i = 0;i < full;i++)
                {
                    empFull[i] = new FullTime();
                    empFull[i]->calculateSalary();
                }
            }
            else {
                cout << "Oops!You dont have any full time employee....!" << endl;
            }
            if (part > 0)
            {
                cout << "-----Enter details of Part time Employee-------" << endl;
                for (int i = 0;i < part;i++)
                {
                    empPart[i] = new PartTime();
                    empPart[i]->calculateSalary();
                }
            }
            else {
                cout << "Oops!You dont have any part time employee....!" << endl;
            }
            break;
        case 2:
            if (full > 0)
            {
                cout << "-------Full time Employee Details------" << endl;
                for (int i = 0;i < full;i++)
                {
                    cout << i + 1 << " Employee details:" << endl;
                    empFull[i]->display();
                    cout << "------------------------" << endl;
                }
            }
            else {
                cout << "Oops!You dont have any full time employee....!" << endl;
            }
            if (part > 0)
            {
                cout << "-------Part time Employee Details------" << endl;
                for (int i = 0;i < part;i++)
                {
                    cout << i + 1 << " Employee details:" << endl;
                    empPart[i]->display();
                    cout << "------------------------" << endl;
                }
            }
            else {
                cout << "Oops!You dont have any part time employee....!" << endl;
            }
            break;
        case 3:
            char option[max];
            cout << "Enter where are you search? Part or full time:";
            cin >> option;
            if (strcmp(option, "part") == 0 || strcmp(option, "part_time") == 0 || strcmp(option, "part-time") == 0)
            {
                cout << "Enter name of Employee do you want to search in part time:";
                cin >> value;
                for (int i = 0;i < part;i++)
                {
                    temp[0] = empPart[i]->getName();
                    if (strcmp(temp, value) == 0)
                    {
                        empPart[i]->display();
                    }
                }
            }
            else if (strcmp(option, "full") == 0 || strcmp(option, "full_time") == 0 || strcmp(option, "full-time") == 0)
            {
                cout << "Enter name of Employee do you want to search in full time:";
                cin >> value;
                for (int i = 0;i < full;i++)
                {
                    temp[0] = empFull[i]->getName();
                    if (strcmp(temp, value) == 0)
                    {
                        empFull[i]->display();
                    }
                }
            }
            else {
                cout << "Oops!you Enter wrong instruction...!" << endl;
            }
            break;
        default:
            cout << "Wrong choice!!" << endl;
            break;
        }
    } while (choice != 4);
    getch();
    return 0;
}