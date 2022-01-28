#include <iostream>
using namespace std;
class MyClass
{
    // this class used to manipulate pointeurs
private:
    int x = 0;
    int y = 0;

public:
    void set_xy(int a, int b)
    {
        x = a;
        y = b;
    }
    friend int getSum(MyClass);
};

int getSum(MyClass mc)
{
    int MyClass::*x_pointer = &MyClass::x; // x_pointer is a pointer to x member class `MyClass`
    int MyClass::*y_pointer = &MyClass::y;

    MyClass *pointer_object = &mc; // pointer_object is a pointer to myClass object mc
    int summ = mc.*x_pointer + pointer_object->*y_pointer; // tow methode to use pointer object
    return summ;
}
int main()
{
    MyClass myClass;

    void (MyClass::*Function_Pointer)(int, int) = &MyClass::set_xy; // Function_Pointer is a pointer to the function set_xy;
    cout << "Summ is now " << getSum(myClass) << endl;
    MyClass *pointer_object = &myClass; // set  pointer to an object

    (pointer_object->*Function_Pointer)(44, 55); // invoke the methode set_xy
    cout << "Summ is now " << getSum(myClass) << endl;

    return 0;
}