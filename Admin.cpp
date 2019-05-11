#include"Admin.h"
#include<iostream>
#include<string>
#include"customer.h"
#include"ticket.h"
#include"bigRoom.h"
#include"smallRoom.h"
using namespace std;
void Admin::changeMovieInfo(int movieId, string changedName,int changedPrice, int changedPosition)
{

};//setter

void Admin::changeRoomInfo(int roomId)
{

};

void Admin::changeCustomerInfo(int customerId)
{
	string newName;
	int newTel;
	cout << "Please enter the new name of this customer:" << endl;
	getline(cin, newName);
	customer[customerId - 1].setName(newName);
	cout << endl;
	cout << "Please enter the new telephone number of the customer:" << endl;
	cin >> newTel;
	customer[customerId - 1].setTel(newTel);
	cout << "You have changed the information successfully!" << endl;
	cout << "Please press the Enter key to continue:" << endl;
	getchar();
};

string Admin::viewMovieInfo(int movieId)
{
};//return a string or related info

string viewRoomInfo(int roomId) 
{
};

string viewCustomerInfo(int customerId)
{
};

void deleteMovieInfo(int movieId)
{
};//delete

void deleteRoomInfo(int roomId)
{
};

void deleteCustomerInfo(int customerId) 
{
};

string viewMovieInfo(string inputMovieKey)
{
};//use the keywords to find the movie name

string viewRoomInfo(string roomNumber) 
{
	int choice;
	cout << "Please choose the room number to view:" << endl;
	cout << "1. S1;  2. S2;  3. S3;  4. S4;  5. S5;  6. B1;  7. B2;  8. B3." << endl;
	cout << "Please choose the corresponding number:" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		roomS1.printOutState();
		break;

	case 2:
		roomS2.printOutState();
		break;

	case 3:
		roomS3.printOutState();
		break;

	case 4:
		roomS4.printOutState();
		break;

	case 5:
		roomS5.printOutState();
		break;

	case 6:
		roomB1.printOutState();
		break;

	case 7:
		roomB2.printOutState();
		break;

	case 8:
		roomB3.printOutState();
		break;
	}
	cout << "Please press the Enter key to continue." << endl;
	getchar();
	return roomNumber;
};

string viewCustomerInfo(int ID)
{
	cout << "The corresponding information of this customer is as follows:" << endl;
	cout << "ID: " << customer[ID - 1].returnID() << endl;
	cout << "Name: " << customer[ID - 1].returnName() << endl;
	cout << "Tel: " << customer[ID - 1].returnTel() << endl;
	cout << "Please press the Enter key to continue." << endl;
	getchar();
	return customer[ID - 1].returnName();
};

void displayMovieInfo(int movieId)
{
};//Cout standardized output

void displayRoomInfo(int roomId)
{
};

void displayCustomerInfo(int customerId)
{

};

void addNewMovie(int movieId, string movieName, int priceFactorM, int OnlineTime)
{
};//Add a new movie does not need the showing room info

void addNewCustomer(int customerId, string customerName, int customerPhoneNum)
{
};

int retrieveTotalCustomerPerMovie(int movieId)
{
};

int retrieveTotalCustomerAllMovie()
{

};

int retrieveTotalCustomerInPeriod(int startingTime, int endingTime)
{
};//the time format is not specified

int retrieveTotalIncomePerMovie(int movieId)
{
};

int retrieveTotalIncomeAllMovie()
{
};

int retrieveTotalIncomeInPeriod(int startingTime, int endingTime)
{
};//the time format is not specified

void manageMovie()
{
	//find the most valuable movie
	
	//
};
