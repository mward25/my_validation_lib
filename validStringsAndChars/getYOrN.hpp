#ifndef getYOrN_HPP
#define getYOrN_HPP
#include <string>
// constants
const char YES_CHAR = 'y';
const char NO_CHAR = 'n';

// functions
char getYOrN(std::string promptMessage, std::string failMessage);
#endif