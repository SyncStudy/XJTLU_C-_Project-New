#include<iostream>
#include<string>
#include"ticket.h"
using namespace std;

class customer
{
protected:
	string name;			//Name of customer
	int ID;					//ID of customer
	int Tel;				//Telephone number of customer
public:
	void setName(string Name);		//Set the name
	void setID(int id);				//Set the ID
	void setTel(int tel);			//Set the Tel
	string getName();				//Get the name
	int getID();					//Get the ID
	int getTel();					//Get the Tel
	string viewMovieInfo(int MovieNumber);		//View the information of movies
	void buyTicket(ticket Ticket);				//Buy the ticket
	string selectRoom(string theRoomSelected);							//Select the room (smallRoom and bigRoom may be two derived class of a base class)
	string selectSeat(string theRoomSelected);			//Select the seat
};