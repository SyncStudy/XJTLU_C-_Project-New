#include<string.h>
#include<iostream>
using namespace std;

class bigRoom
{
private:
	bool seatState[750]{0};
	string roomNumber;
	string movie;
	int seatNumber[750];

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
		while (i<750)
		{
			cout << seatState[i];
			if (i == 24 + 25 * j)
			{
				cout << endl;
				j++;
			}
			i++;
		}
	}
};