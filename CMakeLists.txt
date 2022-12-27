cmake_minimum_required(VERSION 3.0)
project(HelloWorld )

#Setting Source projects
set(SOURCE_PROJECT "${CMAKE_CURRENT_LIST_DIR}")
include_directories(${CMAKE_CURRENT_LIST_DIR})
#add_library(HelloWorld ${SOURCE_PROJECT}/Day2.cpp)
add_executable(HelloWorld ${SOURCE_PROJECT}/Day1.cpp 
                        ${SOURCE_PROJECT}/Day2.cpp
                        ${SOURCE_PROJECT}/Data_type.cpp
                        ${SOURCE_PROJECT}/print_pattern.cpp)

