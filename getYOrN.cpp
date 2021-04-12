#include <iostream>
#include <climits>
#include "getYOrN.hpp"
using std::string;
using std::cout;
using std::cin;
using std::endl;

/*
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
| The program gets y or n from the user  |
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/


char getYOrN(string promptMessage, string failMessage)
{


	// Variables
	char code;
	bool valid = false;

	// Get and evaluate User Input
	cout << promptMessage << endl;
	do {
		cin >> code;
		code = tolower(code);
		if (code != YES_CHAR && code != NO_CHAR) 
		{
			cout << failMessage << endl;
		}
	} while (code != YES_CHAR && code != NO_CHAR);

	
	return code;
}