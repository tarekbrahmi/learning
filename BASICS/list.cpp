#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> myList;
    for (int count = 0; count < 10; count++)
    {
        myList.push_back(count * 100);
    }
    // loop throw a list
    auto pos = myList.begin();
    while (pos != myList.end())
    {
        cout << *pos++ << endl;
    }

    return 0;
}