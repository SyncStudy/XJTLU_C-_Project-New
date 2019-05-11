#define _CRT_SECURE_NO_DEPRECATE

// ConsoleApplication6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "pch.h"
#include <iostream>
#include"sqlite3.h"
#include<iostream>
//#include"stafx.h"
#include<string>
using namespace std;




int main()
{
	 
    std::cout << "Hello World!\n"; 
	const char *select_query = "select * from users ";
	int ret = 0;//customer
	int ret1 = 0;//movie
	int ret2 = 0;//timeSlotTable
	sqlite3 *db = 0;
	sqlite3 *db1 = 0;
	sqlite3 *db2 = 0;
	char *s;
	char *s1;
	char *s2;
	//Customer Database


	//打开数据库，不存在，创建数据库db
	ret = sqlite3_open("./Customer", &db);
	if (ret != SQLITE_OK)
	{
		printf("can not open the database\n");
		return 1;
	}
	printf("linked Successful\n");

	//创建表
	ret = sqlite3_exec(db, "create table if not exists users(PhoneNum int(20), Password varchar(20))", 0, 0, &s);
	if (ret != SQLITE_OK)
	{
		sqlite3_close(db);
		printf("create error\n");
		return 1;
	}
	printf("create success\n");

	//插入数据
	long test = 123221562;
	
	std::string insertStr = "insert into users values(" + std::to_string(test) + "," + std::to_string(test) + ")";
	char *sqliteInsert = const_cast<char*>(insertStr.c_str());
	//
	ret = sqlite3_exec(db, "insert into users values(13863157299,'tets3')", 0, 0, &s);
	ret += sqlite3_exec(db, "insert into users values(18663118927,'bestmyself1!')", 0, 0, &s);
	ret += sqlite3_exec(db, "insert into users values(15222633259,'test1')", 0, 0, &s);
	ret += sqlite3_exec(db, "insert into users values(18526325595,'test2')", 0, 0, &s);
	ret += sqlite3_exec(db, "insert into users values(18552266522,'test444')", 0, 0, &s);
	ret += sqlite3_exec(db, sqliteInsert, 0, 0, &s);

	if (ret != SQLITE_OK)
	{
		sqlite3_close(db);
		printf("insert error\n");
		return 1;
	}
	printf("insert success\n");

	//删除
	ret = sqlite3_exec(db, "delete from users where PhoneNum=15222633259", 0, 0, &s);
	if (ret != SQLITE_OK)
	{
		sqlite3_close(db);
		printf("delete error\n");
		return 1;
	}
	printf("delete success\n");

	//更新
	ret = sqlite3_exec(db, "update users set Password='new pw' where PhoneNum=15222633259", 0, 0, &s);
	if (ret != SQLITE_OK)
	{
		sqlite3_close(db);
		printf("update error\n");
		return 1;
	}
	printf("update success\n");



	//查询
	int nrow, ncolumn;
	char ** db_result;
	ret = sqlite3_get_table(db, select_query, &db_result, &nrow, &ncolumn, &s);
	if (ret != SQLITE_OK)
	{
		printf("select error\n");
		sqlite3_close(db);
		return 1;
	}
	int i, j;
	for (i = 0; i < (nrow + 1)*ncolumn; i += ncolumn)
	{
		for (j = 0; j < ncolumn; j++)
		{
			printf("%s  ", db_result[i + j]);
		}
		printf("\n");
	}
	sqlite3_close(db);
	db = 0;




	//打开数据库，不存在，创建数据库db
	ret1 = sqlite3_open("./Movie", &db1);
	if (ret1 != SQLITE_OK)
	{
		printf("can not open the database\n");
		return 1;
	}
	printf("linked Successful\n");
	//创建表
	ret1= sqlite3_exec(db1, "create table if not exists users(movieId int(20), movieName varchar(20),priceFactorM int(500),lastingTime int(20) )", 0, 0, &s1);
	if (ret1!= SQLITE_OK)
	{
		sqlite3_close(db1);
		printf("create error\n");
		return 1;
	}
	printf("create success\n");

	//插入数据
	ret1= sqlite3_exec(db1, "insert into users values(1,'iron man',20,2)", 0, 0, &s1);
	ret1+= sqlite3_exec(db1, "insert into users values(2,'shazan!',100,2)", 0, 0, &s1);
	ret1+= sqlite3_exec(db1, "insert into users values(3,'superman',44,2)", 0, 0, &s1);
	ret1+= sqlite3_exec(db1, "insert into users values(4,'test2',66,2)", 0, 0, &s1);
	if (ret1!= SQLITE_OK)
	{
		sqlite3_close(db1);
		printf("insert error\n");
		return 1;
	}
	printf("insert success\n");

	//删除
	ret1= sqlite3_exec(db1, "delete from users where movieId=1", 0, 0, &s1);
	if (ret1!= SQLITE_OK)
	{
		sqlite3_close(db1);
		printf("delete error\n");
		return 1;
	}
	printf("delete success\n");

	//更新
	ret1= sqlite3_exec(db1, "update users set movieName='revenager' where movieId=2", 0, 0, &s1);
	if (ret1!= SQLITE_OK)
	{
		sqlite3_close(db1);
		printf("update error\n");
		return 1;
	}
	printf("update success\n");



	//查询
	int nrow1, ncolumn1;
	char ** db1_result;
	ret1= sqlite3_get_table(db1, select_query, &db1_result, &nrow1, &ncolumn1, &s1);
	if (ret1!= SQLITE_OK)
	{
		printf("select error\n");
		sqlite3_close(db1);
		return 1;
	}
	int i1, j1;
	for (i1 = 0;i1 < (nrow1 + 1)*ncolumn1;i1 += ncolumn1)
	{
		for (j1 = 0; j1 < ncolumn1; j1++)
		{
			printf("%s  ", db1_result[i1 + j1]);
		}
		printf("\n");
	}
	
	sqlite3_close(db1);
	db1 = 0;

	//timeSlot
	//打开数据库，不存在，创建数据库db
	ret2 = sqlite3_open("./movieTimeSlot", &db2);
	if (ret2 != SQLITE_OK)
	{
		printf("can not open the database\n");
		return 1;
	}
	printf("linked Successful\n");
	//创建表
	ret2 = sqlite3_exec(db2, "create table if not exists users(movieId int(20), movieName varchar(20),lastingTime int(20), startingTime text, Room varchar(70) )", 0, 0, &s2);
	if (ret2 != SQLITE_OK)
	{
		sqlite3_close(db2);
		printf("create error\n");
		return 1;
	}
	printf("create success\n");

	//插入数据
	ret2 = sqlite3_exec(db2, "insert into users values(1,'iron man',2,datetime('now'),'S1S2S3S4S5B1B2B3')", 0, 0, &s2);
	ret2 += sqlite3_exec(db2, "insert into users values(2,'shazan!',2,datetime('now'),'S1S2S3S4S5B1B2B3')", 0, 0, &s2);
	ret2 += sqlite3_exec(db2, "insert into users values(3,'superman',2,datetime('now'),'S1S2S3S4S5B1B2B3')", 0, 0, &s2);
	ret2 += sqlite3_exec(db2, "insert into users values(4,'test2',2,datetime('now'),'S1S2S3S4S5B1B2B3')", 0, 0, &s2);
	if (ret2 != SQLITE_OK)
	{
		sqlite3_close(db2);
		printf("insert error\n");
		return 1;
	}
	printf("insert success\n");

	//删除
	ret2 = sqlite3_exec(db2, "delete from users where movieId=1", 0, 0, &s2);
	if (ret2 != SQLITE_OK)
	{
		sqlite3_close(db2);
		printf("delete error\n");
		return 1;
	}
	printf("delete success\n");

	//更新
	ret2 = sqlite3_exec(db2, "update users set movieName='revenager' where movieId=2", 0, 0, &s2);
	if (ret2 != SQLITE_OK)
	{
		sqlite3_close(db2);
		printf("update error\n");
		return 1;
	}
	printf("update success\n");



	//查询
	int nrow2, ncolumn2;
	char ** db2_result;
	ret2 = sqlite3_get_table(db2, select_query, &db2_result, &nrow2, &ncolumn2, &s2);
	if (ret2 != SQLITE_OK)
	{
		printf("select error\n");
		sqlite3_close(db2);
		return 1;
	}
	int i2, j2;
	for (i2 = 0; i2 < (nrow2 + 1)*ncolumn2; i2 += ncolumn2)
	{
		for (j2 = 0; j2 < ncolumn2; j2++)
		{
			printf("%s  ", db2_result[i2 + j2]);
		}
		printf("\n");
	}

	sqlite3_close(db2);
	db2 = 0;
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
