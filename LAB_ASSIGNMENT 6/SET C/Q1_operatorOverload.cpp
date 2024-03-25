/*1. Create a class MyString which contains a character pointer (Use new and delete
operator).Write a C++ program to overload following operators:
i. ! To change the case of each alphabet from given string
ii. [] To print a character present at specified index*/
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class MyString
{
protected:
    char* str;
public:
    MyString() { ; }
    MyString(char string[])
    {
        str = new char[strlen(string)];
        strcpy(str, string);
    }

    friend MyString operator!(MyString& str)
    {
        MyString s;
        s.str = new char[strlen(str.str)];
        int length = strlen(str.str), i;
        for (i = 0;i < length;i++)
        {
            if (islower(str.str[i]))
            {
                s.str[i] = toupper(str.str[i]);
            }
            else {
                s.str[i] = tolower(str.str[i]);
            }
        }
        s.str[i] = '\0';
        return s;
    }

    friend void operator||(MyString& s, int n)
    {
        cout << s.str[n];
    }

    friend ostream& operator<<(ostream& output, MyString& str)
    {
        output << str.str;
        return output;
    }
};
int main()
{
    int n;
    char str[max];
    cout << "Enter a string:";
    cin >> str;

    MyString s(str), up;
    cout << "The original string :" << s << endl;
    up = !s;

    cout << "The string after character case flip:" << up << endl;
    cout << "Enter Index number to display character:";
    cin >> n;
    cout << "The character of " << n << " index is : ";
    s || n;

    getch();
    return 0;
}