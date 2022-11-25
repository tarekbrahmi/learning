cmake_minimum_required(VERSION 3.9.1)

project(CMakeHello)

# if you want to add C++14 on command line, you can set -std=c++14
set(CMAKE_CXX_STANDARD 14) # point compiler to build with C++14 
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

# Disable in-source builds to prevent source tree corruption.
if(" ${CMAKE_SOURCE_DIR}" STREQUAL " ${CMAKE_BINARY_DIR}")
  message(FATAL_ERROR "[!] In-source builds are not allowed.
                    You should create a separate directory for build files.")
endif()

# System information checks your build system
if(UNIX)
    message( STATUS "[-] This is a ${CMAKE_SYSTEM_NAME} system")
    add_definitions(-DSYSTEM="LINUX")
elseif(WIN32)
    message( STATUS "[-] This is a Windows System")
    add_definitions(-DSYSTEM="WINDOWS")
endif()

if(${CMAKE_SYSTEM_NAME} MATCHES Linux)
    message( STATUS "[-] This is a ${CMAKE_SYSTEM_NAME} system")
    add_definitions(-DSYSTEM="LINUX")
elseif(${CMAKE_SYSTEM_NAME} MATCHES Windows)
    message( STATUS "[-] This is a Windows System")
    add_definitions(-DSYSTEM="WINDOWS")
endif()

# Generate binary file inside bin folder
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

#set(LIBRARY_OUTPUT_PATH  ${CMAKE_BINARY_DIR}/lib)

# Building Library with Target
add_executable(hello main.cpp lib/MyLib/stuff.cpp lib/MyLib/stuff.hpp)