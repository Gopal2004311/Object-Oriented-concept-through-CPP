/*2. Create a C++ class Employee with data members E_no, E_Name, Designation andSalary.
Accept two employees information and display information of employee having
maximum salary. (Use this pointer)*/
#include <iostream>
#include <conio.h>
using namespace std;
class Employee
{
private:
    int E_no;
    const char* name;
    const char* designation;
    float salary;
public:
    Employee(int EmpNo, const char* EmpName, const char* designation, float salary)
    {
        this->E_no = EmpNo;
        this->name = EmpName;
        this->designation = designation;
        this->salary = salary;
    }
    float getSalary()
    {
        return this->salary;
    }
    void display()
    {
        cout << "The Employee no.:" << this->E_no << endl;
        cout << "The Employee name:" << this->name << endl;
        cout << "The Employee designation:" << this->designation << endl;
        cout << "The Employee salary:" << this->salary << endl;
    }
};
int main()
{
    Employee* e[max];
    int n, i, no;
    char name[max], des[max];
    float sal, Max;
    cout << "Enter size of array:";
    cin >> n;
    for (i = 0;i < n;i++)
    {
        cout << "Enter employee no.:";
        cin >> no;
        cout << "Enter employee name:";
        cin >> name;
        cout << "Enter employee designation:";
        cin >> des;
        cout << "Enter employee salary:";
        cin >> sal;
        //creating object here
        e[i] = new Employee(no, name, des, sal);
    }
    cout << "---------------------------------------" << endl;
    cout << "Employee having maximum salary:" << endl;
    Max = e[0]->getSalary();
    for (i = 0;i < n;i++)
    {
        sal = e[i]->getSalary();
        Max = (Max < sal) ? sal : Max;
    }
    for (i = 0;i < n;i++)
    {
        sal = e[i]->getSalary();
        if (sal == Max)
        {
            e[i]->display();
        }
    }
    getch();
    return 0;
}