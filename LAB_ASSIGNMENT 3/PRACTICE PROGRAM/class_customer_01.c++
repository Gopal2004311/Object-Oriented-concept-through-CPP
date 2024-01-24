#include <iostream>
#include <conio.h>
#include <string.h>
#include <ctype.h>
using namespace std;
class Customer
{
private:
    int id;
    char name[50];
    char address[50];
    int contact[10];

public:
    Customer(int, char[], char[], int[]);
    void display();
};

Customer::Customer(int id, char name[], char address[], int contact[])
{
    this->id = id;
    strcpy(this->name, name);
    strcpy(this->address, address);
    for (int i = 0; i < 10; i++)
    {
        this->contact[i] = contact[i];
    }
}

void Customer::display()
{
    cout << "Customer id:" << this->id << endl;
    cout << "Customer name:" << this->name << endl;
    cout << "Customer Address:" << this->address << endl;
    cout << "Customer contact no.:";
    for (int i = 0; i < 10; i++)
    {
        cout << this->contact[i];
    }
}

int main()
{
    int n[10] = {8, 9, 5, 6, 4, 3, 4, 7, 0, 5};
    Customer c1 = Customer(101, "ganesh", "shrirampur", n);
    c1.display();
}