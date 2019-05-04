#include"Admin.h"
#include<iostream>
#include<string>
#include"customer.h"
#include"ticket.h"
using namespace std;
void Admin::changeMovieInfo(int movieId, string changedName,int changedPrice, int changedPosition,)
{

};//setter
void Admin::changeRoomInfo(int roomId)
{

};
void Admin::changeCustomerInfo(int customerId)
{
};
string Admin::viewMovieInfo(int movieId)
{
};//return a string or related info
string viewRoomInfo(int roomId) 
{
};
string viewCustomerInfo(int customerId)
{
};
void deleteMovieInfo(int movieId)
{
};//delete
void deleteRoomInfo(int roomId)
{
};
void deleteCustomerInfo(int customerId) 
{
};
string viewMovieInfo(string inputMovieKey)
{
};//use the keywords to find the movie name
string viewRoomInfo(string inputRoomKey) 
{
};
string viewCustomerInfo(string inputCustomerKey)
{
};
void displayMovieInfo(int movieId)
{
};//Cout standardized output
void displayRoomInfo(int roomId)
{
};
void displayCustomerInfo(int customerId)
{
};
void addNewMovie(int movieId, string movieName, int priceFactorM, int OnlineTime)
{
};//Add a new movie does not need the showing room info
void addNewCustomer(int customerId, string customerName, int customerPhoneNum)
{
};
int retrieveTotalCustomerPerMovie(int movieId)
{
};
int retrieveTotalCustomerAllMovie()
{
};
int retrieveTotalCustomerInPeriod(int startingTime, int endingTime)
{
};//the time format is not specified
int retrieveTotalIncomePerMovie(int movieId)
{
};
int retrieveTotalIncomeAllMovie()
{
};
int retrieveTotalIncomeInPeriod(int startingTime, int endingTime)
{
};//the time format is not specified
void manageMovie()
{
};