#pragma once
#include "Order.h"
class Customer
{
private:
    int size;
    Order* order;
    int order_count;

public:
    Customer() {};
    Customer(int);
    ~Customer();
    void create_Order();
    void edit_Order();
    void research_Order() ;
    void delete_Order();
    void print_all_Orders() const;
};
