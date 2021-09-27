#include <iostream>
#include <string>
#include "getValidNumber.hpp"
#include "getYOrN.hpp"
#include "getValidOption.hpp"
// This is a simple driver to test the library

using std::cout;
using std::endl;
using std::string;
using std::to_string;
const int MINIMUM_VALUE = 0;
const int MAXIMUM_VALUE = 100;
const string INPUT_IS_NOT_VALID = "input is not valid\n";
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
		testInt = getValidNumber("please enter a valid integer between " + to_string(MINIMUM_VALUE) + " and " + to_string(MAXIMUM_VALUE), INPUT_IS_NOT_VALID, static_cast<int>(MINIMUM_VALUE), static_cast<int>(MAXIMUM_VALUE));
		cout << "you entered " << testInt << endl;

		cout << "getting valid double" << endl;
		testDouble = getValidNumber("please enter a valid double between " + to_string(MINIMUM_VALUE) + " and " + to_string(MAXIMUM_VALUE), INPUT_IS_NOT_VALID, static_cast<double>(MINIMUM_VALUE), static_cast<double>(MAXIMUM_VALUE));
		cout << "you entered " << testDouble << endl;

		cout << "getting valid float" << endl;
		testFloat = getValidNumber("please enter a valid float between " + to_string(MINIMUM_VALUE) + " and " + to_string(MAXIMUM_VALUE), INPUT_IS_NOT_VALID, static_cast<float>(MINIMUM_VALUE), static_cast<float>(MAXIMUM_VALUE));
		cout << "you entered " << testFloat << endl;
	#endif

	#ifdef USE_TEMPLATE_FOR_VALID
		cout << "getting valid int using a template function" << endl;
		testInt = getValidNumber<int>("please enter a valid integer between " + to_string(MINIMUM_VALUE) + " and " + to_string(MAXIMUM_VALUE), INPUT_IS_NOT_VALID, MINIMUM_VALUE, MAXIMUM_VALUE);
		cout << "you entered " << testInt << endl;

		cout << "getting valid double using a template function" << endl;
		testDouble = getValidNumber<double>("please enter a valid double between " + to_string(MINIMUM_VALUE) + " and " + to_string(MAXIMUM_VALUE), INPUT_IS_NOT_VALID, MINIMUM_VALUE, MAXIMUM_VALUE);
		cout << "you entered " << testDouble << endl;

		cout << "getting valid float using a template function" << endl;
		testFloat = getValidNumber<float>("please enter a valid float between " + to_string(MINIMUM_VALUE) + " and " + to_string(MAXIMUM_VALUE), INPUT_IS_NOT_VALID, MINIMUM_VALUE, MAXIMUM_VALUE);
		cout << "you entered " << testFloat << endl;
	#endif

	cout << "getting y or n" << endl;
	testChar = getYOrN("please enter y or n", INPUT_IS_NOT_VALID);
	cout << "you entered" << testChar << endl;

	cout << "getting valid char" << endl;
	testChar = getValidOption("please enter a y 7 3 5 Y S, this is case sensitive", INPUT_IS_NOT_VALID, TEST_CHAR_ARRAY, TEST_CHAR_ARRAY_SIZE, true);

	cout << "getting valid string" << endl;
	testString = getValidOption("please enter hello jhon Potato Apple Donut appleNumber78 7 a 78899 208epicTest", INPUT_IS_NOT_VALID, TEST_STRING_ARRAY, TEST_STRING_ARRAY_SIZE, false);
	cout << "you entered " << testString << endl;

	cout << "getting valid string case sensitive" << endl;
	testString = getValidOption("please enter hello jhon Potato Apple Donut appleNumber78 7 a 78899 208epicTest", INPUT_IS_NOT_VALID, TEST_STRING_ARRAY, TEST_STRING_ARRAY_SIZE, true);
	cout << "you entered " << testString << endl;

}
