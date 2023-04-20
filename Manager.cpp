#include "Manager.h"
Manager::Manager(int size_Product , int size_Order ,int size_Employee)
{
    size = size_Product = size_Order = size_Employee;
    products = new Product[size];
    orders = new Order[size];
    employees = new Employee_System [size];
    numProducts = 0;
   numOrders = 0;
  numEmployees = 0;
}
Manager::Manager(string name, int password)
{
    this->name = name;
    this->password = password;
}

Manager::~Manager()
{
    delete[] products;
    delete[] orders;
    delete[] employees;
}

void Manager::create_Product()
{
    char CH;
    do {
        if (numProducts < size)
        {
            products[numProducts].make_Product();
            numProducts++;
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

void Manager::edit_Product()
{
    // code to edit a Product in the dynamic array
}

void Manager::delete_Product()
{
    // code to delete a Product from the dynamic array
}

void Manager::print_all_Products()
{
    if (this->numProducts == 0)
    {
        cout << "No products to display." << endl;
        return;
    }
    cout << "All products:" << endl;
    for (int i = 0; i < this->numProducts; i++)
    {
        Product product = this->products[i];
        cout << "Product #" << i + 1 << ":" << endl;
        cout << "Name: " << product.get_name() << endl;
        cout << "Price: $" << product.get_price() << endl;
        cout << endl;
    }
}


double Manager::calculate_Pay_Order()
{
    double total = 0.0;
    for (int i = 0; i < numOrders; i++)
    {
        Order order = orders[i];
        for (int j = 0; j < order.get_order_number(); j++)
        {
            order.get_order_number();
        }
    }
    return total;
}

double Manager::calculate_Pay_Employee()
{
    if (numEmployees == 0)
    {
        cout << "No employees to calculate pay for." << endl;
        return 0.0;
    }
    double total = 0.0;
    for (int i = 0; i < numEmployees; i++)
    {
        total += employees[i].salary_Employee();
    }
    cout << "Total pay for all employees: $" << total << endl;
    return total;
}



void Manager::change_Password()
{
    int oldPassword, newPassword;
    cout << "Enter old password: ";
    cin >> oldPassword;
    if (oldPassword == this->password)
    {
        cout << "Enter new password: ";
        cin >> newPassword;
        this->password = newPassword;
        cout << "Password changed successfully." << endl;
    }
    else {
        cout << "Incorrect password." << endl;
    }
}

void Manager::set_name(string name)
{
    this->name = name;
}

string Manager::get_name()
{
    return this->name;
}

void Manager::set_password(int password)
{
    this->password = password;
}

int Manager::get_password()
{
    return this->password;
}
