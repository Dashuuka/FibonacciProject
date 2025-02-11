cmake_minimum_required(VERSION 3.23)
project(FibonacciProject)

set(CMAKE_CXX_STANDARD 98) 
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)
add_executable(FibonacciProject src/main.cpp)

enable_testing()
find_package(GTest REQUIRED) 

add_executable(FibonacciTests tests/test_fibonacci.cpp)
target_link_libraries(FibonacciTests GTest::GTest GTest::Main)

add_test(NAME FibonacciTests COMMAND FibonacciTests)