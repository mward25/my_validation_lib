#include <iostream>
#include <string>
#include "getValidNumber.hpp"
#include "getYOrN.hpp"
#include "getValidOption.hpp"
// This is a simple driver to test the library

using std::cout;
using std::endl;
using std::string;
int main()
{
	const int TEST_CHAR_ARRAY_SIZE = 7; //               1    2    3    4    5    6    7
	const char TEST_CHAR_ARRAY[TEST_CHAR_ARRAY_SIZE] = {'a', 'y', '7', '3', '5', 'Y', 'S'};


	const int TEST_STRING_ARRAY_SIZE = 10; //                  1        2       3         4       5        6                 7    8    9       10
	const string TEST_STRING_ARRAY[TEST_STRING_ARRAY_SIZE] = {"hello", "jhon", "Potato", "Apple", "Donut", "appleNumber78", "7", "a", "78899", "208epicTest"};

	int testInt;
	double testDouble;
	float testFloat;
	char testChar;
	string testString;
	#ifdef USE_OVERLOAD_FOR_VALID
		cout << "getting valid int" << endl;
		testInt = getValidNumber("please enter a valid integer", "Input not valid", static_cast<int>(0), static_cast<int>(100));
		cout << "you entered " << testInt << endl;

		cout << "getting valid double" << endl;
		testDouble = getValidNumber("please enter a valid double", "Input not valid", static_cast<double>(0), static_cast<double>(100));
		cout << "you entered " << testDouble << endl;

		cout << "getting valid float" << endl;
		testFloat = getValidNumber("please enter a valid float", "Input not valid", static_cast<float>(0), static_cast<float>(100));
		cout << "you entered " << testFloat << endl;
	#endif

	#ifdef USE_TEMPLATE_FOR_VALID
		cout << "getting valid int" << endl;
		testInt = getValidNumber<int>("please enter a valid integer", "Input not valid", 0, 100);
		cout << "you entered " << testInt << endl;

		cout << "getting valid double" << endl;
		testDouble = getValidNumber<double>("please enter a valid double", "Input not valid", 0, 100);
		cout << "you entered " << testDouble << endl;

		cout << "getting valid float" << endl;
		testFloat = getValidNumber<float>("please enter a valid float", "Input not valid", 0, 100);
		cout << "you entered " << testFloat << endl;
	#endif

	cout << "getting y or n" << endl;
	testChar = getYOrN("please enter y or n", "Input not valid");
	cout << "you entered" << testChar << endl;

	cout << "getting valid char" << endl;
	testChar = getValidOption("please enter a y 7 3 5 Y S, this is case sensitive", "input not valid", TEST_CHAR_ARRAY, TEST_CHAR_ARRAY_SIZE, true);

	cout << "getting valid string" << endl;
	testString = getValidOption("please enter hello jhon Potato Apple Donut appleNumber78 7 a 78899 208epicTest", "Input not valid", TEST_STRING_ARRAY, TEST_STRING_ARRAY_SIZE, false);
	cout << "you entered " << testString << endl;

	cout << "getting valid string case sensitive" << endl;
	testString = getValidOption("please enter hello jhon Potato Apple Donut appleNumber78 7 a 78899 208epicTest", "Input not valid", TEST_STRING_ARRAY, TEST_STRING_ARRAY_SIZE, true);
	cout << "you entered " << testString << endl;

}
