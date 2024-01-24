#include <iostream>
#include <conio.h>
#include <string.h>
#define MAX 50
using namespace std;
class Employee
{
public:
    int emp_id;
    char name[50];
    char department[50];
    char date[10];
    float salary;

public:
    void Employee1(int, char[], char[], char[], float);
    void display();
};

void Employee::Employee1(int id, char name[], char dept[], char date[], float salary)
{
    this->emp_id = id;
    strcpy(this->name, name);
    strcpy(this->department, dept);
    strcpy(this->date, date);
    this->salary = salary;
}

void Employee::display()
{
    cout << "Employee id:" << this->emp_id << endl;
    cout << "Employee name:" << this->name << endl;
    cout << "Employee department:" << this->department << endl;
    cout << "Employee date of joining:" << this->date << endl;
    cout << "Employee salary:" << this->salary << endl;
}
int main()
{
    int n;
    cout << "How many employee want to store:";
    cin >> n;
    int emp_id;
    char name[50];
    char department[50];
    char date[10];
    float salary;
    Employee emp[MAX];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " employee id:";
        cin >> emp_id;
        cout << "Enter " << i + 1 << " employee name:";
        cin >> name;
        cout << "Enter " << i + 1 << " employee department:";
        cin >> department;
        cout << "Enter " << i + 1 << " employee date(dd/mm/yyyy):";
        cin >> date;
        cout << "Enter " << i + 1 << " employee salary:";
        cin >> salary;
        emp[i].Employee1(emp_id, name, department, date, salary);
    }
    cout << "\n--------------------------\n";
    for (int i = 0; i < n; i++)
    {
        emp[i].display();
    }
    getch();
    return 0;
}
