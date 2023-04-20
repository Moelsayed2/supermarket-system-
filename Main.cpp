
#include <iostream>
#include <string>
#include "Supermarket_System.h"
using namespace std;

int main()
{
	Supermarket_System D;
	system("color C");
	int choice;
	do
	{
		cout << "\t\t\t\t\t ----------------------------\n";
		cout << "\t\t\t\t\t| \" Welcome To Supermarket \" | \n";
		cout << "\t\t\t\t\t ____________________________\n";
		cout << "\t^ Main Menu ^\n";
		cout << "\t=============\n";
		cout << "--------------------------------\n";
		cout << "-[ 1 ] : Customer \n";
		cout << "-[ 2 ] : Employee \n";
		cout << "-[ 3 ] : Manager \n";
		cout << "-[ 0 ] : Exit \n";
		cout << "--------------------------------\n";
		cout << "Enter Your Choice [ 0 ] TO [ 3 ] : ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			system("cls");
			D.main_Customer();
			break;
		case 2:
			system("cls");
			D.main_Employee();
			break;
		case 3:
			int password;
			cout << "\t^ Logain ^\n";
			cout << "Enter Password To Log In \n";
			cin >> password;
			if (password == 2004)
			{
				system("cls");
				D.main_Manager();
				break;
			}
		case 0:
			system("cls");
			cout << "\n""^ See You Later ^\n";
			return 0;
		default:
			cout << "\n""Invalid choice : Please Enter Your Choice [0] TO [5] !!\n";
			continue;
		}
	} while (choice);
}
