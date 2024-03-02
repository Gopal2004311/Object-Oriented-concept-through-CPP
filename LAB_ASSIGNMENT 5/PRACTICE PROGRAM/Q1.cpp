/*1. Create a base class Employee(emp code, emp name). Derive the classes
Manager(designation, club_dues), Scientist(dept_name, publications) and Labourer from
Employee class. Write a C++ menu driven program
i. to accept the details of ‘n’employees
ii. to display the information
iii.to display details of manager with designation as ”GeneralManger”.*/

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

//Employee is based class that start here
class Employee
{
protected:
    int emp_code;
    char emp_name[max];
protected:
    void acceptEmp();
    void displayEmp();
public:
    char getEmpName();
};

void Employee::acceptEmp()
{
    cout << "Enter employee no:" << endl;
    cin >> emp_code;
    cout << "Enter employee name:" << endl;
    cin >> emp_name;
}

void Employee::displayEmp()
{
    cout << "The Employee no.:" << emp_code << endl;
    cout << "The Employee name:" << emp_name << endl;
}

char Employee::getEmpName()
{
    return emp_name[0];
}

//manager is derived class of Employee,that are start here
class Manager
{
    //Manager(designation, club_dues)
protected:
    int club_dues;
    char designation[max];
protected:
    void getManager();
    void displayManager();
public:
    char getManagerDes();
};

void Manager::getManager()
{
    cout << "Enter Employee designation:";
    cin >> designation;
    cout << "Enter Employee Club dues:";
    cin >> club_dues;
}

void Manager::displayManager()
{
    cout << "The Employee designation:" << designation << endl;
    cout << "The Employee club dues:" << club_dues << endl;
}

char Manager::getManagerDes()
{
    return designation[0];
}

//Scientist class start here,scientist is a derived class of Employee

class Scientist :protected Employee
{
    //Scientist(dept_name, publications)

protected:
    char dept_name[max];
    char publication[max];
protected:
    void getScientist();
    void displayScientist();
public:
    char getDept();
    char getPublication();
};

void Scientist::getScientist()
{
    cout << "Enter Employee department name:";
    cin >> dept_name;
    cout << "Enter Publication:";
    cin >> publication;
}

void Scientist::displayScientist()
{
    cout << "The Employee department name:" << dept_name << endl;
    cout << "The publication:" << publication << endl;
}

char Scientist::getDept()
{
    return dept_name[0];
}

char Scientist::getPublication()
{
    return publication[0];
}
//labourer is a derived class of employee that are start here
class Labourer : private Scientist, public Manager
{
protected:
    int l_no;
    char l_name[max];
public:
    void acceptAll();
    void displayAll();
};

void Labourer::acceptAll()
{
    acceptEmp();
    getManager();
    getScientist();
}

void Labourer::displayAll()
{
    displayEmp();
    displayManager();
    displayScientist();
}

int main()
{
    /*i. to accept the details of ‘n’employees
     ii. to display the information
     iii.to display details of manager with designation as ”GeneralManger”.*/
    Labourer emp[max];
    int n;
    int choice;
    do
    {
        cout << "\n-------------------------";
        cout << "\n 1.Accept Employee Details\n2.display details\n3.display details of general manager" << endl;
        cout << "\n---------------------------" << endl;
        cout << "Enter your choice:";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\n Enter how many Employees you want to store:" << endl;
            cin >> n;
            for (int i = 0;i < n;i++)
            {
                emp[i].acceptAll();
                /*------or----
                emp[i].acceptEmp();
                emp[i].acceptManager();
                emp[i].getScientist();*/
            }
            break;
        case 2:
            cout << "\nThe Employee Details are following:" << endl;
            for (int i = 0;i < n;i++)
            {
                emp[i].displayAll();
                /*----------or--------*/
                /*emp[i].displayEmp();
                emp[i].displayManager();
                emp[i].displayScientist();*/
            }
            break;
        case 3:
            char temp[max];
            cout << "\n The details of General Manager:" << endl;
            for (int i = 0;i < n;i++)
            {
                temp[0] = emp[i].getManagerDes();
                if (strcmp(temp, "general_manager") == 0)
                {
                    emp[i].displayAll();
                }
            }
            break;
        case 4:
            cout << "Wrong input!!" << endl;
            break;
        }

    } while (choice != 4);
    getch();
    return 0;
}