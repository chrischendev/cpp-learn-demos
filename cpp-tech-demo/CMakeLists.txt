cmake_minimum_required(VERSION 3.13)
project(cpp_tech_demo)

set(CMAKE_CXX_STANDARD 14)

add_executable(cpp_tech_demo main.cpp cpp/User.cpp h/User.h test/UserTest.cpp test/UserTest.h test/IoTest.cpp test/IoTest.h)