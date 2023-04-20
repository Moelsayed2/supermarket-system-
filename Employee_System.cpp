#include "Employee_System.h"

Employee_System::Employee_System(int Employee_size)
{
	size = Employee_size;
	Employees = new Employee[size];
	Employee_count = 0;
}

void Employee_System::create_Employee()
{
	char CH;
	do {
		if (Employee_count < size)
		{
			Employees[Employee_count].add_Employee();
			Employee_count++;
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

void Employee_System::edit_Employee()
{
	int id;
	cout << "\n""Please Enter The ID OF The Employee TO Edit : ";
	cin >> id;
	bool found = false;
	for (int i = 0; i < Employee_count; i++)
	{
		if (id == Employees[i].get_employee_ID())
		{
			Employees[i].add_Employee();
			found = true;
			break;
		}
	}
	if (found)
	{
		cout << "^ The Employee Has Been Edited Successfully ^" << "\n";
		cout << "--------------------------------------------" << "\n";
	}
	else {
		cout << "\n""Error : The ID OF The Employee Is Incorrect !!" << "\n";
	}
}

void Employee_System::research_Employee()
{
	int r;
	cout << "\nPlease Enter The ID To Research: ";
	cin >> r;
	for (int i = 0; i < Employee_count; i++)
	{
		if (Employees[i].get_employee_ID() == r)
		{
			Employees[i].print_Employee();
			return;
		}
	}
	cout << "\nError : No Employee Found With This ID Employee!!\n";
}

void Employee_System::delete_Employee()
{
	cout << "\n""\t^ Main Delete Employee ^\n";
	cout << "\t=======================\n";
	cout << "-------------------------------------------------------\n";
	int id;
	cout << "Please Enter The ID OF The Employee TO Delete : ";
	cin >> id;
	bool found = false;
	int index = -1;
	for (int i = 0; i < Employee_count; i++)
	{
		if (id == Employees[i].get_employee_ID())
		{
			found = true;
			index = i;
			break;
		}
	}
	if (!found)
	{
		cout << "\n""Error : The ID OF The Employee Is Incorrect !!" << "\n";
		return;
	}
	Employees[index].print_Employee();
	char CH;
	cout << "\nAre you sure TO Delete The Employee? (Y|N) : ";
	cin >> CH;
	if (CH == 'Y' || CH == 'y')
	{
		for (int j = index; j < Employee_count - 1; j++)
		{
			Employees[j] = Employees[j + 1];
		}
		cout << "\n""^ The Employee Has Been Deleted Successfully ^" << "\n";
		Employee_count--;
	}
	else
	{
		cout << "\n""Deletion Canceled !!" << "\n";
	}
}

double Employee_System::salary_Employee()
{
	int id;
	cout << "\nPlease Enter The ID To Get Salary : ";
	cin >> id;
	for (int i = 0; i < Employee_count; i++)
	{
		if (Employees[i].get_employee_ID() == id)
		{
			return (Employees[i].get_hours_worked() * 50);
		}
	}
	cout << "\nError : No Employee Found With This ID Employee!!\n";
	return -1; // or any other default value to indicate an error
}


void Employee_System::print_all_Employee()
{
	if (Employee_count == 0)
	{
		cout << "\nError : No Employee Found !!\n";
	}
	else
	{
		// Sort the employees by ID
		for (int i = 0; i < Employee_count - 1; i++)
		{
			int min_index = i;
			for (int j = i + 1; j < Employee_count; j++)
			{
				if (Employees[j].get_employee_ID() < Employees[min_index].get_employee_ID())
				{
					min_index = j;
				}
			}
			if (min_index != i)
			{
				Employee temp = Employees[i];
				Employees[i] = Employees[min_index];
				Employees[min_index] = temp;
			}
		}
		for (int i = 0; i < Employee_count; i++)
		{
			cout << "Employee " << ": " << i + 1 << "\n";
			Employees[i].print_Employee();
		}
	}
}

Employee_System::~Employee_System()
{
	delete[] Employees;
}