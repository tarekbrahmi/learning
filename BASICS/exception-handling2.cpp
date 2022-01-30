#include <iostream>
using namespace std;
#define max 5
class array
{
private:
    int a[max];

public:
    int &operator[](int i)
    {
        if (i < 0 || i >= max)
            throw i;
        else
            return a[i];
    }
};
int main()
{
    array x;
    try
    {
        cout << "trying to refer a[1]..." << endl;
        x[1] = 3;
        cout << "trying to refer a[13]..." << endl;
        x[13] = 5;
    }
    catch (int i)
    {
        cout << "out of range in array references..." << endl;
    }
    return 0;
}