cmake_minimum_required(VERSION 3.14) 
project(Fibonacci CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
add_executable(Main src/main.cpp src/Fibonacci.cpp src/Fibonacci.h)
target_include_directories(Main PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src)

enable_testing()
add_executable(Tests tests/FibonacciTest.cpp src/Fibonacci.cpp)
target_include_directories(Tests PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src)
target_link_libraries(Tests gtest_main)


add_test(NAME Tests COMMAND Tests)