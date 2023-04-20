#pragma once
#include "Customer.h"
#include "Employee_System.h"
#include "Manager.h"

class Supermarket_System
{
private:
	int size;
	Customer* customer;
	Employee_System* employee_system;
	Manager* manager;


public:
	Supermarket_System();
	void main_Customer();
	void main_Employee();
	void main_Manager();
	~Supermarket_System();
};
