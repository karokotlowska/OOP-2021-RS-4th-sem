cmake_minimum_required(VERSION 3.1)
project(CPPLab2020)

#-------
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_COLOR_MAKEFILE ON)
set(CMAKE_CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS "-g")

set(PROJECT_LINK_DIRECTORY ${PROJECT_SOURCE_DIR})
add_compile_options(${CMAKE_CXX_FLAGS})

include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(CPPLab main.cpp)
