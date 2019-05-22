#include<string.h>
#include<iostream>
using namespace std;

class ticket
{
	friend class customer;
private:
	double price;
	string movie;
	int position;
	string room;
	string time;

public:
	void setTicketMovie(string Movie)
	{
		movie = Movie;
	}

	void setTicketRoom(string Room)
	{
		room = Room;
	}

	void setTicketPrice(double Price)
	{
		price = Price;
	}

	void setTicketTime(string Time)
	{
		time = Time;
	}

	void setTicketPosition(int Position)
	{
		position = Position;
	}

	double returnPrice()
	{
		return price;
	}

	string returnMovie()
	{
		return movie;
	}

	int returnPosition()
	{
		return position;
	}

	string returnRoom()
	{
		return room;
	}

	string returnTime()
	{
		return time;
	}
	void generatePrice(float M,float R)
	{
		price = M * R;
	}
};