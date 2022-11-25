#include "stuff.hpp"
#include <exception>
#include <stdexcept>
int stuff::operations::sum(const int &a, const int &b)
{
    return a + b;
}
int stuff::operations::mult(const int &a, const int &b)
{
    return a * b;
}
int stuff::operations::sub(const int &a, const int &b)
{
    return a - b;
}
int stuff::operations::div(const int &a, const int &b)
{
    return a / b;
}