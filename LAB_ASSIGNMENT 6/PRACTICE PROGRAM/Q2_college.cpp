/*2. Create a class College containing data members as College_Id, College_Name,
Establishment_year, University_Name. Write a C++ program with following member
functions:
i. To accept ‘n’ College details
ii. To display College details of a specified University
iii. To display College details according to a specified establishment year
(Use Array of Object and Function overloading)*/
#include <iostream>
#include <conio.h>
#include<string.h>
using namespace std;
class College
{
private:
    int college_id;
    char college_name[max], university[max];
    int year;
public:
    void accept();
    void display();
    friend void display(College* [], int, int);
    friend void display(College* [], char[], int);
};

void College::accept()
{
    cout << "Enter college id:";
    cin >> college_id;
    cout << "Enter college name:";
    cin >> college_name;
    cout << "Enter University name:";
    cin >> university;
    cout << "Enter Establish year:";
    cin >> year;
}

void College::display()
{
    cout << "The college id:" << college_id << endl;
    cout << "The college name:" << college_name << endl;
    cout << "The college University:" << university << endl;
    cout << "The college Established year:" << year << endl;
}

void display(College* c[], int y, int n)
{
    int temp;
    for (int i = 0;i < n;i++)
    {
        temp = c[i]->year;
        if (temp == y)
        {
            c[i]->display();
        }
    }

}

void display(College* c[], char university[], int n)
{
    char temp[max];
    for (int i = 0;i < n;i++)
    {
        strcpy(temp, c[i]->university);
        if (strcmp(temp, university) == 0)
        {
            c[i]->display();
        }
    }
}
int main()
{
    College* c[max];
    int n, choice, year;
    char name[max];
    do
    {
        cout << "\n--------------------" << endl;
        cout << "1.Accept details.\n2.display college with specified university\n3.display college with specified year" << endl;
        cout << "\nEnter your choice:";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter how many College you have to store:";
            cin >> n;
            for (int i = 0;i < n;i++)
            {
                c[i] = new College();
                c[i]->accept();
                cout << "\n--------------------\n";
            }
            break;
        case 2:
            cout << "Enter university name to display college details:";
            cin >> name;
            display(c, name, n);
            break;
        case 3:
            cout << "Enter college Establish year to get details:";
            cin >> year;
            display(c, year, n);
            break;
        default:
            cout << "Wrong input!!";
            break;
        }
    } while (choice != 4);

    getch();
    return 0;
}