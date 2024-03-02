/*1. Design two base classes Personnel (name, address, email-id, birth date) and Academic
(marks in tenth,marks in twelth,class obtained).Derive a classBio-data from both these
classes. Write a C++ program to prepare a bio-data of a student having Personnel and
Academic information.*/
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
struct marks
{
    int mark;
    char subject[max];
};
class Personnel
{
protected:
    char name[max];
    char adr[max];
    char email[max];
    char mobile[10];
protected:
    void acceptPerson();
    void displayPerson();
};

void Personnel::acceptPerson()
{
    cout << "----Student details----" << endl;
    cout << "Enter full name(saperate by underscore):";
    cin >> name;
    cout << "Enter Address:";
    cin >> adr;
    cout << "Enter email address:";
    cin >> email;
    cout << "Enter mobile no.:";
    cin >> mobile;
    cout << "---------------------------" << endl;
}

void Personnel::displayPerson()
{
    int n;
    cout << "-----Personal details-----" << endl;
    n = ((strlen(name) / 2) - 2);
    for (int i = 0;i < n;i++)
        cout << " ";
    cout << "name";
    for (int i = 0;i < n;i++)
        cout << " ";
    cout << "|";
    n = ((strlen(adr) / 2) - 3);
    for (int i = 0;i < n;i++)
        cout << " ";
    cout << "Address";
    n = ((strlen(adr) / 2) - 4);
    for (int i = 0;i < n;i++)
        cout << " ";
    cout << "|";
    n = ((strlen(email) / 2) - 3);
    for (int i = 0;i < n;i++)
        cout << " ";
    cout << "Email";
    n = ((strlen(email) / 2) - 2);
    for (int i = 0;i < n;i++)
        cout << " ";
    cout << "|";
    n = ((strlen(mobile) / 2) - 5);
    for (int i = 0;i < n;i++)
        cout << " ";
    cout << "mobile no.";
    for (int i = 0;i < n;i++)
        cout << " ";
    cout << "|" << endl;
    cout << name << "|" << adr << "|" << email << "|" << mobile << "|" << endl;
    cout << "-----------next--------------" << endl;
}

class Academic
{
protected:
    marks tenthMarks[9];
    marks twelthMarks[max];
    int classObtained;
    int no_of_subjects;
protected:
    void acceptTenthMarks();
    void acceptTwelthMarks();
    void displayMarks();
    int getMaxLengthTenth();
    int getMaxLengthTwelth();

};

void Academic::acceptTenthMarks()
{
    cout << "Enter tenth class subject name and there marks:" << endl;
    for (int i = 0;i < 9;i++)
    {
        cout << "\nEnter " << i + 1 << " subject name and mark:";
        cin >> tenthMarks[i].subject >> tenthMarks[i].mark;
    }
    cout << "----------next----------" << endl;
}

void Academic::acceptTwelthMarks()
{
    cout << "Enter Twelth class subject name and there marks:" << endl;
    cout << "How many subject in twelth:";
    cin >> no_of_subjects;
    for (int i = 0;i < no_of_subjects;i++)
    {
        cout << "\nEnter " << i + 1 << " subject name and marks:";
        cin >> twelthMarks[i].subject >> twelthMarks[i].mark;
    }
    cout << "------------next----------" << endl;
}

void Academic::displayMarks()
{
    cout << "-----Academic details-----" << endl;
    cout << "----10th marks----" << endl;
    cout << "Subject\t\t";
    cout << "Marks" << endl;
    int lengthTenth = getMaxLengthTenth();
    int lengthTwelth = getMaxLengthTwelth();
    for (int i = 0;i < 9;i++)
    {
        cout << tenthMarks[i].subject;
        for (int i = 0;i < lengthTenth;i++)
        {
            cout << " ";
        }
        cout << tenthMarks[i].mark << endl;
    }
    cout << "----12th marks----" << endl;
    cout << "Subject\t\t";
    cout << "Marks" << endl;
    for (int i = 0;i < no_of_subjects;i++)
    {
        cout << twelthMarks[i].subject;
        for (int i = 0;i < lengthTwelth;i++)
        {
            cout << " ";
        }
        cout << twelthMarks[i].mark << endl;
    }
    cout << "-----------End---------------" << endl;
}

int Academic::getMaxLengthTenth()
{
    int length = strlen(tenthMarks[0].subject);
    int n;
    for (int i = 0;i < 9;i++)
    {
        n = strlen(tenthMarks[i].subject);
        if (n > length)
        {
            length = n;
        }
    }
    return length;
}
int Academic::getMaxLengthTwelth()
{
    int length = strlen(twelthMarks[0].subject);
    int n;
    for (int i = 0;i < 9;i++)
    {
        n = strlen(twelthMarks[i].subject);
        if (n > length)
        {
            length = n;
        }
    }
    return length;
}

class BioData :public Personnel, public Academic
{
public:
    BioData();
    void displayBioData();
};

BioData::BioData()
{
    acceptPerson();
    acceptTenthMarks();
    acceptTwelthMarks();
}

void BioData::displayBioData()
{
    cout << "**********Student Bio-Data**********" << endl;
    displayPerson();
    displayMarks();
}

int main()
{
    BioData s;
    s.displayBioData();
    getch();
    return 0;
}