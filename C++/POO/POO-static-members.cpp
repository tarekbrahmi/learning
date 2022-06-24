#include <iostream>
using namespace std;
class A
{
    // class for manupilate static membres(variable/functions)
    static int counter;
    int myNumber=0;

public:
    void setMyNumber(void)
    {
        myNumber =++ counter;
    }
    void displayMynumber(void)
    {
        cout << "My number value :" << myNumber << endl;
    }
    static void displayCounter(void)
    {
        cout << "Counter value :" << counter << endl;
    }
};
int A::counter;
int main()
{
    A a,aa;
    a.setMyNumber();
    aa.setMyNumber();

    a.displayMynumber();
    aa.displayMynumber();
    
    A::displayCounter();
    A aaa;
    aaa.setMyNumber();
    aaa.displayMynumber();
    A::displayCounter();

    return 0;
}