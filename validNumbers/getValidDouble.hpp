#ifndef getValiddouble_hpp
#define getValiddouble_hpp
#include <string>

/*
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
| This is a simple c++ function written by Miles Ward to get a valid double from the User.       |
| The function takes 4 arguments, 1, the message the user is to be prompted with, 2, the message |
| the user will receive if they did not enter a valid number, 3, the minimum value the User can  |
| enter, and 4, the maximum value the User can enter.                                            |
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/








// Constants
double getValidDouble(std::string promptMessage, std::string failMessage, double minVal, double maxVal);
#endif