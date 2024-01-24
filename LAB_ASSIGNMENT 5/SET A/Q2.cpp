/*2. Design a Base class Customer(name,phone-number).Derive a classDepositor(acc no,
balance) from Customer. Again derive a class Borrower (loan-no, loan-amt) from
Depositor. Write necessary member functions to read and display the details of ‘n’
customers.*/
#include <iostream>
#include <conio.h>
#include <string.h>
const int MAX = 50;
using namespace std;
class Customer
{
public:
    char name[MAX];
    char phone[10];

public:
    void displayCustomer();
};

void Customer::displayCustomer()
{
    cout << "Customer name:" << this->name << endl;
    cout << "Customer phone:" << this->phone << endl;
}
class Depositor : public Customer
{
public:
    int acc_no;
    float balance;

public:
    void displayDepositor();
};

void Depositor::displayDepositor()
{
    cout << "Account no:" << this->acc_no << endl;
    cout << "Account balance:" << this->balance << endl;
}
class Borrower : public Depositor
{
public:
    int loan_no;
    float loan_amount;

public:
    Borrower();
    void display();
};

Borrower::Borrower()
{
    cout << "Enter customer name:";
    cin >> this->name;
    cout << "Enter customer phone no:";
     cin >> this->phone;
    cout << "Enter account no:";
    cin >> this->acc_no;
    cout << "Enter balance:";
    cin >> this->balance;
    cout << "Enter loan no:";
    cin >> this->loan_no;
    cout << "Enter loan amount:";
    cin >> this->loan_amount;
}
void Borrower::display()
{
    this->displayCustomer();
    this->displayDepositor();
    cout << "Loan no:" << this->loan_no << endl;
    cout << "Loan amount:" << this->loan_amount << endl;
}
int main()
{
    int n;
    Borrower *customer[MAX];
    cout << "Enter how many customer you want to store:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        customer[i] = new Borrower();
    }

    cout << "---------------------------" << endl;
    cout << "Customer details!!" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "-----------------------------" << endl;
        customer[i]->display();
    }
    getch();
    return 0;
}