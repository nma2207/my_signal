cmake_minimum_required(VERSION 3.5)

project(my_signal LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB HEADERS include/*.h)
file(GLOB SOURCES src/*.cpp)
add_executable(my_signal main.cpp ${HEADERS} ${SOURCES})

include_directories("include/")
