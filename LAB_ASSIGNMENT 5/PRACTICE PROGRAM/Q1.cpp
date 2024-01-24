/*1. Create a base class Employee(emp code, emp name). Derive the classes
Manager(designation, club_dues), Scientist(dept_name, publications) and Labourer from
Employee class. Write a C++ menu driven program
i. to accept the details of ‘n’employees
ii. to display the information
iii.to display details of manager with designation as ”GeneralManger”.*/

#include <iostream>
#include <conio.h>
#include <string.h>
const int MAX = 50;
using namespace std;
class Employee
{
public:
    int emp_code;
    char emp_name[MAX];

public:
    void acceptEmployee(char[], int);
    void displayEmployee();
};

void Employee::displayEmployee()
{
    cout << "Employee no:" << this->emp_code << endl;
    cout << "Employee name:" << this->emp_name << endl;
}
void Employee::acceptEmployee(char emp_name[], int emp_code)
{
    strcpy(this->emp_name, emp_name);
    this->emp_code = emp_code;
}
class Manager : public Employee
{
protected:
    char designation[MAX];
    int club_dues;

public:
    void acceptManager(char[], int);
    void displayManager();
    char getDes();
};

char Manager::getDes()
{
    return this->designation[0];
}
void Manager::displayManager()
{
    cout << "Employee designation:" << this->designation << endl;
    cout << "Employee club dues:" << this->club_dues << endl;
}
void Manager::acceptManager(char designation[], int club_dues)
{
    strcpy(this->designation, designation);
    this->club_dues = club_dues;
}
class Scientist : public Employee
{
protected:
    char dept_name[MAX];
    char publications[MAX];

public:
    void acceptScientist(char[], char[]);
    void displayScientist();
};

void Scientist::displayScientist()
{
    cout << "Employee department name:" << this->dept_name << endl;
    cout << "publication:" << this->publications << endl;
}
void Scientist::acceptScientist(char dept_name[], char publications[])
{
    strcpy(this->dept_name, dept_name);
    strcpy(this->publications, publications);
}
class Labourer : public Employee, public Scientist, public Manager
{
protected:
    int Labourer_no;
    char Labourer_name[MAX];

public:
    Labourer(int, char[], char[], char[], int, char[], char[], int);
    void display();
    void displayLabour();
};

Labourer::Labourer(int Labourer_no, char Labourer_name[], char dept_name[], char publications[], int club_dues, char designation[], char emp_name[], int emp_code)
{
    this->acceptScientist(dept_name, publications);
    this->acceptManager(designation, club_dues);
   // this->acceptEmployee(emp_name, emp_code);
    strcpy(this->Labourer_name, Labourer_name);
    this->Labourer_no = Labourer_no;
}

void Labourer::displayLabour()
{
    cout << "Labour no:" << this->Labourer_no << endl;
    cout << "Labour name:" << this->Labourer_name << endl;
}
void Labourer::display()
{
    this->displayManager();
    this->displayScientist();
   // this->displayEmployee();
    this->displayLabour();
}

int main()
{
    int choice;
    int n;
    Labourer *emp[MAX];
    do
    {
        cout << "\n-------------------------------\n";
        cout << "1.accept employee details\n2.display employee information\n3.display manager with designation as general manager.\n";
        cout << "----------------------------------\n";
        cout << "Enter your choice:";
        cin >> choice;
        int code, c, no;
        char name[MAX], Labourer_name[MAX], des[MAX], pub[MAX], dept[MAX];
        switch (choice)
        {
        case 1:
            cout << "Enter how many employee you want to store:";
            cin >> n;
            /*Employee(emp code, emp name)
            Manager(designation, club_dues)
            Scientist(dept_name, publications)
            int Labourer_no;
            char Labourer_name[MAX];*/
            for (int i = 0; i < n; i++)
            {
                cout << "Enter Employee code:";
                cin >> code;
                cout << "Enter employee name:";
                cin >> name;
                cout << "Enter designation:";
                cin >> des;
                cout << "Enter club dues:";
                cin >> c;
                cout << "Enter department name:";
                cin >> dept;
                cout << "Enter publication:";
                cin >> pub;
                cout << "Enter labour no:";
                cin >> no;
                cout << "Enter labour name:";
                cin >> Labourer_name;

                emp[i] = new Labourer(no, Labourer_name, dept, pub, c, des, name, code);
            }
            break;

        case 2:
            cout << "Employee details!!" << endl;
            for (int i = 0; i < n; i++)
            {
                emp[i]->display();
            }
            cout << "\n---------------------------------\n";
            break;

        case 3:
            cout << "Employee as designation are general manager!!" << endl;
            for (int i = 0; i < n; i++)
            {
                char temp[MAX];
                temp[0] = emp[i]->getDes();
                if (strcmp(temp,"general manager"))
                {
                    emp[i]->display();
                }
            }
            break;
        }
    } while (choice != 4);
    getch();
    return 0;
}