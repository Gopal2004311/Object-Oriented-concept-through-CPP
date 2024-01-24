/*1. Write a C++ program to create a class Student with data members Roll_No,
Student_Name, Class. Write member functions to accept and display Student information
also display count of students.(Use Static data member and Static member function)*/
#include <iostream>
#include <conio.h>
#include <string.h>
#define MAX 50
int count = 0;
using namespace std;
class Student
{
public:
    static int roll_no;
    static char name[MAX];
    static char class1[MAX];

public:
    Student(int, char[], char[]);
    static void display();
    static void displayCount();
};

Student::Student(int roll_no, char name[], char class1[])
{
    this->roll_no = roll_no;
    strcpy(this->name, name);
    strcpy(this->class1, class1);
    count++;
}

void Student::display()
{
    cout << "Student Roll no.:" << roll_no << endl;
    cout << "Student name:" << name << endl;
    cout << "Student class:" << class1 << endl;
}

void Student::displayCount()
{
    cout << "The total count of student :" << count << endl;
}

int main()
{
    int n;
    Student *s[MAX];
    cout << "Enter size of array:";
    cin >> n;
    int roll_no;
    char name[MAX];
    char class1[MAX];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " student roll no.:";
        cin >> roll_no;
        cout << "Enter " << i + 1 << " student name:";
        cin >> name;
        cout << "Enter " << i + 1 << " student class:";
        cin >> class1;
        s[i] = new Student(roll_no, name, class1);
    }

    for(int i=0;i<n;i++)
    {
        s[i]->display();
    }

    s[0]->displayCount();
    getch();
    return 0;
}