/*2. Design a Base classCustomer(name,phone-number).Derive a class Depositor(acc_no,
balance) from Customer. Again derive a class Borrower (loan-no, loan-amt) from
Depositor. Write necessary member functions to read and display the details of ‘n’
customers.*/
#include "Q2_customer.h"
int main()
{
    char Name[max], mobile[10], accountNo[12];
    int  loanNo;
    double bankBalance, loan;

    Borrower* c[max];
    int n;
    cout << "Enter size of array:";
    cin >> n;
    for (int i = 0;i < n;i++)
    {
        cout << "Enter customer name:";
        cin >> Name;
        cout << "Enter mobile no.:";
        cin >> mobile;
        cout << "Enter Account no.:";
        cin >> accountNo;
        cout << "Enter bank balance:";
        cin >> bankBalance;
        cout << "Enter loan no.:";
        cin >> loanNo;
        cout << "Enter loan amount:";
        cin >> loan;

        c[i] = new Borrower(Name, mobile, accountNo, bankBalance, loan, loanNo);
    }

    cout << endl;
    cout << "---------Customer Details-------" << endl;
    for (int i = 0;i < n;i++)
    {
        c[i]->display();
        //also use following
        // c[i]->displayCustomer();
        // c[i]->displayDeposit();
    }
}