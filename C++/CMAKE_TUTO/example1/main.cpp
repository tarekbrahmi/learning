#include <iostream>
#ifndef SYSTEM
#define SYSTEM "NOT_DEFINED"
#endif
#include "lib/MyLib/stuff.hpp"
int main()
{
    // creating new operator
    stuff::operations op;
    std::cout << "Hello World!" << std::endl;
    std::cout << "Im using : " << SYSTEM << std::endl;
    std::cout << "Sum of 3 + 4 : " << op.sum(3, 4) << std::endl;
    return 0;
}