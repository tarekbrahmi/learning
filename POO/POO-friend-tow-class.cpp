#include <iostream>
using namespace std;
class A;
class AA
{
    int a;

public:
    void setA(int x) { a = x; }
    friend void getMax(A, AA);
};
class A
{
    int b;

public:
    void setB(int x) { b = x; }
    friend void getMax(A, AA);
};
void getMax(A a, AA aa)
{
    if (aa.a > a.b)
    {
        cout << "A is gt B and A is : " << aa.a << endl;
    }
    else
    {
        cout << "A is lt B and B is : " << a.b << endl;
    }
}
int main()
{
    AA aa;
    A a;
    aa.setA(33);
    a.setB(44);
    getMax(a, aa);
    return 0;
}