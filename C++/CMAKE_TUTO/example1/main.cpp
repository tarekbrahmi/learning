#include <iostream>
#ifndef SYSTEM
#define SYSTEM "NOT_DEFINED"
#endif
auto sum(int a, int b)
{
    return a + b;
}
int main()
{
    std::cout << "Hello World!" << std::endl;
    std::cout << "Im using : " << SYSTEM << std::endl;
    std::cout << "Sum of 3 + 4 : " << sum(3, 4) << std::endl;
    return 0;
}