#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class Employee
{
protected:
    int empCode;
    char name[max];
public:
    void acceptEmployee();
    void displayEmployee();
};

class Manager :public virtual Employee
{
protected:
    char designation[max];
    int club_dues;
public:
    void acceptManager();
    void displayManager();
    char getDesignation();
};

class Scientist :public virtual Employee
{
protected:
    char publication[max];
    char dept_name[max];
public:
    void acceptScientist();
    void displayScientist();
};

class Labourer :public Scientist, public Manager
{
public:
    Labourer();
    void display();
};

void Employee::acceptEmployee()
{
    cout << "Enter emp number:";
    cin >> empCode;
    cout << "Enter emp name:";
    cin >> name;
}

void Employee::displayEmployee()
{
    cout << "The Employee code:" << empCode << endl;
    cout << "The Employee name:" << name << endl;
}

void Manager::acceptManager()
{
    cout << "Enter Employee designation:";
    cin >> designation;
    cout << "Enter Employee Club dues:";
    cin >> club_dues;
}

void Manager::displayManager()
{
    cout << "Employee Designation:" << designation << endl;
    cout << "Employee club dues:" << club_dues << endl;
}

char Manager::getDesignation()
{
    return this->designation[0];
}

void Scientist::acceptScientist()
{
    cout << "Enter Department name:";
    cin >> dept_name;
    cout << "Enter publication:";
    cin >> publication;
}

void Scientist::displayScientist()
{
    cout << "Employee Department name:" << dept_name << endl;
    cout << "Employee Publication:" << publication << endl;
}

Labourer::Labourer()
{
    acceptEmployee();
    acceptManager();
    acceptScientist();
}

void Labourer::display()
{
    displayEmployee();
    displayManager();
    displayScientist();
}