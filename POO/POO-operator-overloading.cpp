#include <iostream>
using namespace std;
class MyClass
{
    // this class is used to manipulate operators
    int a, b;

public:
    MyClass()
    {
        a = 4;
        b = 5;
    }
    void showData(void)
    {
        cout << a <<" "<< b << endl;
    }
    void operator -- ()
    {
        --a;
        --b;
    }
};

int main()
{
    MyClass my;
    my.showData();
    --my;
    my.showData();
    return 0;
}