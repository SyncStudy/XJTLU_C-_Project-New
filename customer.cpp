#include"customer.h"

void customer::setName(string name)
{
	Name = name;
}

void customer::setID(int id)
{
	ID = id;
}

void customer::setTelephonenumber(int Tel)
{
	telephonenumber = Tel;
}

string customer::getName()
{
	return Name;
}

int customer::getID()
{
	return ID;
}

int customer::getTelephonenumber()
{
	return telephonenumber;
}

void customer::setBoughtMovie(string MovieName)
{
	boughtMovie.push_back(MovieName);
}

void customer::buyTicket()
{
	int command;
	cout << "Recent movies are as follows" << endl;
	//cout<<Movies'titles
	cout << "Please choose the number of the movie you want to see, or you can input 0 to exit ticket buying process." << endl;
	cin >> command;

}

void customer::payTicket(ticket Ticket)
{
	
}