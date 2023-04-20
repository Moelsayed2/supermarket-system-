#include "Product.h"
Product::Product(int code, string name, double price)
{
    this->code = code;
    this->name = name;
    this->price = price;
}

void Product::make_Product()
{
    cout << "Enter Code: ";
    cin >> code;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Price: ";
    cin >> price;
}

void Product::print_Product() const
{
    cout << "Code: " << code << endl;
    cout << "Name: " << name << endl;
    cout << "Price: " << price << endl;
}

void Product::set_code(int code)
{
    this->code = code;
}

int Product::get_code() const
{
    return code;
}

void Product::set_name(string name)
{
    this->name = name;
}

string Product::get_name() const
{
    return name;
}

void Product::set_price(double price)
{
    this->price = price;
}

double Product::get_price() const
{
    return price;
}
