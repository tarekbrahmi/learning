#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 4> x = {1, 3, 3, 5};
    string y[5] = {"e", "f", "g", "h"}; // here without bultin class `array`
    auto count = x.begin();
    cout << "Array size is " << x.size() << " \n"
         << endl;
    while (count != x.end())
    {
        cout << *count++ << endl;
    }

    return 0;
}