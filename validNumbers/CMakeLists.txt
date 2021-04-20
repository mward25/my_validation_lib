add_library(validNumbers getValidInt.cpp getValidDouble.cpp)
target_include_directories(validNumbers PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})