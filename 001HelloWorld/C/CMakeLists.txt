cmake_minimum_required(VERSION 3.2)
project(HelloCWorld)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(HelloCWorld ${SOURCE_FILES})