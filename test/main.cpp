#include"movie.h"
#include"sqlite3.h"
#include"customer.h"
#define _CRT_SECURE_NO_WARNINGS
void administor(movie &Temp, vector<movie> &A);
const char *select_query = "SELECT * from users";
const char *select_query1 = "SELECT startingtime, lastingtime, room from users";

int nrow, ncolumn;
char ** db_result;
int ret;
sqlite3 *db = 0;
char *s = 0;

void compare(movie &Temp, vector<string> room, vector<int> startingTime, vector<int> lastingTime)
{
here:
	for (int i = 0; i < room.size(); i++)
	{
		if (room[i] == Temp.returnRoom())
		{
			if (startingTime[i] <= Temp.getHour() && Temp.getHour() < (startingTime[i] + lastingTime[i]))
			{
				cout << "Occupied time, invalid plan" << endl;
				fflush(stdin);
				Temp.startTime();
				goto here;
			}
			else if (startingTime[i] == Temp.getHour())
			{
				cout << "Occupied time, invalid plan" << endl;
				fflush(stdin);
				Temp.startTime();
				goto here;
			}
		}
	}
}

int main()
{
	ret = sqlite3_open("./NEW.db", &db);
	ret = sqlite3_exec(db, "create table if not exists movieTimeSlot(ticketId int(20), movieId int(20), movieName varchar(20),room varchar(200), startingTime int(20), lastingTime int(20),SeatStatus varchar(750), price real(500) )", 0, 0, &s);
	ret = sqlite3_exec(db, "create table if not exists movieStatics(movieName varchar(20), price real(500) )", 0, 0, &s);

	
	movie Temp;
	vector<movie> A;
	customer TempC;
	bool flag = true;
	while (flag == true)
	{
		int y;
		cout << "what is your identity?\n\t";
		cout << "1. administrator\n\t2. customer\n\t3. exit\n";
		while ((scanf_s("%d", &y) != 1) || (y < 1) || (y > 3))
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
			administor(Temp, A);
			break;

		case 2:
			system("cls");
			TempC.buyTicket();
			break;

		case 3:
			flag = false;

		}
	}

	cout << "Thank you for your using" << endl;
	return 0;
}

void administor(movie &Temp, vector<movie> &A)
{
	bool flag = true;
	int option;
	while (flag == true)
	{
		system("cls");
		cout << "What do you want to do?\n\t";
		cout << "1. surf all the movie\n\t2. add new movie\n\t3. delete movie\n\t4. exit\n";
		while ((scanf_s("%d", &option) != 1) || (option < 1) || (option > 4))
		{
			fflush(stdin);
			printf("\nInvalid entry!");
			Sleep(2000);
			system("cls");
			cout << "What do you want to do?\n\t";
			cout << "1. surf all the movie\n\t2. add new movie\n\t3. delete movie\n\t4. exit\n";
		}
		switch (option)
		{
		case 1:
			system("cls");
			//Display all movie arrangement

			cout << "Recent movies are as follows" << endl;
			
			if (ret != SQLITE_OK)
			{
				sqlite3_close(db);
				printf("create error\n");
				//return 1;
			}
			printf("create success\n");
			ret = sqlite3_get_table(db, select_query, &db_result, &nrow, &ncolumn, &s);
			if (ret != SQLITE_OK)
			{
				printf("select error\n");
				sqlite3_close(db);
				//return 1;
			}
			int i1, j1;
			for (i1 = 0; i1 < (nrow + 1)*ncolumn; i1 += ncolumn)
			{
				for (j1 = 0; j1 < ncolumn; j1++)
				{
					printf("%s  ", db_result[i1 + j1]);
				}
				printf("\n");
			}
			
			system("pause");
			break;

		case 2:
		{
			bool flag1 = true;
			while (flag1 == true)
			{
				system("cls");
				cout << "movie:" << A.size() + 1 << endl;
				movie();
				Temp.~movie();
				Temp.setNameOfmovie();
				Temp.inputID();
				Temp.inputPriceParameter();
				Temp.locationOfmovie();
				Temp.startTime();
				
				vector<string> vara;
				vector<string> varb;
				vector<string>varc;
				vector<int> IVera;
				vector<int> IVerb;
				char *s1=0;
				int ret1 = 0;//movie
				
				sqlite3 *db1 = 0;
				char ** db1_result;
				int nrow1, ncolumn1;
				
			
				ret1 = sqlite3_get_table(db1, select_query1, &db1_result, &nrow1, &ncolumn1, &s1);
				for (int i = 0; i < 1; i++)
				{
					
					vara.push_back(db1_result[3*i+3]);
					varb.push_back(db1_result[3 * i + 4]);
					varc.push_back(db1_result[3 * i + 5]);
				}
			
				for (int i = 0; i < 3; i++)
				{
					cout << vara[i]<<"\n";
					IVera.push_back(stoi(vara[i]));
					cout << IVera[i];
					IVerb.push_back(stoi(varb[i]));
					cout << IVerb[i];
					cout << varc[i] << "\n";
				}
				
				compare(Temp, varc, IVera, IVerb);
				Temp.setTimeOfmovie();
				

				//Store Temp into database
				//long test = 123221562;
				ret1 = sqlite3_open("./NEW.db", &db1);
				//Temp.getNameOfmovie(),Temp.returnRoom(),Temp.getHour(),Temp.getTimeOfmovie(),Temp.seatStatus(),Temp.generatePrice()
				//std::string insertStr = "insert into users values(" + std::to_string(test) + "," + std::to_string(test) + ")";
				string stest= Temp.getNameOfmovie();
				std::string insertStr = "insert into users values("+to_string(Temp.returnID())+",'" + stest + "','" + Temp.returnRoom() + "'," + to_string(Temp.getHour()) + "," + to_string(Temp.getTimeOfmovie()) + ",'" + Temp.seatStatus() + "'," + to_string(Temp.generatePrice()) + ")";
				char *sqliteInsert = const_cast<char*>(insertStr.c_str());//怎么把这个字母写进去？
				ret1 = sqlite3_exec(db1, sqliteInsert, 0, 0, &s1);

				if (ret1 != SQLITE_OK)
				{
					sqlite3_close(db1);
					printf("insert error\n");
					cout << s1;
					//return 1;
				}
				printf("insert success\n");

				//movieID = Temp.returnID()
				//movieName = Temp.getNameOfmovie()
				//room = Temp.returnRoom()
				//startingTime = Temp.getHour()
				//lastingTime = Temp.getTimeOfmovie()
				//seatStatus = Temp.seatStatus()
				//Price = Temp.generatePrice()



				cout << "do you want to add new movie?" << endl;
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
			cout << "please input the movieId of the movie:" << endl;
			int a;
			cin >> a;
			// a is the index
			// Delete the movie arrangement whose index is a
			string deleteStr = "delete from users where movieId =(" + to_string(a) + ")";
			char *delete_query2 = const_cast<char*>(deleteStr.c_str());
			int ret2 = sqlite3_exec(db, delete_query2, 0, 0, &s);
			if (ret2 != SQLITE_OK)
			{
				sqlite3_close(db);
				printf("delete error\n");
				//return 1;
			}
			printf("delete success\n");
			system("pause");
			break;
		}
		case 4:

			break;
		case 5:
			flag = false;
			system("cls");
			break;
		}
	}
}



//Create a new table to store each movie's income
