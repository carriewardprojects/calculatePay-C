// A simple C++ program that calulates the user's pay
// Carrie Ward 08/16/17

#include <iostream>
using namespace std;


int main()
{
	
	double hours, rate, pay;
	
	// Obtain the number of hours worked
	cout << "\nEnter the number of hours you worked: ";
	cin >> hours;

	// Obtain the hourly pay rate
	cout << "\nEnter the amount you are paid an hour: ";
	cin >> rate;

	// Caluclate the pay
	pay = hours * rate;

	// Display the results
	cout << "\nYou have earned $" << pay << "\n" << endl;

	return 0;
}

