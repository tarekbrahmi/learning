#include <iostream>
using namespace std;
int counter = 0;
class MyClass
{
public:
    MyClass()
    {
        counter++;
        cout << "Counter now " << counter << endl;
    };
    ~MyClass()
    {
        counter--;
        cout << "Counter now " << counter << endl;
    };
};

int main()
{
    MyClass my;
    return 0;
}