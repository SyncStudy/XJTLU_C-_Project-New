#include<time.h>
#include<iostream>
#include<iomanip>
#include<windows.h>
#include<fstream>
#include<string>
using namespace std;

class moive
{
public:
	moive();	
	void setNameOfMoive();
	string getNameOfMoive();
	int inputID();		//input the moive ID
	int getID();
	int inputPriceParameter();		//the price parameter
	int locationOfMoive();		//which room has this moive
	int setTimeOfMoive();
	void startTime();		//开始上映的时间

	
	void showTime();
	void getLocation();
	int getTimeOfMoive();
private:
	string nameOfMoive;
	int ID;
	int priceParameter;
	//private about the time of moive
	int startTimeMonth;
	int startTimeDay;
	int startTimeHour;
	int startTimeMinute;
	//////////////////////////////////
	int positionOfMoive;
	int lastingOfMoive;
};

moive::moive()
{
	//cout << "construction called";
	string nameOfMoive = "0";
	int ID = 0;
	int priceParameter = 0;

	int publicTimeMonth = 0;
	int publicTimeDay = 0;
	int publicTimeHour = 0;
	int publicTimeMinute = 0;

	int positionOfMoive = 0;
	int lastingOfMoive = 0;
}

void moive::setNameOfMoive()
{
	cout << "Please enter moive name:" << endl;
	char s[50];
	cin >> s;
	this->nameOfMoive = s;
	cout << "the moive name your enter is:" << nameOfMoive << endl;
}

string moive::getNameOfMoive()
{
	return nameOfMoive;
}

int moive::inputID()
{
	cout << "Please intput the ID of moive" << endl;
	cin >> ID;
	if ((ID<1) || (ID>1000))
	{
		fflush(stdin);
		cout << "\nInvalid input" << endl;
		Sleep(1000);
		//system("cls");
		//cout << "Please intput the ID of moive" << endl;
	}
	return ID;
}

int moive::getID()
{
	return ID;
}

int moive::inputPriceParameter()
{
	int a;
	cout << "please enter the price parameter:" << endl;
	cin >> a;
	if ((a<20) || (a>100))
	{
		fflush(stdin);
		//cout << "please enter the price parameter:" << endl;
	}
	priceParameter = a;
	return priceParameter;
}

int moive::locationOfMoive()
{
	cout << "please enter the location of moive:" << endl;
	int a;
	cin >> a;
	if ((a<1) || (a>8))
	{
		fflush(stdin);
		//cout << "please enter the location of moive:" << endl;
	}
	positionOfMoive = a;
	return positionOfMoive;
}

void moive::startTime()
{
	cout << "please enter the start time of moive:" << endl;
	cout << "Month:";
	cin >> startTimeMonth;
	cout << "Day:";
	cin >> startTimeDay;
	cout << "Hour:";
	cin >> startTimeHour;
	cout << "Minute:";
	cin >> startTimeMinute;
}

void moive::showTime()
{
	cout << startTimeMonth << "/"
		<< startTimeDay << "\t"
		<< startTimeHour << ":"
		<< startTimeMinute << endl;
}

void moive::getLocation()
{
	if (positionOfMoive == 1)
		cout << "smallroom 1" << endl;
	if (positionOfMoive == 2)
		cout << "smallroom 2" << endl;
	if (positionOfMoive == 3)
		cout << "smallroom 3" << endl;
	if (positionOfMoive == 4)
		cout << "smallroom 4" << endl;
	if (positionOfMoive == 5)
		cout << "smallroom 5" << endl;
	if (positionOfMoive == 6)
		cout << "bigroom 1" << endl;
	if (positionOfMoive == 7)
		cout << "bigroom 2" << endl;
	if (positionOfMoive == 8)
		cout << "bigroom 3" << endl;
}

int moive::setTimeOfMoive()
{
	int a;
	cout << "plesae enter the lasting time of moive:" << endl;
	cin >> a;
	lastingOfMoive = a;
	return lastingOfMoive;
}

int moive::getTimeOfMoive()
{
	return lastingOfMoive;
}

void administor(moive *mvArray);
void customer(moive *mvArray, int n);

int main()
{
	moive mvArray[50];
	bool flag = true;
	while (flag == true)
	{
		int y;
		cout << "what is your identity?\n\t";
		cout << "1. administrator\n\t2. customer\n\t3. exit\n";
		cin >> y;
		if ((y<1) || (y>3))
		{
			fflush(stdin);
			cout << "\nInvalid input" << endl;
			Sleep(1000);
			system("cls");
		}
		switch (y)
		{
		case 1:
			administor(mvArray);
			break;

		case 2:
			int n = 50;
			customer(mvArray, n);
			break;

		case 3:
			flag = false;

		}
	}
	return 0;
}

void administor(moive *mvArray)
{
	int n = 0;
	bool flag = true;
	while (flag == true)
	{
		system("cls");
		moive();
		mvArray[n].~moive();
		mvArray[n].setNameOfMoive();
		mvArray[n].inputID();
		mvArray[n].inputPriceParameter();
		mvArray[n].locationOfMoive();
		mvArray[n].startTime();
		
		n++;

		cout << "do you want to add new moive?" << endl;
		cout << "1.YES\t\n2.NO\t\n";
		int i;	cin >> i;
		if (i == 1)
		{
			flag = true;
		}
		else if(i==2)
		{
			system("cls");
			cout << "Thank you for your using" << endl;
			flag = false;
		}
	}
}

void customer(moive *mvArray,int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << mvArray[i].getNameOfMoive() << endl;
		cout << mvArray[i].getID() << endl;
		mvArray[i].getLocation();
		mvArray[i].showTime();
		cout << "***********************************************************" << endl;
	}
}