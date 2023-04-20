#include "Employee.h"

Employee::Employee(int employee_ID, string frist_Name, string last_Name, string phone, int age, double hours_worked)
{
	this->employee_ID = employee_ID;
	this->frist_Name = frist_Name;
	this->last_Name = last_Name;
	this->age = age;
	this->phone = phone;
	this->hours_worked = hours_worked;
}

void Employee::add_Employee()
{
	cout << "\n""\t^ Main Create Employee ^\n";
	cout << "\t=======================\n";
	cout << "-------------------------------------------------------\n";
	cout << "Enter ID OF Employee :\n";
	cin >> employee_ID;
	set_employee_ID(employee_ID);

	cout << "Enter Your First Name :\n";
	cin >> frist_Name;
	set_frist_Name(frist_Name);

	cout << "Enter Your Last Name :\n";
	cin >> last_Name;
	set_last_Name(last_Name);

	cout << "Enter Your Age :\n";
	cin >> age;
	set_age(age);

	cout << "Enter Your Phone :\n";
	cin >> phone;
	set_phone(phone);

	cout << "Enter Your Hour Worked :\n";
	cin >> hours_worked;
	set_hours_worked(hours_worked);

	cout << "---------------------\n";
	cout << "^ The Employee Saved ^\n";
	cout << "---------------------\n";
	return;
}

void Employee::print_Employee()
{
	cout << "--------------------------------\n";
	cout << "ID : " << employee_ID << "\n";
	cout << "Name : " << frist_Name << " " << last_Name << "\n";
	cout << "Phone : " << phone << "\n";
	cout << "Age : " << age << "\n";
	cout << "Hour Worked : " << hours_worked << "\n";
	//cout << "Salary : " << get_salary() << "\n";
	cout << "--------------------------------\n";
}

double Employee::get_salary()
{
	return hours_worked * 50;
}

void Employee::set_employee_ID(int employee_ID)
{
	this->employee_ID = employee_ID;
}

int Employee::get_employee_ID()
{
	return employee_ID;
}

void Employee::set_frist_Name(string frist_Name)
{
	this->frist_Name = frist_Name;
}

string Employee::get_frist_Name()
{
	return frist_Name;
}

void Employee::set_last_Name(string last_Name)
{
	this->last_Name = last_Name;
}

string Employee::get_last_Name()
{
	return last_Name;
}

void Employee::set_phone(string phone)
{
	this->phone = phone;
}

string Employee::get_phone()
{
	return phone;
}

void Employee::set_age(int age)
{
	this->age = age;
}

int Employee::get_age()
{
	return age;
}

void Employee::set_hours_worked(double hours_worked)
{
	this->hours_worked = hours_worked;
}

double Employee::get_hours_worked()
{
	return hours_worked;
}