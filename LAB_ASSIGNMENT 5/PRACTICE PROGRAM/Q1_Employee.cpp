/*1. Create a base class Employee(emp code, emp name). Derive the classes
Manager(designation, club_dues), Scientist(dept name, publications) and Labourer from
Employee class. Write a C++ menu driven program
i. to accept the details of ‘n’employees
ii. to display the information
iii.to display details of manager with designation as ”GeneralManger”*/
#include "Q1_Employee.h"
int main()
{
    Labourer* l[max];
    int n, choice;
    do
    {
        cout << "----------------------" << endl;
        cout << "1.Accept details\n2.Display Details\n3.Details of general manager\n4.Exit" << endl;
        cout << "-------------------------" << endl;
        cout << "Enter your choice:";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter size of array:";
            cin >> n;
            for (int i = 0;i < n;i++)
            {
                l[i] = new Labourer();
            }
            break;
        case 2:
            cout << "------Details of Employee------" << endl;
            for (int i = 0;i < n;i++)
            {
                l[i]->display();
            }
            break;
        case 3:
            char temp[max];
            char general[max] = "general_manager";
            for (int i = 0;i < n;i++)
            {
                temp[0] = l[i]->getDesignation();
                if (strcmp(general, temp) == 0)
                {
                    l[i]->display();
                }
            }
            break;
        }
    } while (choice != 4);
    getch();
    return 0;
}