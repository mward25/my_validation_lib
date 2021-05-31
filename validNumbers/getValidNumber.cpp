#include <iostream>
#include <string>
#include "getValidNumber.hpp"

using std::cout;
using std::endl;
using std::cin;
using std::string;




/*
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
| This is a simple c++ function written by Miles Ward to get a valid integer from the User.    |
| The function takes 4 arguments, 1, the message the user is to be prompted with, 2, the       |
| message the user will receive if they did not enter a valid number, 3, the minimum value the |
| User can enter, and 4, the maximum value the User can enter.                                 |
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/


#ifdef USE_TEMPLATE_FOR_VALID

#endif

#ifdef USE_OVERLOAD_FOR_VALID
int getValidNumber(string promptMessage, string failMessage, int minVal, int maxVal) 
{
	// Output promptMessage to the console
	cout << promptMessage << endl;

	// Variables
	int inputInt = minVal -1;
	bool valid = true;
	do 
	{
			valid = true;
			// Get input
			cin >> inputInt;

			// If there is an error clear error message and flush the buffer
			if (cin.fail()) 
			{
				cin.clear();
				cin.ignore(BIGNUM, ENDLINE);

				// inputInt is set to a value that will ensure the loop will continue
				valid = false;

				// the User was wrong, so we tell them
				cout << failMessage << endl;
			}
			else if (inputInt < minVal || inputInt > maxVal) 
			{
				// the User was wrong, so we tell them
				cout << failMessage;
			}
		} while (inputInt < minVal || inputInt > maxVal || valid == false);
	// return the valid integer
	return inputInt;
}
/*
const double BIGNUM = double_MAX;
const string FAILMESSAGE = "Input Not Valid!, Please enter a valid double:";
const string PROMPTMESSAGE = "Please enter a valid double:";
const double MIN_double = -BIGNUM+1; // Minimum double the computer can hold
const double MAX_double = BIGNUM-1; // Maximum double the computer can hold
*/


double getValidNumber(string promptMessage, string failMessage, double minVal, double maxVal)
{

	// Output promptMessage to the console
	cout << promptMessage << endl;

	// Variables
	double inputDouble;
	bool valid = true;

	do 
	{
			// Get input
			cin >> inputDouble;

			// If there is an error clear error message and flush the buffer
			if (cin.fail()) 
			{
				cin.clear();
				cin.ignore(BIGNUM, ENDLINE);

				valid = false;
				

				// the User was wrong, so we tell them
				cout << failMessage << endl;
			}
			else if (inputDouble < minVal || inputDouble > maxVal) 
			{
				// the User was wrong, so we tell them
				cout << failMessage;
				valid = false;
			}
			else 
			{
				valid = true;
			}
	} while (inputDouble < minVal || inputDouble > maxVal || valid == false);

	// return the valid double
	return inputDouble;
}




float getValidNumber(string promptMessage, string failMessage, float minVal, float maxVal)
{

	// Output promptMessage to the console
	cout << promptMessage << endl;

	// Variables
	float inputFloat;
	bool valid = true;

	do 
	{
			// Get input
			cin >> inputFloat;

			// If there is an error clear error message and flush the buffer
			if (cin.fail()) 
			{
				cin.clear();
				cin.ignore(BIGNUM, ENDLINE);

				valid = false;
				

				// the User was wrong, so we tell them
				cout << failMessage << endl;
			}
			else if (inputFloat < minVal || inputFloat > maxVal) 
			{
				// the User was wrong, so we tell them
				cout << failMessage;
				valid = false;
			}
			else 
			{
				valid = true;
			}
	} while (inputFloat < minVal || inputFloat > maxVal || valid == false);

	// return the valid float
	return inputFloat;
}
#endif