/*1. Write a C++ program using class to accept and display ‘n’ Products information, also
display information of a product having maximum price. (Use array of objects and
dynamic memoryallocation)*/
#include <conio.h>
#include <iostream>
#include <string.h>
#define MAX 50
using namespace std;
class Product
{
public:
    int product_id;
    char name[30];
    int price;
    int qty;

public:
    Product(int, char[], int, int);
    void display();
    void displayProductMaxPrice();
};

Product::Product(int id, char name[], int price, int qty)
{
    this->product_id = id;
    strcpy(this->name, name);
    this->price = price;
    this->qty = qty;
}

void Product::display()
{
    cout << "\n-------------------------------------------------------\n"
        << endl;
    cout << "Product id:" << this->product_id << endl;
    cout << "Product name:" << this->name << endl;
    cout << "Product price:" << this->price << endl;
    cout << "Product Quantity:" << this->qty << endl;
}

void Product::displayProductMaxPrice()
{
    cout << "product id"
        << " "
        << "product name"
        << " "
        << "product price"
        << " "
        << "Quantity" << endl;
    cout << this->product_id << "            " << this->name << "           " << this->price << "          " << this->qty << endl;
    cout << "\n-------------------------------------------------------\n"
        << endl;
}

int main()
{
    int n;
    cout << "Enter how many products are you add:";
    cin >> n;
    Product* p[MAX];
    int i;
    int product_id;
    char name[30];
    int price;
    int qty;
    for (i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " product id:";
        cin >> product_id;
        cout << "Enter " << i + 1 << " product name:";
        cin >> name;
        cout << "Enter " << i + 1 << " product price:";
        cin >> price;
        cout << "Enter " << i + 1 << " product Quantity:";
        cin >> qty;
        p[i] = new Product(product_id, name, price, qty);
    }
    for (i = 0; i < n; i++)
    {
        p[i]->display();
    }
    cout << "\n------------------------------------------\n";
    int greater = p[0]->price;
    for (int i = 0; i < n; i++)
    {
        if (greater < p[i]->price)
        {
            greater = p[i]->price;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (greater == p[i]->price)
        {
            p[i]->displayProductMaxPrice();
            break;
        }
    }

    getch();
    return 0;
}