#include <iostream>
#include <vector>
using namespace std;
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
    
    return 0;
}