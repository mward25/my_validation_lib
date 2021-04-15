#include "getValidChar.hpp"
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
char getValidChar(string promptMessage, string failMessage, const char validChars[], int sizeOfValidChars, char caseSensetive)
{
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