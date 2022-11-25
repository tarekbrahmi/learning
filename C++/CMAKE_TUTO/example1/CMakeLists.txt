cmake_minimum_required(VERSION 3.9.1)

project(CMakeHello)

# if you want to add C++14 on command line, you can set -std=c++14
set(CMAKE_CXX_STANDARD 14) # point compiler to build with C++14 

# System information checks your build system
if(UNIX)
    message("[!] This is a ${CMAKE_SYSTEM_NAME} system")
elseif(WIN32)
    message("[!] This is a Windows System")
endif()

if(${CMAKE_SYSTEM_NAME} MATCHES Linux)
    message("[!] This is a ${CMAKE_SYSTEM_NAME} system")
elseif(${CMAKE_SYSTEM_NAME} MATCHES Windows)
    message("[!] This is a Windows System")
endif()

add_executable(hello main.cpp)