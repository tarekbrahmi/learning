#include <iostream>
using namespace std;
class A
{
    // class for manupilate static membres(variable/functions)
    static int counter;
    int myNumber;

public:
    void setMyNumber(void)
    {
        myNumber += counter;
    }
    void displayMynumber(void)
    {
        cout << "My number value :" << myNumber << endl;
    }
    void displayMynumber(void)
    {
        cout << "Counter value :" << counter << endl;
    }
};
int main()
{

    return 0;
}