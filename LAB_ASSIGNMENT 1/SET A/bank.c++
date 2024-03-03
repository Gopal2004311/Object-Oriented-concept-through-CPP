#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int acc;
    char name[50];
    char address[50];
    long int contact;
    float balance;
    cout << "Enter Account number:";
    cin >> acc;
    cout << "Enter Account name:";
    cin >> name;
    cout << "Enter Account address:";
    cin >> address;
    cout << "Enter Account contact:";
    cin >> contact;
    cout << "Enter Account balance:" << endl;
    cin >> balance;

    cout << "The account details are--" << endl;
    cout << "Account number:" << acc << endl;
    cout << "Account name:" << name << endl;
    cout << "Account address:" << address << endl;
    cout << "Account contact:" << contact << endl;
    cout << "Account balance:" << balance << endl;

    cout << "Enter deposit amount:";
    int d;
    cin >> d;

    balance = balance + d;
    cout << "New Account balance:" << balance << endl;
    getch();
    return 0;
}