#ifndef _CUSTOMER
#define _CUSTOMER

#include<iostream>
#include<string>
#include"ticket.h"
#include<vector>
using namespace std;

class customer
{
	friend class Admin;

protected:
	string Name;			//Name of customer
	int ID;					//ID of customer
	int telephonenumber;				//Telephone number of customer
	vector<string> boughtMovie;			//Movies that customer has bought
	
public:
	void setName(string name);		//Set the name
	void setID(int id);				//Set the ID
	void setTelephonenumber(int Tel);			//Set the Telephonenumber
	string getName();				//Get the name
	int getID();					//Get the ID
	int getTelephonenumber();					//Get the Telephonenumber
	void buyTicket(ticket *Temp);			//Buy the ticket(generate the ticket)				
	void setBoughtMovie(string MovieName);					//Set the movies has bought
	void selectSeat(string theRoomSelected,int *theSeatSelected);			//Select the seat
};

#endif