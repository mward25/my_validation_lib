#ifndef GETVALIDCHAR_HPP
#define GETVALIDCHAR_HPP
#include <string>
/*
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
| This is a simple c++ function written by Miles Ward, this function takes several inputs |
|                                                                                         |
| Input 1:                                                                                |
|         The message the User is to be prompted with                                     |
| Input 2:                                                                                |
|         The message the User shall receive if they did not enter a valid input          |
| Input 3:                                                                                |
|        An array of valid chars or strings the user may input                            |
| Input 4:                                                                                |
|        Size of Input 3                                                                  |
| Input 5:                                                                                |
|        Determines weather we will have are input be case sensitive                      |
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/
char getValidOption(std::string promptMessage, std::string failMessage, const char validChars[], int sizeOfValidChars, bool caseSensetive);
std::string getValidOption(std::string promptMessage, std::string failMessage, const std::string validStrings[], int sizeOfValidStrings, bool caseSensetive);

std::string makeStringLowercase(const std::string &inputString);
#endif