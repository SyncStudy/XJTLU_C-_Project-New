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

void customer::buyTicket(ticket *Temp)
{
	int command;
	string theMovieSelected;
	string theTimeSelected;
	string theRoomSelected;
	int theSeatSelected;
	float M;
	float R;

	cout << "Recent movies are as follows" << endl;
	//cout<<Recent movies'names
	cout << "Please choose the number of the movie you want to see, or you can input 0 to exit ticket buying process." << endl;
	cin >> command;
	//Movie = the selected movie
	//M = the corresponding movie factor
	Temp->setTicketMovie(theMovieSelected);
	cout << "The movie you selected is " << Temp->returnMovie() << endl;

	cout << "Please select the time" << endl;
	//cout<<Available time based on the selected movie
	cin >> command;
	//Time = the selected time
	Temp->setTicketTime(theTimeSelected);
	cout << "The time you selected is " << Temp->returnTime() << endl;

	cout << "Please choose the room" << endl;
	//cout<<Available room based on the selected movie and time
	cout << "Please choose the number as your selection." << endl;
	cin >> command;
	//Room = the selected room;
	//R = the corresponding room factor
	Temp->setTicketRoom(theRoomSelected);
	cout << "The room you select is " << Temp->returnRoom() << endl;

	cout << "Please select the seat" << endl;
	selectSeat(theRoomSelected, &theSeatSelected);
	Temp->setTicketPosition(theSeatSelected);
	cout << "The position you select is " << Temp->returnPosition() << endl;

	Temp->generatePrice(M, R);

	cout << "Your ticket is:" << endl;
	cout << "Movie:\t" <<Temp->returnMovie()<< endl;
	cout << "Time:\t" << Temp->returnTime() << endl;
	cout << "Room:\t" << Temp->returnRoom() << endl;
	cout << "Seat:\t" << Temp->returnPosition() << endl;
	cout << "Price:\t" << Temp->returnPrice() << endl;
}



void customer::selectSeat(string theRoomSelected,int *theSeatSelected)
{
	if (theRoomSelected == "S1" || theRoomSelected == "S2" || theRoomSelected == "S3" || theRoomSelected == "S4" || theRoomSelected == "S5")
	{
		cout << "Please choose the number of your seat from 001 to 300 (enter the corresponding number):" << endl;
		//Display the seat map of small room
		cin >> *theSeatSelected;
	}

	else if (theRoomSelected == "B1" || theRoomSelected == "B2" || theRoomSelected == "B3")
	{
		cout << "Please choose the number of your seat from 001 to 750 (enter the corresponding number):" << endl;
		//Display the seat map of big room
		cin >> *theSeatSelected;
	}
}