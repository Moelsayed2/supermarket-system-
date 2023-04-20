#pragma once
#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
    int code;
    string name;
    double price;

public:
    //Product() : code(1), name("Apple"), price(30.0) {}
    Product() {};
    Product(int code, string name, double price);

    void make_Product();
    void print_Product() const;

    void set_code(int code);
    int get_code() const;
    void set_name(string name);
    string get_name() const;
    void set_price(double price);
    double get_price() const;
};
