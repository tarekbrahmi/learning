- Our purpose is to generate a binary to print “Hello World!”.
- If there is no CMake we can run compiler to generate us a target basically with only following commands.<br/>
```$ g++ main.cpp -o hello```
- CMake helps to generate bash commands with the instructions you gave, for this simple project we can just use a simple `CMakeLists.txt` which creates `Makefile` for you to build binary.
- to generate the binnary file `hello` :
```
$ mkdir build
$ cd build
$ cmake .. # build from `CMakeLists.txt` in `..` folder
$ make all #make hello works also
or in root directory of the project
$ cmake -H. -Bbuild # H indicates source directory , B indicates build directory
```