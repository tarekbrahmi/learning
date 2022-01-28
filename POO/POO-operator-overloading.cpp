#include <iostream>
using namespace std;
class MyClass
{
    // this class is used to manipulate operators
    // operator overloading(using member function)
    int a, b;

public:
    MyClass()
    {
        a = 4;
        b = 5;
    }
    void showData(void) { cout << a << " " << b << endl; }
    void operator--()
    {
        --a;
        --b;
    }
    friend void operator++(MyClass &mc);
};
void operator++(MyClass &mc)
{
    ++mc.a;
    ++mc.b;
}
int main()
{
    MyClass my;
    my.showData();
    --my;
    my.showData();
    operator++(my);
    my.showData();

    return 0;
}