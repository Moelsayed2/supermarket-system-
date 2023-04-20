#include "Customer.h"
Customer::Customer(int Customer_size)
{
    size = Customer_size;
    order = new Order[size];
    order_count = 0;
}

Customer::~Customer()
{
    delete[] order;
}

void Customer::create_Order()
{
    char CH;
    do {
        if (order_count < size)
        {
            order[order_count].add_Order();
            order_count++;
        }
        else
        {
            cout << "\nError : Employee List Is Full !!\n";
            break;
        }
        cout << "\nDo You Want To ADD Another Employee ? (Y|N) : ";
        cin >> CH;
    } while (CH == 'Y' || CH == 'y');
}

void Customer::edit_Order()
{
}

void Customer::research_Order()
{
}

void Customer::delete_Order()
{
}

void Customer::print_all_Orders() const
{
    for (int i = 0; i < order_count; i++)
    {
        cout << "Order " << ": " << i + 1 << "\n";
        order[i].print_Order();
    }
}

