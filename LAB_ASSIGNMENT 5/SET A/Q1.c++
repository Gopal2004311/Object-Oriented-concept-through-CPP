/*1. Design a base class Product(Product_Id,Product_Name,Price).Derive a class Discount
(Discount_In_Percentage) from Product. A customer buys ‘n’ products. Write a C++
program to calculate total price, total discount.*/
#include <iostream>
#include <conio.h>
#include <string.h>
const int MAX = 50;
float totalPrice = 0;
int totalDis = 0;
using namespace std;
class Product
{
public:
    int Product_Id;
    char Product_Name[MAX];
    float price;
};

class Discount : public Product
{
public:
    int Discount_In_Percentage;
    float netPrice;

public:
    Discount(int, int, char[], float);
    void calculateTotalPriceDiscount();
    void display();
};

Discount::Discount(int Discount_In_Percentage, int Product_Id, char Product_Name[], float price)
{
    this->Discount_In_Percentage = Discount_In_Percentage;
    this->Product_Id = Product_Id;
    strcpy(this->Product_Name, Product_Name);
    this->price = price;
    totalPrice = totalPrice + this->price;
    this->netPrice = (this->price - ((this->price * this->Discount_In_Percentage) / 100));
    totalDis = totalDis + ((this->price * this->Discount_In_Percentage) / 100);
}

void Discount::calculateTotalPriceDiscount()
{
    cout << "Total price:" << totalPrice << endl;
    cout << "Total discount:" << totalDis << endl;
}

void Discount::display()
{
    cout << "Product no:" << this->Product_Id << endl;
    cout << "Product name:" << this->Product_Name << endl;
    cout << "Product price:" << this->price << endl;
    cout << "Product discount in percentage:" << this->Discount_In_Percentage << endl;
    cout << "Product net price:" << this->netPrice << endl;
}

int main()
{
    Discount *product[MAX];
    int n;
    int Discount_In_Percentage;
    int Product_Id;
    char Product_Name[MAX];
    float price;
    cout << "Enter how many products you want buy:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter product id:";
        cin >> Product_Id;
        cout << "Enter product name:";
        cin >> Product_Name;
        cout << "Enter product price:";
        cin >> price;
        cout << "Enter Discount(percentage):";
        cin >> Discount_In_Percentage;
        product[i] = new Discount(Discount_In_Percentage, Product_Id, Product_Name, price);
    }

    cout << "\n--------------------------------------------\n";
    cout << "Product details!!" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "-----------------------------------\n";
        product[i]->display();
    }

    cout << "--------------------------------------------\n";
    cout << "Total discount and price!!" << endl;
    product[0]->calculateTotalPriceDiscount();
    getch();
    return 0;
}