#include<time.h>
#include<iostream>
#include<iomanip>
#include<Windows.h>
#include<fstream>
#include"customer.h"
#include<string>
using namespace std;

void customer::setName(string Name)
{
	cout << "Please enter your name:" << endl;
	getline(cin, Name);
	name = Name;
}

void customer::setTel(int tel)
{
	cout << "Please enter your telephone number:" << endl;
	cin>>tel;
	Tel = tel;
}

string customer::getName()
{
	return name;
}

int customer::getID()
{
	return ID;
}

int customer::getTel()
{
	return Tel;
}

string customer::selectRoom(string theRoomSelected)
{
	int choice;
	cout << "Please select the room:" << endl;
	cout << "Small room:" << endl;
	cout << "1. S1" << endl;
	cout << "2. S2" << endl;
	cout << "3. S3" << endl;
	cout << "4. S4" << endl;
	cout << "5. S5" << endl;
	cout << "Big room:" << endl;
	cout << "6. B1" << endl;
	cout << "7. B2" << endl;
	cout << "8. B3" << endl;
	cout << "Please choose the number as your selection." << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		theRoomSelected = "S1";
		break;

	case 2:
		theRoomSelected = "S2";
		break;

	case 3:
		theRoomSelected = "S3";
		break;

	case 4:
		theRoomSelected = "S4";
		break;

	case 5:
		theRoomSelected = "S5";
		break;

	case 6:
		theRoomSelected = "B1";
		break;

	case 7:
		theRoomSelected = "B2";
		break;

	case 8:
		theRoomSelected = "B3";
		break;
	}
	return theRoomSelected;
}

string selectedSeat(string theRoomSelected)
{
	string theSeatSelected;
	if (theRoomSelected == "S1" || theRoomSelected == "S2" || theRoomSelected == "S3" || theRoomSelected == "S4" || theRoomSelected == "S5")
	{
		cout << "Please choose the number of your seat from 001 to 300 (enter the corresponding number):" << endl;
		getline(cin, theSeatSelected);
	}

	else if (theRoomSelected == "B1" || theRoomSelected == "B2" || theRoomSelected == "B3")
	{
		cout << "Please choose the number of your seat from 001 to 750 (enter the corresponding number):" << endl;
		getline(cin, theSeatSelected);
	}
	return theSeatSelected;
}



