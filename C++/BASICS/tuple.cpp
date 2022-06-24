#include <iostream>
#include <tuple>
using namespace std;
int main()
{
    tuple<string, int> myTuple("tarek", 44);
    cout << "name " << get<0>(myTuple) << " age " << get<1>(myTuple) << endl;
    // get the size off the tuple
    cout << "the size off the tuple is : " << tuple_size<decltype(myTuple)>::value << endl;
    return 0;
}