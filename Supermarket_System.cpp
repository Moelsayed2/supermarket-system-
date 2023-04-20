#include "Supermarket_System.h"
Supermarket_System::Supermarket_System()
{
	customer = new Customer (100);
	employee_system = new Employee_System(5);
	manager = new Manager;
}

void Supermarket_System::main_Customer()
{
	system("color A");
	int choice;
	do {
		cout << "\t\t\t\t\t ------------------------\n";
		cout << "\t\t\t\t\t| \" Customer Home Page \" | \n";
		cout << "\t\t\t\t\t ________________________\n";
		cout << "\t^ Main Menu ^\n";
		cout << "\t=============\n";
		cout << "--------------------------------\n";
		cout << "-[ 1 ] : Make Order \n";
		cout << "-[ 2 ] : Edit Order \n";
		cout << "-[ 3 ] : Research Order \n";
		cout << "-[ 4 ] : Delete Order \n";
		cout << "-[ 5 ] : Print All Orders \n";
		cout << "-[ 0 ] : Go Back \n";
		cout << "--------------------------------\n";
		cout << "Enter Your Choice [ 0 ] TO [ 5 ] : ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			system("cls");
			customer->create_Order();
			break;
		case 2:
			system("cls");
			customer->edit_Order();
			break;
		case 3:
			system("cls");
			customer->research_Order();
			break;
		case 4:
			system("cls");
			customer->delete_Order();
			break;
		case 5:
			system("cls");
			customer->print_all_Orders();
			break;
		case 0:
			system("cls");
			system("color B");
			return;
		default:
			cout << "\n""Invalid choice : Please Enter Your Choice [0] TO [5] !!\n";
			continue;
		}
	} while (choice);
}
void Supermarket_System::main_Employee()
{
	system("color F");
	int choice;
	do
	{
		cout << "\t\t\t\t\t -----------------------\n";
		cout << "\t\t\t\t\t| \" Employee Home Page \" | \n";
		cout << "\t\t\t\t\t _______________________\n";
		cout << "\t^ Main Menu ^\n";
		cout << "\t=============\n";
		cout << "--------------------------------\n";
		cout << "-[ 1 ] : Add Employee \n";
		cout << "-[ 2 ] : Edit Employee \n";
		cout << "-[ 3 ] : Reseach Employee \n";
		cout << "-[ 4 ] : Delete Employee \n";
		cout << "-[ 5 ] : Salary Employee \n";
		cout << "-[ 6 ] : Print All Employee \n";
		cout << "-[ 0 ] : Go Back \n";
		cout << "--------------------------------\n";
		cout << "Enter Your Choice [ 0 ] TO [ 6 ] : ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			system("cls");
			employee_system->create_Employee();
			break;
		case 2:
			system("cls");
			employee_system->edit_Employee();
			break;
		case 3:
			system("cls");
			employee_system->research_Employee();
			break;
		case 4:
			system("cls");
			employee_system->delete_Employee();
			break;
		case 5:
			system("cls");
			employee_system->salary_Employee();
			break;
		case 6:
			system("cls");
			employee_system->print_all_Employee();
			break;
		case 0:
			system("cls");
			system("color B");
			return;
		default:
			cout << "\n""Invalid choice : Please Enter Your Choice [0] TO [6] !!\n";
			continue;
		}
	} while (choice);
}

void Supermarket_System::main_Manager()
{
	system("color 3");
	int choice;
	do {
		cout << "\t\t\t\t\t -----------------------\n";
		cout << "\t\t\t\t\t| \" Manager Home Page \" | \n";
		cout << "\t\t\t\t\t _______________________\n";
		cout << "\t^ Main Menu ^\n";
		cout << "\t=============\n";
		cout << "--------------------------------\n";
		cout << "-[ 1 ] : Create product \n";
		cout << "-[ 2 ] : Edit product \n";
		cout << "-[ 3 ] : Delete product \n";
		cout << "-[ 4 ] : Print All Products \n";
		cout << "-[ 5 ] : Calculate Pay of Employees \n";
		cout << "-[ 6 ] : Calculate Pay of Orders \n";
		cout << "-[ 7 ] : Change password \n";
		cout << "-[ 0 ] : Go Back \n";
		cout << "--------------------------------\n";
		cout << "Enter Your Choice [ 0 ] TO [ 7 ] : ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			system("cls");
			manager->create_Product();
			break;
		case 2:
			system("cls");
			manager->edit_Product();
			break;
		case 3:
			system("cls");
			manager->delete_Product();
			break;
		case 4:
			system("cls");
			manager->print_all_Products();
			break;
		case 5:
			system("cls");
			manager->calculate_Pay_Employee();
			break;
		case 6:
			system("cls");
			manager->calculate_Pay_Order();
			break;
		case 7:
			system("cls");
			manager->change_Password();
			break;
		case 0:
			system("cls");
			system("color B");
			return;
		default:
			cout << "\n""Invalid choice : Please Enter Your Choice [0] TO [6] !!\n";
			continue;
		}
	} while (choice);
}

Supermarket_System::~Supermarket_System()
{
	delete customer;
	delete employee_system;
	delete manager;
}
