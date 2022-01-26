#!/bin/bash
echo "Compiling file ... $1"
g++ "$1.cpp" -o $1;
echo "Running file ... $1\n"
"./$1"
