#include "Order.h"
Order::Order(int order_size)
{
    size = order_size;
    product = new Product[size];
    product_count = 0;
}
Order::Order(string name, int order_number)
{
    this->name = name;
    this->order_number = order_number;

}

void Order::add_Order()
{
    char CH;
    do {
        if (product_count < size)
        {
            product[product_count].print_Product();
            product_count++;
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


void Order::print_Order() const
{
    cout << "Order name: " << name << ", order number: " << order_number << endl;
    if (product_count == 0)
    {
        cout << "\nError : No Employee Found !!\n";
    }
    else
    {
        for (int i = 0; i < product_count; i++)
        {
            product[i].print_Product();
        }
    }
}

void Order::set_name(string name)
{
    this->name = name;
}
string Order::get_name() const
{
    return name;
}
void Order::set_order_number(int order_number)
{
    this->order_number = order_number;
}
int Order::get_order_number() const
{
    return order_number;
}
Order::~Order()
{
    delete[] product;
}

