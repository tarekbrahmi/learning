#include <iostream>
#include <map>
#include <iterator>
#include <algorithm>
using namespace std;
int main()
{
    map<string, int> person;
    map<string, long> data;

    // initalise
    person["age"] = 33;
    person["heigth"] = 126;
    person["width"] = 80;
    auto count = person.find("width");
    if (count != person.end())
    {
        cout << count->second << endl;
    }
    // intalise
    data.insert(pair<string, long>("phone", 232323));
    data.insert(pair<string, long>("data", 111111));
    // loop throw map
    map<string, long>::iterator _count_iter;
    for (_count_iter = data.begin(); _count_iter != data.end(); _count_iter++)
    {
        cout << "key " << _count_iter->first << " value " << _count_iter->second << endl;
    }
    // copy map into other map assignment
    map<string, long> data_copy(data.begin(), data.end());
    
    
    // loop throw map
    map<string, long>::iterator _iter;
    for (_iter = data_copy.begin(); _iter != data_copy.end(); _iter++)
    {
        cout << "key of copy ... " << _iter->first << " value " << _iter->second << endl;
    }
    

    return 0;
}