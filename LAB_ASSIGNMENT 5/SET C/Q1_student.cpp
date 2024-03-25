/*1. Create a base class Student(Roll_No, Name, Class) which derives two classes
Internal_Marks(IntM1, IntM2, IntM3, IntM4, IntM5) and External_Marks(ExtM1 ExtM2,
ExtM3, ExtM4, ExtM5). Class Result(T1, T2, T3, T4, T5) inherits both Internal_Marks
and External_Marks classes. (Use Virtual BaseClass)
Write a C++ menu driven program to perform the following functions:
i. To Accept and display student details
ii. Calculate Subject wise total marks obtained.
iii.Check whether student has passed in Internal and External Exam of each subject.
Also check whether he has passed in respective subject or not and display result
accordingly*/
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
struct marks
{
    char subject[max];
    char result;
    int mark;
};
class Student
{
protected:
    int rollNo;
    char name[max], SClass[max];
protected:
    void acceptStudent(int roll, const char* stdName, const char* cls)
    {
        strcpy(name, stdName);
        strcpy(SClass, cls);
        rollNo = roll;
    }
public:
    void displayStudent()
    {
        cout << "\t\t\t----------Student info-----------" << endl;
        cout << "Student Roll no.: " << rollNo << endl;
        cout << "Student Name:     " << name << endl;
        cout << "Student Class:    " << SClass << endl;
    }

};

class External :public virtual Student
{
protected:
    marks* ext;
    int lengthExt;
protected:
    void acceptExt(marks* e, int length)
    {
        lengthExt = length;
        ext = new marks[lengthExt];
        for (int i = 0;i < lengthExt;i++)
        {
            ext[i].mark = e[i].mark;
            strcpy(ext[i].subject, e[i].subject);
        }
    }
public:
    void displayExt()
    {
        for (int i = 0;i < lengthExt;i++)
        {
            cout << ext[i].subject << "\t" << ext[i].mark << endl;
        }
    }
};

class Internal :public virtual Student
{
protected:
    marks* internal;
    int lengthInt;
protected:
    void acceptInternal(marks* inter, int length)
    {

        lengthInt = length;
        internal = new marks[lengthInt];
        for (int i = 0;i < lengthInt;i++)
        {
            internal[i].mark = inter[i].mark;
            strcpy(internal[i].subject, inter[i].subject);
        }
    }
public:
    void displayInternal()
    {
        for (int i = 0;i < lengthInt;i++)
        {
            cout << internal[i].subject << "\t" << internal[i].mark << endl;
        }
    }
};

class Result :public External, public Internal
{
protected:
    const char* grade;
    char intPass, extPass, result;
    float percentage, totalMarks;
    marks* total;
public:
    Result() { ; }
    Result(int roll, const char* name, const char* class1, marks* external, marks* internal, int length)
    {
        acceptExt(external, length);
        acceptInternal(internal, length);
        acceptStudent(roll, name, class1);
    }

    void display()
    {
        displayStudent();
        displayInternal();
        displayExt();
    }

