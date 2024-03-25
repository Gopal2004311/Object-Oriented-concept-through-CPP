/*3. Create a class MyString which contains a character pointer (using new operator). Write a
C++ program to overload following operators:
i. < To compare length of two strings
ii. != To check equality of two strings
iii. + To concatenate two strings*/
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class MyString
{
    const char* string;
public:
    MyString() { ; }
    MyString(const char* s) { string = s; }
    //using friend keyword
    friend bool operator<(MyString& str1, MyString& str2)
    {
        if (strlen(str1.string) < strlen(str2.string))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    //without using friend keyword
    bool operator!=(MyString& str1)
    {
        if (strcmp(str1.string, string) != 0)
        {
            return true;
        }
        else {
            return false;
        }
    }

    char* operator+(MyString& str)
    {
        char* s;
        int i, j;
        //strcat are not work in my case that reason i have use the below logic to concatenate strings
       // s = strcat(string, str.string);
       // char* s = strcat("hello", " world");
       // cout << s;
        s = new char[strlen(str.string) + strlen(string)];
        int length1 = strlen(string);
        int length2 = strlen(str.string);
        for (i = 0;i < length1;i++)
        {
            s[i] = string[i];
        }
        s[i] = ' ';
        i++;
        int k = 0;
        for (j = i;j < length2 + length1 + 1;j++)
        {
            s[j] = str.string[k];
            k++;
        }
        s[j] = '\0';
        return s;
    }
};
int main()
{
    char str[50], str1[50];
    cout << "Enter first string:";
    cin >> str;
    cout << "Enter second string:";
    cin >> str1;
    //creating an objects of MyString
    MyString string1(str), string2(str1), string3;
    if (string1 < string2)
    {
        cout << str1 << " are greater than " << str << endl;
    }
    else if (string1 != string2) {
        cout << "Both are different" << endl;
    }
    else {
        cout << "Both are equal" << endl;
    }
    char* s = string1 + string2;
    cout << "The concatenation:" << s;
    getch();
    return 0;
}