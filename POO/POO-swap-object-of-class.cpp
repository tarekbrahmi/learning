#include <iostream>
using namespace std;
class ClassName;
class ClassName2
{
    int private_int = 1;

public:
    void setPrivateInt(int a) { private_int = a; };
    void display(void) { cout << "This is private int value " << private_int << endl; };
    friend void exchange(ClassName &, ClassName2 &);
};
class ClassName
{
    int private_int2 = 0;

public:
    void setPrivateInt(int a) { private_int2 = a; };
    void display(void) { cout << "This is private int value " << private_int2 << endl; };
    friend void exchange(ClassName &, ClassName2 &);
};
void exchange(ClassName &x, ClassName2 &y)
{
    cout << "Exchanging private membres from classes" << endl;
    int temp = x.private_int2;
    x.private_int2 = y.private_int;
    y.private_int = temp;
}
int main()
{
    ClassName className;
    ClassName2 className2;
    className.setPrivateInt(33);
    className2.setPrivateInt(44);
    cout << "before exchange values" << endl;
    className.display();
    className2.display();
    exchange(className, className2);
    className.display();
    className2.display();
    return 0;
}