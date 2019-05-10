#include<iostream> /*Libraries used in this program*/
#include<string>
#include<stdlib.h>
#include<time.h>
#include<iomanip>
#include<Windows.h>
#include<fstream>
#include"customer.h"
using namespace std;

int main()
{
	int identificationSelection, customerSelection;
	int telephoneNumber;
	string username, password;
	int identificationFlag = 0;
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
			system("cls");
			cout << "Administrator:" << endl;
			cout << "Please enter your username and password to log on." << endl;
			cout << "Username:";
			getline(cin, username);
			cin.sync();
			cout << endl;
			cout << "Password:";
			getline(cin, password);
			cin.sync();
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
				useCustomerAccountLog();
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
	}
	return 0;
}