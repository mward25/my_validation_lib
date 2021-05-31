#ifndef getValidNumber_HPP
#define getValidNumber_HPP
#include <iostream>
#include <climits>
// #include "getValidNumber.hpp"
#include <string>

#define USE_TEMPLATE_FOR_VALID
#define USE_OVERLOAD_FOR_VALID

// Constants
const int BIGNUM = INT_MAX;
const char ENDLINE = '\n';



#ifdef USE_TEMPLATE_FOR_VALID
	template <typename T>
	T getValidNumber(std::string promptMessage, std::string failMessage, T minVal, T maxVal)
	{
		// Output promptMessage to the console
		std::cout << promptMessage << std::endl;

		// Variables
		T inputNumber = minVal -1;
		bool valid = true;
		do 
		{
				valid = true;
				// Get input
				std::cin >> inputNumber;

				// If there is an error clear error message and flush the buffer
				if (std::cin.fail()) 
				{
					std::cin.clear();
					std::cin.ignore(BIGNUM, ENDLINE);

					// inputNumber is set to a value that will ensure the loop will continue
					valid = false;

					// the User was wrong, so we tell them
					std::cout << failMessage << std::endl;
				}
				else if (inputNumber < minVal || inputNumber > maxVal) 
				{
					// the User was wrong, so we tell them
					std::cout << failMessage;
				}
			} while (inputNumber < minVal || inputNumber > maxVal || valid == false);
		// return the valid Numbereger
		return inputNumber;
	}
#endif

#ifdef USE_OVERLOAD_FOR_VALID
	int getValidNumber(std::string promptMessage, std::string failMessage, int minVal, int maxVal);
	float getValidNumber(std::string promptMessage, std::string failMessage, float minVal, float maxVal);
	double getValidNumber(std::string promptMessage, std::string failMessage, double minVal, double maxVal);
#endif

#endif