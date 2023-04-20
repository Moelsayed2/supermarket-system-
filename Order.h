#pragma once
#include "Product.h"
#include <iostream>
#include <string>

using namespace std;

class Order
{
private:
    int order_number;
    string name;

    int size;
    Product* product;
    int product_count;

public:
    Order() {};
    Order(int);
    Order(string name, int order_number);
    ~Order();

    void add_Order();
    void print_Order() const;

    void set_name(string name);
    string get_name() const;
    void set_order_number(int order_number);
    int get_order_number() const;
};
