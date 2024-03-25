#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class String
{
public:
    char s[max];
    String() { ; }
    String(char str[]) {
        strcpy(s, str);
    }
    friend bool operator==(String& str, const char* str1)
    {
        if (strcmp(str.s, str1) == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    char str1[] = "hello";
    String str("hello");


    if (str == str1)
    {
        cout << "true";
    }
    else {
        cout << "false";
    }

    getch();
    return 0;
}