#include <iostream>
#include <conio.h>
using namespace std;
int prime(int n)
{
    int i, flag = 0;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    return (flag==0)?1:0;
}

int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(prime(n))
    {
        cout<<"Number is prime!!";
    }else
    {
        cout<<"Number is not prime!!";
    }
    getch();
    return 0;
}