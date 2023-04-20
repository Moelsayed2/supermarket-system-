#pragma once
#include "Product.h"
#include "Employee_System.h"
#include "Order.h"
#include "Customer.h"
#include <iostream>
#include <string>
using namespace std;

class Manager
{
private:
    int password;
    string name;
    int size;
    Product* products;
    Order* orders;
    Employee_System* employees;
    int numProducts;
    int numOrders;
    int numEmployees;
public:
    Manager() {};
    Manager(int size_Product, int size_Order, int size_Employee);

    Manager(string name, int password);
    ~Manager();

    void create_Product();
    void edit_Product();
    void delete_Product();
    void print_all_Products();
    double calculate_Pay_Order();
    double calculate_Pay_Employee();
    void change_Password();

    void set_name(string name);
    string get_name();
    void set_password(int password);
    int get_password();
};
