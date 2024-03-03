/*1. Design a base class Product(Product_Id,Product_Name,Price).Derive a class Discount
(Discount_In_Percentage) from Product. A customer buys ‘n’ products. Write a C++
program to calculate total price, total discount.*/
#include <iostream>
#include <conio.h>
#include <string.h>
float totalPrice = 0;
float totalDiscount = 0;
using namespace std;
class Product
{
private:
    int product_id;
    char product_name[max];
protected:
    float price;
protected:
    void acceptProduct();
    void calculateTotalPrice();
    void displayProduct();
    void displayTotalPrice();
};

void Product::acceptProduct()
{
    cout << "\nEnter product id:";
    cin >> product_id;
    cout << "\nEnter Product name:";
    cin >> product_name;
    cout << "\nEnter product price:";
    cin >> price;
}
void Product::displayProduct()
{
    cout << "\n The Product id:" << product_id;
    cout << "\n The Product name:" << product_name;
    cout << "\n The Product price:" << price;
}

void Product::calculateTotalPrice()
{
    totalPrice = totalPrice + price;
}

void Product::displayTotalPrice()
{
    cout << "\n The Total price:" << totalPrice;
}
class Discount :protected Product
{
private:
    float discount_in_percentage;
protected:
    float discount;
public:
    Discount();
    void calculateDiscount();
    void display();
    void displayTotal();
};

Discount::Discount()
{
    acceptProduct();
    calculateTotalPrice();
    cout << "\n Enter Discount in percentage:";
    cin >> discount_in_percentage;
}

void Discount::calculateDiscount()
{
    discount = (price * discount_in_percentage) / 100;
    totalDiscount = totalDiscount + discount;
}

void Discount::display()
{
    displayProduct();
    cout << "\nThe Discount of product in percentage:" << discount_in_percentage;
    cout << "\n the Discount in rupees:" << discount;
}

void Discount::displayTotal()
{
    cout << "\nTotal Discount:" << totalDiscount;
    displayTotalPrice();
}

int main()
{
<<<<<<< HEAD
    Discount* product[max];
=======
    Discount* product[MAX];
>>>>>>> d0af5042db75feed30c3349c618ff23d15bc4996
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
    cout << "-------------------------------" << endl;
    product[0]->displayTotal();
    getch();
    return 0;
}