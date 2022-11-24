#include <iostream>
#include <vector>
using namespace std;

// Normal pointer to a function
int (*func_ptr1)(int, int);
  
// Using typedef with pointer to a function
typedef int (*func_ptr2)(int, int);
  
// Function to multiply two numbers
int product(int u, int v) { return u * v; }

int main()
{
    // MyVector used to define new vector of integers
    typedef vector<int> MyVector;
    MyVector v1;
    v1.push_back(33);
    v1.push_back(34);
    v1.push_back(35);
    v1.push_back(36);
    std::cout << "using typedef in c++\n";
    for (auto x : v1)
    {
        printf("value %d\t", x);
    }
    
    // define type of data with new name
    typedef unsigned long long int ulli;
    ulli x{1234565};
    std::cout<<std::endl;
    printf("unsigned long long int %u\n", x);
    
    
    // define type data of integer pointer
    typedef int* IntPointer;
    int b=4;
    IntPointer iptr=&b;
    printf("data of integer pointer %d\n", *iptr);

    // typedef with function pointer
    func_ptr1 = &product;
  
    // Using typedefed function pointer for creating new
    // function pointer "new_func"
    func_ptr2 new_func_ptr = &product;
  
    // Using normal pointer to a function
    int x2 = (*func_ptr1)(3, 2);
  
    // Using the new function pointer
    int x1 = (*new_func_ptr)(2, 4);
  
    std::cout << x1 << std::endl;
    std::cout << x2 << std::endl;
    
    return 0;
}