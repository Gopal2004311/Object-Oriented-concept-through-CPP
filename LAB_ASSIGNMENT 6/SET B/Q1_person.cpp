/*1. Create class Person which contains data member as Passport_Id, Person_name,
Nationality,Gender,Date_of_Birth,Date_of_Issue,Date_of_expiry.Write a c++ program to
perform following member functions:
i. Enter details of all persons
ii. Display passport details of one person
iii. Display passport details of all persons
(Use Function overloading and Array of object).*/
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class Person
{
protected:
    int passPortId;
    char personName[max], nationality[max], gender[max];
    char expiryDate[max], issueDate[max], birthDate[max];
public:
    Person()
    {
        cout << "Enter person passport no.:";
        cin >> passPortId;
        cout << "Enter person name:";
        cin >> personName;
        cout << "Enter nationality:";
        cin >> nationality;
        cout << "Enter gender:";
        cin >> gender;
        cout << "Enter birth date:";
        cin >> birthDate;
        cout << "Enter issue date:";
        cin >> issueDate;
        cout << "Enter expiry date:";
        cin >> expiryDate;
    }

    int getId()
    {
        return passPortId;
    }

    void display()
    {
        cout << "Passport id:" << passPortId << endl;
        cout << "Person name:" << personName << endl;
        cout << "Nationality:" << nationality << endl;
        cout << "Gender:" << gender << endl;
        cout << "Birth date:" << birthDate << endl;
        cout << "Issue date:" << issueDate << endl;
        cout << "Expiry date:" << expiryDate << endl;
    }
};
int main()
{
    int n, choice, id;
    cout << "Enter size of array";
    cin >> n;
    Person p[n];
    do
    {
        cout << "-----------------------" << endl;
        cout << "1.display all\n2.display only one\n3.Exit" << endl;
        cout << "------------------------" << endl;
        cout << "Enter your choice:";
        cin >> choice;
        switch (choice)
        {
        case 1:
            for (int i = 0;i < n;i++)
            {
                p[i].display();
            }
            break;
        case 2:
            cout << "Enter passport id :";
            cin >> id;
            for (int i = 0;i < n;i++)
            {
                choice = p[i].getId();
                if (choice == id)
                {
                    p[i].display();
                }
            }
            break;
        }
    } while (choice != 3);

    getch();
    return 0;
}