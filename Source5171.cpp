#include<time.h>
#include<iostream>
#include<iomanip>
#include<windows.h>
#include<fstream>
#include<string>
#include<stdio.h>
using namespace std;

class moive
{
public:
	moive();
	~moive();
	void setNameOfMoive();
	string getNameOfMoive();
	int inputID();		//input the moive ID
	void getID();
	int inputPriceParameter();		//the price parameter
	int locationOfMoive();		//which room has this moive
	int setTimeOfMoive();
	void startTime();		//开始上映的时间


	void showTime();
	void getLocation();
	void getTimeOfMoive();
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

moive::~moive()
{

}

void moive::setNameOfMoive()
{
	cout << "Please enter moive name:" << endl;
	char s[40];
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
	int a;
	while ((scanf("%d", &a) != 1) || (a<1) || (a>100))
	{
		fflush(stdin);
		printf("\nInvalid entry!");
		Sleep(2000);
		system("cls");
		cout << "Please intput the ID of moive" << endl;
	}
	ID = a;
	return ID;
}

void moive::getID()
{
	cout << ID << endl;
}

int moive::inputPriceParameter()
{
	int a;
	cout << "please enter the price parameter:" << endl;
	while ((scanf("%d", &a) != 1) || (a<1) || (a>100))
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

int moive::locationOfMoive()
{
	cout << "please enter the location of moive:" << endl;
	int a;
	while ((scanf("%d", &a) != 1) || (a<1) || (a>8))
	{
		fflush(stdin);
		printf("\nInvalid entry!");
		Sleep(2000);
		cout << "please enter the location of moive:" << endl;
	}
	positionOfMoive = a;
	return positionOfMoive;
}

void moive::startTime()
{
	cout << "please enter the start time of moive:" << endl;
	cout << "Month:";
	while ((scanf("%d", &startTimeMonth) != 1) || (startTimeMonth<1) || (startTimeMonth>12))
	{
		fflush(stdin);
		printf("\nInvalid entry!");
		Sleep(2000);
		cout << "Month:" << endl;
	}
	cout << "Day:";
	while ((scanf("%d", &startTimeDay) != 1) || (startTimeDay<1) || (startTimeDay>30))
	{
		fflush(stdin);
		printf("\nInvalid entry!");
		Sleep(2000);
		cout << "Day:" << endl;
	}
	cout << "Hour:";
	while ((scanf("%d", &startTimeHour) != 1) || (startTimeHour<1) || (startTimeHour>24))
	{
		fflush(stdin);
		printf("\nInvalid entry!");
		Sleep(2000);
		cout << "Hour:" << endl;
	}
	cout << "Minute:";
	while ((scanf("%d", &startTimeMinute) != 1) || (startTimeMinute<1) || (startTimeMinute>60))
	{
		fflush(stdin);
		printf("\nInvalid entry!");
		Sleep(2000);
		cout << "Minute:" << endl;
	}
}

void moive::showTime()
{
	cout << startTimeMonth << "/"
		<< startTimeDay << "   "
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
	while ((scanf("%d", &a) != 1) || (a<0))
	{
		fflush(stdin);
		printf("\nInvalid entry!");
		Sleep(2000);
		cout << "plesae enter the lasting time of moive:" << endl;
	}
	lastingOfMoive = a;
	return lastingOfMoive;
}

void moive::getTimeOfMoive()
{
	cout << "the length of the moive:" << lastingOfMoive << endl;
}

void administor(moive *mvArray, int &f);
void customer(moive *mvArray, int n);
void deletemoive(moive *mvArray, int a, int &f);

int main()
{
	moive mvArray[10];
	bool flag = true;
	int f = 0;
	while (flag == true)
	{
		int y;
		cout << "what is your identity?\n\t";
		cout << "1. administrator\n\t2. customer\n\t3. exit\n";
		while ((scanf("%d", &y) != 1) || (y<1) || (y>3))
		{
			fflush(stdin);
			printf("\nInvalid entry!");
			Sleep(2000);
			system("cls");
			cout << "what is your identity?\n\t";
			cout << "1. administrator\n\t2. customer\n\t3. exit\n";
		}
		switch (y)
		{
		case 1:
			system("cls");
			administor(mvArray, f);
			break;

		case 2:
			system("cls");
			customer(mvArray, f);
			break;

		case 3:
			flag = false;

		}
	}

	cout << "Thank you for your using" << endl;
	return 0;
}

void administor(moive *mvArray, int &f)
{
	bool flag = true;
	int option;
	while (flag == true)
	{
		system("cls");
		cout << "What do you want to do?\n\t";
		cout << "1. surf all the moive\n\t2. add new moive\n\t3. delete moive\n\t4. exit\n";
		cin >> option;
		switch (option)
		{
		case 1:
			system("cls");
			for (int i = 0; i < f; i++)
			{
				cout << mvArray[i].getNameOfMoive() << endl;
				mvArray[i].getID();
				mvArray[i].getLocation();
				mvArray[i].showTime();
				mvArray[i].getTimeOfMoive();
				cout << "***********************************************************" << endl;

			}
			system("pause");
			break;

		case 2:
		{
				  bool flag1 = true;
				  while (flag1 == true)
				  {
					  system("cls");
					  cout << "moive:" << f + 1 << endl;
					  moive();
					  mvArray[f].~moive();
					  mvArray[f].setNameOfMoive();
					  mvArray[f].inputID();
					  mvArray[f].inputPriceParameter();
					  mvArray[f].locationOfMoive();
					  mvArray[f].startTime();
					  mvArray[f].setTimeOfMoive();

					  f++;

					  cout << "do you want to add new moive?" << endl;
					  cout << "1.YES\t\n2.NO\t\n";
					  int i;	cin >> i;
					  if (i == 1)
					  {
						  flag1 = true;
					  }
					  else if (i == 2)
					  {
						  system("cls");
						  flag1 = false;
					  }
				  }
		}

			break;

		case 3:
		{
				  cout << "please input the number of the moive:" << endl;
				  int a;
				  cin >> a;
				  deletemoive(mvArray, a - 1, f);
				  break;
		}

		case 4:
			flag = false;
			system("cls");
			break;
		}
	}
}

void customer(moive *mvArray, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << mvArray[i].getNameOfMoive() << endl;
		mvArray[i].getID();
		mvArray[i].getLocation();
		mvArray[i].showTime();
		mvArray[i].getTimeOfMoive();
		cout << "***********************************************************" << endl;
		Sleep(2000);
	}
	system("pause");
}

void deletemoive(moive *mvArray, int a, int &f)
{
	
	if (a <= f)
	{
		while (a<=f)
		{
			mvArray[a] = mvArray[a + 1];
			a++;
		}
		f--;
	}
	else{
		cout << "There is not so many moives" << endl;
		system("cls");
	}
}
