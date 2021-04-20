project("myValidationLib")
cmake_minimum_required(VERSION 3.17)
add_library(myValidationLib myValidationLib.cpp)

# "include source files for number validation"
option(INCLUDE_VALID_NUMBERS ON)

# "include source files for string and char validation" 
option(INCLUDE_VALID_STRINGS_AND_CHARS ON)

# "includes a driver for testing the functions"
option(INCLUDE_DRIVER  OFF)

target_include_directories(myValidationLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
if(INCLUDE_VALID_NUMBERS)
	add_subdirectory(validNumbers)
	target_link_libraries(myValidationLib validNumbers)
endif()

if(INCLUDE_VALID_STRINGS_AND_CHARS)
	add_subdirectory(validStringsAndChars)
	target_link_libraries(myValidationLib getValidStringsAndChars)
endif()

if(INCLUDE_DRIVER)
	add_subdirectory(driver)
endif()

# add_library(myValidationLib getValidInt.cpp getYOrN.cpp getValidDouble.cpp)