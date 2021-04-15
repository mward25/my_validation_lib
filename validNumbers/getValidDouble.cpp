#include <iostream>
#include <string>
#include <climits>
#include "getValidDouble.hpp"


/*
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
| This is a simple c++ function written by Miles Ward to get a valid double from the User.       |
| The function takes 4 arguments, 1, the message the user is to be prompted with, 2, the message |
| the user will receive if they did not enter a valid number, 3, the minimum value the User can  |
| enter, and 4, the maximum value the User can enter.                                            |
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/


// note, constants are in the header file

using std::string;
using std::endl;
using std::cout;
using std::cin;

const char ENDLINE = '\n';
const int BIGNUM = INT_MAX;
/*
const double BIGNUM = double_MAX;
const string FAILMESSAGE = "Input Not Valid!, Please enter a valid double:";
const string PROMPTMESSAGE = "Please enter a valid double:";
const double MIN_double = -BIGNUM+1; // Minimum double the computer can hold
const double MAX_double = BIGNUM-1; // Maximum double the computer can hold
*/


double getValidDouble(string promptMessage, string failMessage, double minVal, double maxVal)
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