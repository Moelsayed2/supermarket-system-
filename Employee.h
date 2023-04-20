#pragma once
#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
	string frist_Name, last_Name, gender, phone;
	int employee_ID, age;
	double hours_worked;
public:
	Employee() {};
	Employee(int employee_ID, string frist_Name, string last_Name, string phone, int age, double hours_worked);

	void add_Employee();
	void print_Employee();
	double get_salary();

	void set_employee_ID(int employee_ID);
	int get_employee_ID();
	void set_frist_Name(string frist_Name);
	string get_frist_Name();
	void set_last_Name(string last_Name);
	string get_last_Name();
	void set_phone(string phone);
	string get_phone();
	void set_age(int age);
	int get_age();
	void set_hours_worked(double hours_worked);
	double get_hours_worked();
};
