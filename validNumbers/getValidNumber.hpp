#ifndef getValidNumber_HPP
#define getValidNumber_HPP
// #include "getValidNumber.hpp"
#include <string>
void getValidNumber(double &outputDouble, std::string promptMessage, std::string failMessage, double minVal, double maxVal);
void getValidNumber(int &outputInt, std::string promptMessage, std::string failMessage, int minVal, int maxVal);
void getValidNumber(float &outputFloat, std::string promptMessage, std::string failMessage, float minVal, float maxVal);
#endif