project("myValidationLib")
cmake_minimum_required(VERSION 3.17)
add_library(myValidationLib getValidInt.cpp)
target_include_directories(myValidationLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
