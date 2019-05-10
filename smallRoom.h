#include<string.h>
#include<iostream>
using namespace std;

class smallRoom
{
private:
	bool seatState[300];
	string roomNumber;
	string movie;
	int seatNumber[300];

public:
	bool returnSeatState(int x)
	{
		return seatState[x];
	}

	string returnRoomNumber()
	{
		return roomNumber;
	}

	string returnMovie()
	{
		return movie;
	}

	int returnSeatNumber(int x)
	{
		return seatNumber[x];
	}

	void printOutState()
	{
		int i = 0, j = 0;
		while (i<300)
		{
			cout << seatState[i];
			if (i == 14 + 15 * j)
			{
				cout << endl;
				j++;
			}
			i++;
		}
	}
};