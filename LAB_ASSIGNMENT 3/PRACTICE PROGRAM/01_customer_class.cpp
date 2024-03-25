/*1. Write a C++ program to create a class Customer with data members ID, Name, Addr and
Contact_No. Write member functions to accept and display customer information. (Use
scope resolution operator while defining member functions)*/
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class Customer
{
private:
    int customerID;
    char name[max], address[max];
    char* mobile;
public:
    Customer();
    void display();
};

Customer::Customer()
{
    mobile = new char[10];
    cout << "Enter customer id:";
    cin >> customerID;
    cout << "Enter customer name:";
    cin >> name;
    cout << "Enter customer address:";
    cin >> address;
    cout << "Enter customer mobile:";
    cin >> mobile;
}

void Customer::display()
{
    cout << "The customer id:" << customerID << endl;
    cout << "The customer name:" << name << endl;
    cout << "The customer address:" << address << endl;
    cout << "The customer mobile:" << mobile << endl;
}
int main()
{
    Customer c;
    c.display();
    getch();
    return 0;
}