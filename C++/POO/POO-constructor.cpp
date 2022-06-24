#include <iostream>
using namespace std;
class UsingConstructor
{
private:
    int member1;
    int member2;
    double member3;

public:
    UsingConstructor()
    {
        cout << "This is a default constructor" << endl;
    };                                        // default constructor
    UsingConstructor(int a, int b);           // parameterized constructor
    UsingConstructor(int a, int b, double c); // overloaded constructor
};
UsingConstructor::UsingConstructor(int a, int b)
{
    member1 = a;
    member2 = b;
};
UsingConstructor::UsingConstructor(int a, int b, double c)
{
    member1 = a;
    member2 = b;
    member3 = c;
};
class UsingCopyConstructor
{
    int id;

public:
    UsingCopyConstructor();
    UsingCopyConstructor(int i)
    {
        id = i;
    }
    UsingCopyConstructor(UsingCopyConstructor &usingcopyconstructor)
    {
        id = usingcopyconstructor.id;
    }; //copy constructor
    void DisplayID(void)
    {
        cout << "Id is : " << id << endl;
    }
};

int main()
{
    UsingConstructor uu = UsingConstructor(3, 44);       // explicit call
    UsingConstructor uuu = UsingConstructor(3, 44, 4.5); // explicit call
    UsingConstructor u(3, 44);                           //implicite call
    UsingCopyConstructor A(33);
    UsingCopyConstructor B(A);
    UsingCopyConstructor C = A;
    A.DisplayID();
    B.DisplayID();
    C.DisplayID();
    return 0;
}