#include"movie.h"
#define _CRT_SECURE_NO_WARNINGS
movie::movie()
{
	//cout << "construction called";
	string nameOfmovie = "0";
	int ID = 0;
	int priceParameter = 0;

	int publicTimeMonth = 0;
	int publicTimeDay = 0;
	int publicTimeHour = 0;
	int publicTimeMinute = 0;

	int positionOfmovie = 0;
	int lastingOfmovie = 0;
}

movie::~movie()
{

}

void movie::setNameOfmovie()
{
	cout << "Please enter movie name:" << endl;
	char s[40];
	cin >> s;
	this->nameOfmovie = s;
	cout << "the movie name your enter is:" << nameOfmovie << endl;
}

string movie::getNameOfmovie()
{
	return nameOfmovie;
}

int movie::inputID()
{
	cout << "Please intput the ID of movie" << endl;
	int a;
	while ((scanf_s("%d", &a) != 1) || (a<1) || (a>100))
	{
		fflush(stdin);
		printf("\nInvalid entry!");
		Sleep(2000);
		system("cls");
		cout << "Please intput the ID of movie" << endl;
	}
	ID = a;
	return ID;
}

void movie::getID()
{
	cout << ID << endl;
}

int movie::returnID()
{
	return ID;
}

int movie::getHour()
{
	return startTimeHour;
}

int movie::inputPriceParameter()
{
	int a;
	cout << "please enter the price parameter:" << endl;
	while ((scanf_s("%d", &a) != 1) || (a<1) || (a>100))
	{
		fflush(stdin);
		printf("\nInvalid entry!");
		Sleep(2000);
		system("cls");
		cout << "please enter the price parameter:" << endl;
	}
	priceParameter = a;
	return priceParameter;
}

int movie::locationOfmovie()
{
	cout << "please enter the location of movie:" << endl;
	int a;
	while ((scanf_s("%d", &a) != 1) || (a<1) || (a>8))
	{
		fflush(stdin);
		printf("\nInvalid entry!");
		Sleep(2000);
		cout << "please enter the location of movie:" << endl;
	}
	positionOfmovie = a;
	return positionOfmovie;
}

void movie::startTime()
{
	cout << "please enter the start time of movie:" << endl;
	cout << "Hour:";
	while ((scanf_s("%d", &startTimeHour) != 1) || (startTimeHour<1) || (startTimeHour>24))
	{
		fflush(stdin);
		printf("\nInvalid entry!");
		Sleep(2000);
		cout << "Hour:" << endl;
	}
}

void movie::showTime()
{
	cout << startTimeHour << endl;
}

void movie::getLocation()
{
	if (positionOfmovie == 1)
		cout << "smallroom 1" << endl;
	if (positionOfmovie == 2)
		cout << "smallroom 2" << endl;
	if (positionOfmovie == 3)
		cout << "smallroom 3" << endl;
	if (positionOfmovie == 4)
		cout << "smallroom 4" << endl;
	if (positionOfmovie == 5)
		cout << "smallroom 5" << endl;
	if (positionOfmovie == 6)
		cout << "bigroom 1" << endl;
	if (positionOfmovie == 7)
		cout << "bigroom 2" << endl;
	if (positionOfmovie == 8)
		cout << "bigroom 3" << endl;
}

string movie::returnRoom()
{
	string s;
	if (positionOfmovie == 1)
	{
		s = "smallroom 1";
		return s;
	}
	if (positionOfmovie == 2)
	{
		s = "smallroom 2";
		return s;
	}
	if (positionOfmovie == 3)
	{
		s = "smallroom 3";
		return s;
	}
	if (positionOfmovie == 4)
	{
		s = "smallroom 4";
		return s;
	}
	if (positionOfmovie == 5)
	{
		s = "smallroom 5";
		return s;
	}
	if (positionOfmovie == 6)
	{
		s = "bigroom 1";
		return s;
	}
	if (positionOfmovie == 7)
	{
		s = "bigroom 2";
		return s;
	}
	if (positionOfmovie == 8)
	{
		s = "bigroom 3";
		return s;
	}
}

string movie::seatStatus()
{
	string s;
	if (positionOfmovie == 1)
	{
		s = "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000";
		return s;
	}
	if (positionOfmovie == 2)
	{
		s = "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000";
		return s;
	}
	if (positionOfmovie == 3)
	{
		s = "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000";
		return s;
	}
	if (positionOfmovie == 4)
	{
		s = "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000";
		return s;
	}
	if (positionOfmovie == 5)
	{
		s = "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000";
		return s;
	}
	if (positionOfmovie == 6)
	{
		s = "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000";
		return s;
	}
	if (positionOfmovie == 7)
	{
		s = "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000";
		return s;
	}
	if (positionOfmovie == 8)
	{
		s = "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000";
		return s;
	}
}

float movie::generatePrice()
{
	float R, T, price;
	if (positionOfmovie == 1 || positionOfmovie == 2 || positionOfmovie == 3 || positionOfmovie == 4 || positionOfmovie == 5)
	{
		R = 1.2;
	}
	else
	{
		R = 1;
	}
	if (startTimeHour >= 12 && startTimeHour <= 24)
	{
		T = 1.2;
	}
	else
	{
		T = 1;
	}
	price = R * T*priceParameter;
	return price;
}

int movie::getLocation2()
{
	return positionOfmovie;
}

int movie::setTimeOfmovie()
{
	int a;
	cout << "plesae enter the lasting time of movie:" << endl;
	while ((scanf_s("%d", &a) != 1) || (a<0))
	{
		fflush(stdin);
		printf("\nInvalid entry!");
		Sleep(2000);
		cout << "plesae enter the lasting time of movie:" << endl;
	}
	lastingOfmovie = a;
	return lastingOfmovie;
}

int movie::getTimeOfmovie()
{
	return lastingOfmovie;
}
