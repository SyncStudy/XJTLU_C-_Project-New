// ConsoleApplication7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include "pch.h"
#include"sqlite3.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{

	char *s1;
	int ret1 = 0;//movie
	const char *select_query = "select * from users ";
	sqlite3 *db1 = 0;
    std::cout << "Hello World!\n"; 


	//打开数据库，不存在，创建数据库db
	ret1 = sqlite3_open("./Movie.accdb", &db1);
	if (ret1 != SQLITE_OK)
	{
		printf("can not open the database\n");
		return 1;
	}
	printf("linked Successful\n");
	//创建表
	ret1 = sqlite3_exec(db1, "create table if not exists users(movieId int(20), movieName varchar(20),priceFactorM int(500),lastingTime int(20) )", 0, 0, &s1);
	if (ret1 != SQLITE_OK)
	{
		sqlite3_close(db1);
		printf("create error\n");
		return 1;
	}
	printf("create success\n");

	//插入数据
	ret1 = sqlite3_exec(db1, "insert into users values(1,'iron man',20,2)", 0, 0, &s1);
	ret1 += sqlite3_exec(db1, "insert into users values(2,'shazan!',100,2)", 0, 0, &s1);
	ret1 += sqlite3_exec(db1, "insert into users values(3,'superman',44,2)", 0, 0, &s1);
	ret1 += sqlite3_exec(db1, "insert into users values(4,'test2',66,2)", 0, 0, &s1);
	if (ret1 != SQLITE_OK)
	{
		sqlite3_close(db1);
		printf("insert error\n");
		return 1;
	}
	printf("insert success\n");
	cout << "Recent movies are as follows" << endl;
	int nrow1, ncolumn1;
	char ** db1_result;
	ret1 = sqlite3_get_table(db1, select_query, &db1_result, &nrow1, &ncolumn1, &s1);
	if (ret1 != SQLITE_OK)
	{
		printf("select error\n");
		sqlite3_close(db1);
		//return 1;
	}
	int i1, j1;
	for (i1 = 0; i1 < (nrow1 + 1)*ncolumn1; i1 += ncolumn1)
	{
		for (j1 = 0; j1 < ncolumn1; j1++)
		{
			printf("%s  ", db1_result[i1 + j1]);
		}
		printf("\n");
	}

	sqlite3_close(db1);
	db1 = 0;
	int nrow, ncolumn;
	char ** db_result;
	cout << "Input your choice";
	int temp;
	cin >> temp;
	//std::string insertStr = "select movieName from users where movieId=(" + to_string(temp) + ")";
	const char *select_query1 = "select * from users ";
	//select_query1
	//std::string insertStr = "select movieName from users ";
	ret1 = sqlite3_get_table(db1, select_query1, &db_result, &nrow, &ncolumn, &s1);
	//char *sqliteInsert = const_cast<char*>(insertStr.c_str());
	printf("%s  ", db1_result[temp]);

	system("pause");
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
