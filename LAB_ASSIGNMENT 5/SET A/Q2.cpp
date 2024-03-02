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
    int phone[10];
protected:
    void acceptCustomer();
    void displayCustomer();
};

void Customer::acceptCustomer()
{
    cout << "\nEnter Customer name:";
    cin >> name;
    cout << "\nEnter Customer phone:";
    for (int i = 0;i < 10;i++)
        cin >> phone[i];
}

void Customer::displayCustomer()
{
    cout << "\nThe Customer name:" << name;
    cout << "\nThe Customer phone no.:";
    for (int i = 0;i < 10;i++)
        cout << phone[i];
}
class Depositor :public Customer
{
protected:
    int account_no[12];
    float balance;
protected:
    void acceptDep();
    void displayDep();
};
void Depositor::acceptDep()
{
    cout << "\nEnter Account no.:";
    for (int i = 0;i < 12;i++)
        cin >> account_no[i];
    cout << "\nEnter Balance:";
    cin >> balance;
}

void Depositor::displayDep()
{
    cout << "\nThe Customer a/c no.:";
    for (int i = 0;i < 12;i++)
        cout << account_no[i];
    cout << "\nThe Customer balance:" << balance;
}
class Borrower :public Depositor
{
protected:
    int loan_no;
    float loan_amt;
public:
    Borrower();
    void display();
};

Borrower::Borrower()
{
<<<<<<< HEAD
    acceptCustomer();
    acceptDep();
    cout << "\nEnter loan no.:";
    cin >> loan_no;
    cout << "\nEnter loan amount:";
    cin >> loan_amt;
=======
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
>>>>>>> d0af5042db75feed30c3349c618ff23d15bc4996
}

void Borrower::display()
{
    displayCustomer();
    displayDep();
    cout << "\nThe Loan no.:" << loan_no;
    cout << "\nThe Loan amount:" << loan_amt;
}
int main()
{
    Borrower* c[max];
    int n;
<<<<<<< HEAD
    cout << "\nEnter how many customers you want to store:";
=======
    Borrower* customer[MAX];
    cout << "Enter how many customer you want to store:";
>>>>>>> d0af5042db75feed30c3349c618ff23d15bc4996
    cin >> n;
    for (int i = 0;i < n;i++)
    {
        c[i] = new Borrower();
    }
    cout << "\n-----------------------------------------------" << endl;
    cout << "----The Customer Details are----" << endl;
    for (int i = 0;i < n;i++)
    {
        c[i]->display();
    }
    getch();
    return 0;
}