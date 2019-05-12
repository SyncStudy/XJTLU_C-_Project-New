#include<iostream> /*Libraries used in this program*/
#include<string>
#include<stdlib.h>
#include<time.h>
#include<iomanip>
#include<Windows.h>
#include<fstream>
#include"customer.h"
#include"moreFunctionAboutCustomer.cpp"
#include"Admin.h"
using namespace std;

int adminLogOn()
{
	string adminUsername, adminPassword;
	int adminLogOnFlag = 0;
	system("cls");
	cout << "Administrator:" << endl;
	cout << "Please enter your username and password to log on." << endl;
	cout << "Username:";
	getline(cin, adminUsername);
	cin.sync();
	cout << endl;
	cout << "Password:";
	getline(cin, adminPassword);
	cin.sync();
	if (admin.returnUsername() == adminUsername)
	{
		if (admin.returnPassword() == adminPassword)
		{
			cout << "You have logged on successfully!" << endl;
			adminLogOnFlag = 1;
		}
	}
	if (adminLogOnFlag == 0)
	{
		cout << "Your username or password is not correct." << endl;
	}
	return adminLogOnFlag;
}

int main()
{
	int i = 0;
	int identificationSelection, customerSelection;
	int telephoneNumber, customerID;
	string adminUsername, adminPassword;
	int identificationFlag = 0, adminLogOnFlag=0, customerLogOnFlag=0;
	cout << "Welcome to the movie ticket booking system!" << endl;
	cout << endl;
	while (identificationFlag == 0)
	{
		cout << "Please identify your identification (or you want to exit the system):" << endl;
		cout << "1. Administrator;" << endl;
		cout << "2. Customer;" << endl;
		cout << "3. Exit the system." << endl;
		cout << "Please choose 1, 2 or 3 as your selection:";
		cin >> identificationSelection;

		switch (identificationSelection)
		{
		case 1:
			adminLogOnFlag = adminLogOn();
			break;
			/*Not finish*/

		case 2:
			system("cls");
			cout << "Customer:" << endl;
			cout << "Please choose a selection:" << endl;
			cout << "1. Create a new account;" << endl;
			cout << "2. Use your account to log on." << endl;
			cout << "Please choose the number:" << endl;
			cin >> customerSelection;

			if (customerSelection == 1)
			{
				createCustomerAccount();
			}
			else
			{
				cout << "Please enter your telephone number:" << endl;
				cin >> telephoneNumber;
				for (i = 0; i < 50; i++)
				{
					if (customer[i].returnTel() == telephoneNumber)
					{
						cout << "You have logged on successfully!" << endl;
						customerID = i + 1;
						cout << "Your ID number is " << customerID << "." << endl;
						customerLogOnFlag = 1;
						break;
					}
				}
				if (customerLogOnFlag == 0)
				{
					cout << "Your telephone number is not correct." << endl;
					Sleep(1000);
				}
			}
			break;
			/*Not finish*/

		case 3:
			system("cls");
			cout << "Exiting the system......" << endl;
			Sleep(1000);
			cout << "You have exited the system successfully." << endl;
			cout << "Goodbye!" << endl;
			return 0;
			break;
		}

		if (adminLogOnFlag == 1)
		{
			cout << "Not finish";
		}

		if (customerLogOnFlag == 1)
		{
			cout << "Not finish";
		}
	}
	return 0;
}