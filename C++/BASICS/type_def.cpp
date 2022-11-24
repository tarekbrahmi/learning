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

    std::cout<<std::endl;
    return 0;
}