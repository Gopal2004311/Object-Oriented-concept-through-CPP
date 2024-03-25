#include <iostream>
#include <conio.h>
#include <string.h>
float totalPrice = 0;
float totalDiscount = 0;
float totalDPrice = 0;
using namespace std;
class Product
{
private:
    int product_id;
    char product_name[max];
protected:
    float price, price_after_discount;
protected:
    void acceptProduct();
    void calculateTotalPrice();
    void displayProduct();
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

class Discount :public Product
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
    price_after_discount = price - discount;
    totalDPrice = totalDPrice + price_after_discount;
}

void Discount::display()
{
    displayProduct();
    cout << "\nThe Discount of product in percentage:" << discount_in_percentage;
    cout << "\n the Discount in rupees:" << discount;
    cout << "\nPrice after reducing discount:" << price_after_discount;
}

void Discount::displayTotal()
{
    cout << "\nTotal Discount:" << totalDiscount;
    cout << "\n The Total price:" << totalPrice;
    cout << "\n The total price after reducing discount:" << totalDPrice;
}
