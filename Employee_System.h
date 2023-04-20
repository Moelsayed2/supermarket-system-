#pragma once
#include "Employee.h"

class Employee_System
{
private:
	int size;
	Employee* Employees;
	int Employee_count;
public:
	Employee_System() {};
	Employee_System(int);
	void create_Employee();
	void edit_Employee();
	void research_Employee();
	void delete_Employee();
	double salary_Employee();
	void print_all_Employee();
	~Employee_System();
};
