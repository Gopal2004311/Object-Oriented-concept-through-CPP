/*2. Write a C++ program to calculate the average height of all the students of a class. The
number of students and their heights are entered by user. (Use array of objects)*/
#include <iostream>
#include <conio.h>
#include <string.h>
const int MAX = 50;
using namespace std;
class student
{
public:
    float height;
    static float average;
    static int sum;
    static int count;
    char name[MAX];

public:
    student(float, char[]);
    void display();
};

student::student(float height, char name[])
{
    this->height = height;
    strcpy(this->name, name);
    sum = sum + this->height;
    count++;
}

void student::display()
{
    cout << "The name of student:" << this->name << endl;
    cout << "The height of student:" << this->height << endl;
}

int main()
{
    student* s[MAX];
    student::count = 0;
    student::sum = 0;
    int n;
    cout << "Enter how many student you want to store:";
    cin >> n;
    float height;
    char name[MAX];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " student name:";
        cin >> name;
        cout << "Enter " << i + 1 << " student height:";
        cin >> height;
        s[i] = new student(height, name);
    }

    cout << "The student details are:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "---------------------------\n";
        s[i]->display();
    }
    cout << "---------------------------\n";
    student::average = student::sum / student::count;
    cout << "The average:" << student::average;
    getch();
    return 0;
}