    void calculate()
    {
        //ii. Calculate Subject wise total marks obtained.
        /*Check whether student has passed in Internal and External Exam of each subject.
        Also check whether he has passed in respective subject or not and display result
        accordingly*/

        total = new marks[lengthInt];
        for (int i = 0;i < lengthInt;i++)
        {
            strcpy(total[i].subject, internal[i].subject);
            total[i].mark = internal[i].mark + ext[i].mark;

            if (internal[i].mark >= 12 && internal[i].mark <= 30)
            {
                internal[i].result = 'P';
                if (intPass != 'F')
                    intPass = 'P';
            }
            else
            {
                internal[i].result = 'F';
                intPass = 'F';
            }


            if (ext[i].mark >= 28 && ext[i].mark <= 70)
            {
                ext[i].result = 'P';
                if (extPass != 'F')
                    extPass = 'P';
            }
            else {
                ext[i].result = 'F';
                extPass = 'F';
            }
        }
        for (int i = 0;i < lengthInt;i++)
        {
            if (internal[i].result == 'P' && ext[i].result == 'P')
            {
                total[i].result = 'P';
            }
            else {
                total[i].result = 'F';
            }
        }

        if ((intPass == 'P' && extPass == 'P'))
        {
            result = 'P';
        }
        else {
            result = 'F';

        }

        totalMarks = 0;
        if (result == 'P')
        {
            for (int i = 0;i < lengthInt;i++)
            {
                totalMarks += total[i].mark;
            }
            percentage = totalMarks / lengthInt;

            if (percentage > 90 && percentage <= 100)
                grade = "A+";
            else if (percentage > 80 && percentage <= 90)
                grade = "A";
            else if (percentage > 70 && percentage <= 80)
                grade = "B+";
            else if (percentage > 60 && percentage <= 70)
                grade = "B";
            else if (percentage > 50 && percentage <= 60)
                grade = "C";
            else if (percentage > 40 && percentage <= 50)
                grade = "D";
            else if (percentage >= 35 && percentage <= 40)
                grade = "C#";
        }
    }

    void displayResult()
    {
        cout << "\t\t\t------------Result-------------" << endl;
        cout << "Subject\t\t\t"
            << "Internal Marks\t"
            << "External Marks\t"
            << "Subject Total\t"
            << "Internal Result\t"
            << "External Result\t"
            << "Subject Result\t" << endl;
        cout << "--------------------------------------------------------------------------------------------------------------------" << endl;
        for (int i = 0;i < lengthExt;i++)
        {
            cout << total[i].subject << "\t\t\t"
                << internal[i].mark << "\t"
                << ext[i].mark << "\t"
                << total[i].mark << "\t"
                << internal[i].result << "\t"
                << ext[i].result << "\t"
                << total[i].result << "\t" << endl;
        }
        cout << "--------------------------------------------------------------------------------------------------------------------" << endl;
        if (result == 'P')
        {
            cout << "Percentage:" << percentage << "%" << endl;
            cout << "Grade:     " << grade << endl;
        }
        else {
            cout << "Percentage: - %" << endl;
            cout << "Grade:      F" << endl;
        }
        cout << "--------------------------------------------------------------------------------------------------------------------" << endl;
    }
};
int main()
{
    int mark1, len, roll, flag = 0;
    char name[max], cls[max], sub[max];
    cout << "Enter How many student details you want to store:";
    cin >> len;

    marks* internal, * external;
    Result* student[len];

    for (int i = 0;i < len;i++)
    {
        cout << "Enter student roll no.:";
        cin >> roll;
        cout << "Enter student name:";
        cin >> name;
        cout << "Enter student class:";
        cin >> cls;
        cout << "How many subject in class:";
        cin >> mark1;

        internal = new marks[mark1];
        external = new marks[mark1];

        for (int i = 0; i < mark1; i++)
        {
            cout << "Enter " << i + 1 << " subject name and internal and external marks:";
            cin >> sub >> internal[i].mark >> external[i].mark;
            strcpy(internal[i].subject, sub);
            strcpy(external[i].subject, sub);
        }

        for (int i = 0;i < mark1;i++)
        {
            if ((internal[i].mark >= 0 && internal[i].mark <= 30) && (external[i].mark >= 0 && external[i].mark <= 70))
                flag = 1;
            else
            {
                flag = 0;
                --i;
                cerr << "Sorry!you have entered wrong subject details,";
                cerr << "therfore the object could not created!!" << endl;
                break;
            }
        }

        if (flag == 1)
        {
            student[i] = new Result(roll, name, cls, external, internal, mark1);
        }
        delete internal;
        delete external;
    }

    for (int i = 0;i < len;i++)
    {
        student[i]->displayStudent();
        student[i]->calculate();
        student[i]->displayResult();
    }
    getch();
    return 0;
}