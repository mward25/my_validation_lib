#include <iostream>
#include <string>
#include <climits>
#include "getValidInt.hpp"
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


// Constants
const int BIGNUM = INT_MAX;
const char ENDLINE = '\n';

int getValidInt(string promptMessage, string failMessage, int minVal, int maxVal) {
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