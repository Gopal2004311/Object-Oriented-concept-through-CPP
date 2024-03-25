/*1. Design a base class Product(Product_Id,Product_Name,Price).Derive a class Discount
(Discount_In_Percentage) from Product. A customer buys ‘n’ products. Write a C++
program to calculate total price, total discount.*/
#include "Q1_customer.h"
int main()
{
    Discount* product[max];
    int n;
    cout << "\nEnter how many product you want to purchase:";
    cin >> n;
    for (int i = 0;i < n;i++)
    {
        product[i] = new Discount();
    }

    cout << "\n----------------------------" << endl;
    cout << "----The Product Details----" << endl;
    for (int i = 0;i < n;i++)
    {
        product[i]->calculateDiscount();
        product[i]->display();
    }
    cout << "\n-------------------------------" << endl;
    product[0]->displayTotal();
    getch();
    return 0;
}