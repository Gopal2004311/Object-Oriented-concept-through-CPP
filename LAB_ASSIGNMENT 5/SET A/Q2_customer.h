/*2. Design a Base classCustomer(name,phone-number).Derive a class Depositor(acc_no,
balance) from Customer. Again derive a class Borrower (loan-no, loan-amt) from
Depositor. Write necessary member functions to read and display the details of ‘n’
customers.*/
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class Customer
{
protected:
    char name[max];
    char phone[10];
public:
    void acceptCustomer(const char* customerName, const char* mobile)
    {
        strcpy(name, customerName);
        strcpy(phone, mobile);
    }

    void displayCustomer()
    {
        cout << "The Customer name:" << name << endl;
        cout << "The Customer phone:" << phone << endl;
    }
};


class Depositor :public Customer
{
protected:
    char acc_no[12];
    double balance;
public:
    void acceptDepositor(const char* accountNo, double bankBalance)
    {
        strcpy(acc_no, accountNo);
        balance = bankBalance;
    }

    void displayDeposit()
    {
        cout << "The Account no.:" << acc_no << endl;
        cout << "The Bank Balance:" << balance << endl;
    }
};


class Borrower :public Depositor
{
protected:
    int loan_no;
    double loan_amount;
public:
    Borrower(const char* customerName, const char* mobile, const char* accountNo, double bankBalance, double loanAmount, int loanNo)
    {
        acceptCustomer(customerName, mobile);
        acceptDepositor(accountNo, bankBalance);
        loan_no = loanNo;
        loan_amount = loanAmount;
    }
    void display()
    {
        displayCustomer();
        displayDeposit();
        cout << "The Loan no.:" << loan_no << endl;
        cout << "The Loan Amount:" << loan_amount << endl;
    }
};