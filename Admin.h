#pragma once
#include<string>
#include <ctime>
using namespace std;
class Admin {

	
	//difference between the view and the display
	//view return a string and display have the specific structure for viewing
public:
	void changeMovieInfo(int movieId);//setter
	void changeRoomInfo(int roomId);
	void changeCustomerInfo(int customerId);
	string viewMovieInfo(int movieId);//return a string or related info
	string viewRoomInfo(int roomId);
	string viewCustomerInfo(int customerId);
	void deleteMovieInfo(int movieId);//delete
	void deleteRoomInfo(int roomId);
	void deleteCustomerInfo(int customerId);
	string viewMovieInfo(string inputMovieKey);//use the keywords to find the movie name
	string viewRoomInfo(string inputRoomKey);
	string viewCustomerInfo(string inputCustomerKey);
	void displayMovieInfo(int movieId);//Cout standardized output
	void displayRoomInfo(int roomId);
	void displayCustomerInfo(int customerId);
	void addNewMovie(int movieId, string movieName, int priceFactorM, int OnlineTime);//Add a new movie does not need the showing room info
	void addNewCustomer(int customerId, string customerName, int customerPhoneNum);
	int retrieveTotalCustomerPerMovie(int movieId);
	int retrieveTotalCustomerAllMovie();
	int retrieveTotalCustomerInPeriod(int startingTime, int endingTime);//the time format is not specified
	int retrieveTotalIncomePerMovie(int movieId);
	int retrieveTotalIncomeAllMovie();
	int retrieveTotalIncomeInPeriod(int startingTime, int endingTime);//the time format is not specified
	void manageMovie();
};