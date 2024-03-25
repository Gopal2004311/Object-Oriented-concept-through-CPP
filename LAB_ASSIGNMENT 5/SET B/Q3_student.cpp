/*3. Create a base class Student(Roll_No, Name) which derives two classes
Academic_Marks(Mark1, Mark2, Mark3) and Extra_Activities_Marks(Marks). Class
Result(Total_Marks, Grade) inherits both Academic_Marks and Extra_Activities_Marks
classes. (Use Virtual BaseClass)
Write a C++ menu driven program to perform the following functions:
i. Build a master table.
ii. Calculate Total_marks and grade*/
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
struct marks
{
    char subject[max];
    double marks;
};
class Student
{
protected:
    int roll_no;
    char name[max];
protected:
    void acceptDetails(int rollNo, const char* studentName)
    {
        roll_no = rollNo;
        strcpy(name, studentName);
    }

    void displayDetails()
    {
        cout << "---------Student Details---------" << endl;
        cout << "Student Roll no.:" << roll_no << endl;
        cout << "Student Name:" << name << endl;
    }

    int getMaxLength(marks array[], int size)
    {
        int Max = strlen(array[0].subject);
        for (int i = 0;i < size;i++)
        {
            int length = strlen(array[i].subject);
            if (length > Max)
                Max = strlen(array[i].subject);
        }
        return Max;
    }
};

class AcademicMarks :public virtual Student
{
protected:
    marks academicMarks[max];
    int sizeMarks;
protected:
    void acceptMarks(marks subjectMarks[], int length)
    {
        sizeMarks = length;
        for (int i = 0;i < length;i++)
        {
            strcpy(academicMarks[i].subject, subjectMarks[i].subject);
            academicMarks[i].marks = subjectMarks[i].marks;
        }
    }

    void displayMarks()
    {
        int Max = getMaxLength(academicMarks, sizeMarks);

        cout << "-----------The Academic Marks-------------" << endl;
        cout << "Subject";
        for (int i = 0;i < Max - 7;i++)
            cout << " ";
        cout << "\t\t";
        cout << "Marks" << endl;
        for (int i = 0;i < sizeMarks;i++)
        {
            int current = Max - strlen(academicMarks[i].subject);
            cout << academicMarks[i].subject;
            for (int i = 0;i < current;i++)
                cout << " ";
            cout << "\t\t";
            cout << academicMarks[i].marks << endl;
        }
    }
};

class ExtraActivity :public virtual Student
{
protected:
    marks extraActMarks[max];
    int sizeMarksAct;
protected:
    void acceptExtraMarks(marks extraActivity[], int length)
    {
        sizeMarksAct = length;
        for (int i = 0;i < length;i++)
        {
            strcpy(extraActMarks[i].subject, extraActivity[i].subject);
            extraActMarks[i].marks = extraActivity[i].marks;
        }
    }

    void displayExtra()
    {
        int Max = getMaxLength(extraActMarks, sizeMarksAct);
        cout << "-----------The Extra Activity Marks-------------" << endl;
        cout << "Subject";
        for (int i = 0;i < Max - 7;i++)
            cout << " ";
        cout << "\t\t";
        cout << "Marks" << endl;
        for (int i = 0;i < sizeMarksAct;i++)
        {
            int current = Max - strlen(extraActMarks[i].subject);
            cout << extraActMarks[i].subject << "\t\t";
            for (int i = 0;i < current;i++)
                cout << " ";
            cout << "\t\t";
            cout << extraActMarks[i].marks << endl;
        }
    }
};

class Result :public AcademicMarks, public ExtraActivity
{
protected:
    char grade;
    double totalAcademic, totalExtra, percentage;
public:
    Result(int rollNo, const char* studentName, marks subjectMarks[], int length1, marks extraActivity[], int length2)
    {
        acceptDetails(rollNo, studentName);
        acceptMarks(subjectMarks, length1);
        acceptExtraMarks(extraActivity, length2);
    }

    void calculate()
    {
        for (int i = 0;i < sizeMarks;i++)
        {
            totalAcademic = totalAcademic + academicMarks[i].marks;
        }

        for (int i = 0;i < sizeMarksAct;i++)
        {
            totalExtra = totalExtra + extraActMarks[i].marks;
        }

        percentage = (totalAcademic / sizeMarks);

        if (percentage > 85 && percentage < 100)
            grade = 'A';
        else if (percentage > 75 && percentage < 85)
            grade = 'B';
        else if (percentage > 60 && percentage < 75)
            grade = 'C';
        else if (percentage > 40 && percentage < 60)
            grade = 'D';
        else if (percentage >= 35 && percentage <= 40)
            grade = 'E';
        else
            grade = 'F';
    }


    void display()
    {
        displayDetails();
        if (sizeMarks > 0)
            displayMarks();
        if (sizeMarksAct > 0)
            displayExtra();
        cout << "-------Result-------" << endl;
        cout << "Total Academic marks:" << totalAcademic << endl;
        cout << "Total Extra Activity Marks:" << totalExtra << endl;
        cout << "Percentage:" << percentage << "%" << endl;
        cout << "Grade:" << grade << endl;
    }

};
int main()
{
    Result* s;
    marks subject[max], Extra[max];
    int lengthAc, lengthExt, rollNo, choice;
    char name[max];

    do {

        cout << "-------------------------" << endl;
        cout << "1.Build a master table.\n2.Calculate marks and grade.\n3.display result.\n4.Exit" << endl;
        cout << "-------------------------" << endl;
        cout << "Enter your choice:";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter Roll no.:";
            cin >> rollNo;
            cout << "Enter Student name:";
            cin >> name;
            cout << "Enter how many subject in academic:";
            cin >> lengthAc;
            cout << "Enter subject details in below:" << endl;

            for (int i = 0;i < lengthAc;i++)
            {
                cout << "Enter " << i + 1 << " subject name and there marks:";
                cin >> subject[i].subject >> subject[i].marks;
            }

            cout << "Enter how many Extra activity are you perform:";
            cin >> lengthExt;
            cout << "Enter Extra activity details in below:" << endl;

            for (int i = 0;i < lengthExt;i++)
            {
                cout << "Enter " << i + 1 << " activity name and there marks:";
                cin >> Extra[i].subject >> Extra[i].marks;
            }

            s = new Result(rollNo, name, subject, lengthAc, Extra, lengthExt);
            break;

        case 2:
            s->calculate();
            cout << "Calculated!!" << endl;
            break;

        case 3:
            s->display();
            break;
        default:
            cout << "Wrong input!!";
            break;
        }
    } while (choice != 4);
    getch();
    return 0;
}