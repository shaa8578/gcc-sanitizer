cmake_minimum_required(VERSION 3.5)

project(gcc-sanitizer LANGUAGES CXX)

option(CMAKE_VERBOSE_MAKEFILE ON)
option(CMAKE_COLOR_MAKEFILE ON)

list(APPEND CMAKE_CXX_FLAGS "-fsanitize=address,leak")
# list(APPEND CMAKE_CXX_FLAGS "-fsanitize=all")

add_executable(${PROJECT_NAME} main.cpp)
