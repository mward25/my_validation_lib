#include <iostream>
#include "getValidInt.hpp"
#include "getYOrN.hpp"
// This is a simple driver to test the library

using std::cout;
using std::endl;
int main()
{
	int testInt;
	char testChar;
	cout << "getting valid int" << endl;
	testInt = getValidInt("please enter a valid integer", "Input not valid", 0, 100);

	cout << "getting y or n" << endl;
	testChar = getYOrN("please enter y or n", "Input not valid");


}