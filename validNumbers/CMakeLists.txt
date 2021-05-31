#add_library(validNumbers getValidInt.cpp getValidDouble.cpp)

add_library(validNumbers getValidNumber.cpp)
target_include_directories(validNumbers PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})