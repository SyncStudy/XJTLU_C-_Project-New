#include<string.h>
#include<iostream>
using namespace std;

class ticket
{
private:
	double price;
	string movie;
	int position;
	string room;
	string time;

public:
	double returnTicketPrice()
	{
		return price;
    }

	string returnTheCorrespondingMovie()
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
};