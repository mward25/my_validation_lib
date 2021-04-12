#include <iostream>
#include "getValidInt.hpp"
#include "getYOrN.hpp"
#include "getValidDouble.hpp"
// This is a simple driver to test the library

using std::cout;
using std::endl;
int main()
{
	int testInt;
	double testDouble;
	char testChar;
	cout << "getting valid int" << endl;
	testInt = getValidInt("please enter a valid integer", "Input not valid", 0, 100);
	cout << "you entered " << testInt << endl;

	cout << "getting y or n" << endl;
	testChar = getYOrN("please enter y or n", "Input not valid");
	cout << "you entered" << testChar << endl;

	cout << "getting valid double" << endl;
	testDouble = getValidDouble("please enter a valid double", "Input not valid", 0, 100);
	cout << "you entered " << testDouble << endl;

}