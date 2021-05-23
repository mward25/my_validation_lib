#include "getValidOption.hpp"
#include <string>
#include <iostream>
#include <cctype>
using std::string;
using std::cout;
using std::cin;
using std::endl;

bool simpleLinearSearch(const char searchArray[], int sizeOfSearchArray, char searchQuiry, bool caseSensetive)
{
	bool returnValue = false;
	for (int i = 0; i < sizeOfSearchArray && returnValue == false; ++i)
	{
		// we use isdigit here because you cannot make a number lowercase
		if (caseSensetive == true || isdigit(searchQuiry))
		{
			if (searchArray[i] == searchQuiry)
			{
				// cout << "we found " << searchQuiry << " at location " << i << endl;
				returnValue = true;
			}
		}
		else
		{
			if (tolower(searchArray[i]) == searchQuiry)
			{
				// cout << "we found " << searchQuiry << " at location " << i << endl;
				returnValue = true;
			}	
		}
	}
	return returnValue;
}

bool simpleLinearSearch(const string searchArray[], int sizeOfSearchArray, string searchQuiry, bool caseSensetive)
{
	bool returnValue = false;
	for (int i = 0; i < sizeOfSearchArray && returnValue == false; ++i)
	{
		// we use isdigit here because you cannot make a number lowercase
		if (caseSensetive)
		{
			if (searchArray[i] == searchQuiry)
			{
				// cout << "we found " << searchQuiry << " at location " << i << endl;
				returnValue = true;
			}
		}
		else
		{
			if (makeStringLowercase(searchArray[i]) == searchQuiry)
			{
				// cout << "we found " << searchQuiry << " at location " << i << endl;
				returnValue = true;
			}
		}

		/*if (caseSensetive == true || isdigit(searchQuiry))
		{
			if (searchArray[i] == searchQuiry)
			{
				// cout << "we found " << searchQuiry << " at location " << i << endl;
				returnValue = true;
			}
		}
		else
		{
			if (tolower(searchArray[i]) == searchQuiry)
			{
				// cout << "we found " << searchQuiry << " at location " << i << endl;
				returnValue = true;
			}	
		}*/
	}
	return returnValue;
}

string makeStringLowercase(const string &inputString)
{
	string buffer = "";
	// cout << "length is " << inputString.length() << endl;

	for (int i = 0; i < inputString.length(); ++i)
	{
		// cout << "current conversion is " << inputString[i] << " to " << static_cast<char>(tolower(inputString[i])) << endl;
		buffer += static_cast<char>(tolower(inputString[i]));
		// cout << "stored " << buffer[i] << endl;
	}
	return buffer;
}

char getValidOption(string promptMessage, string failMessage, const char validChars[], int sizeOfValidChars, bool caseSensetive)
{
	// cout << "valid char" << endl;
	char buffer;
	bool valid = false;
	cout << promptMessage << endl;
	do
	{
		cin >> buffer;
		if (caseSensetive == false)
		{
			buffer = tolower(buffer);
		}

		if (simpleLinearSearch(validChars, sizeOfValidChars, buffer, caseSensetive) == false)
		{
			cout << failMessage << endl;
			valid = false;
		}
		else
		{
			valid = true;
		}
	} while(valid != true);
	return buffer;
}


string getValidOption(string promptMessage, string failMessage, const string validStrings[], int sizeOfValidStrings, bool caseSensetive)
{
	// cout << "valid string " << endl;
	string buffer;
	bool valid = false;
	cout << promptMessage << endl;
	do
	{
		cin >> buffer;
		if (caseSensetive == false)
		{
			// cout << "buffer is " << buffer << endl;
			buffer = makeStringLowercase(buffer);
			// cout << "lowercase is " << buffer << endl;
		}

		if (simpleLinearSearch(validStrings, sizeOfValidStrings, buffer, caseSensetive) == false)
		{
			cout << failMessage << endl;
			valid = false;
		}
		else
		{
			valid = true;
		}
	} while(valid != true);
	return buffer;
}
