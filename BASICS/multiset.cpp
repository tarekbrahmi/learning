#include <iostream>
#include <map>
using namespace std;
int main()
{
    multimap<string, long> numbres = {
        {"kaga", 123456},
        {"camara", 123456},
        {"darwen", 123456},
        {"clarck", 123456},
    };
    // loop throw multiset
    auto count = numbres.begin();
    while (count != numbres.end())
    {
        cout << count->first << " has number " << count->second << endl;
        count++;
    }

    return 0;
}