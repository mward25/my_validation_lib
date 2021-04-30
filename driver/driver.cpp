#include <iostream>
#include "getValidNumber.hpp"
#include "getYOrN.hpp"
#include "getValidChar.hpp"
// This is a simple driver to test the library

using std::cout;
using std::endl;

int main()
{
	const int TEST_CHAR_ARRAY_SIZE = 7; //               1    2    3    4    5    6    7
	const char TEST_CHAR_ARRAY[TEST_CHAR_ARRAY_SIZE] = {'a', 'y', '7', '3', '5', 'Y', 'S'};

	int testInt;
	double testDouble;
	float testFloat;
	char testChar;
	cout << "getting valid int" << endl;
	getValidNumber(testInt, "please enter a valid integer", "Input not valid", 0, 100);
	cout << "you entered " << testInt << endl;

	cout << "getting y or n" << endl;
	testChar = getYOrN("please enter y or n", "Input not valid");
	cout << "you entered" << testChar << endl;

	cout << "getting valid double" << endl;
	getValidNumber(testDouble, "please enter a valid double", "Input not valid", 0, 100);
	cout << "you entered " << testDouble << endl;

	cout << "getting valid float" << endl;
	getValidNumber(testFloat, "please enter a valid float", "Input not valid", 0, 100);
	cout << "you entered " << testFloat << endl;
	
	cout << "getting valid char" << endl;
	testChar = getValidChar("please enter a y 7 3 5 Y S, this is case sensitive", "input not valid", TEST_CHAR_ARRAY, TEST_CHAR_ARRAY_SIZE, true);

}