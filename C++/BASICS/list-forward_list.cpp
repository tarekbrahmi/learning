#include <iostream>
#include <list>
#include <forward_list>
#include <iterator>
using namespace std;
int main()
{
    list<int> myList;
    forward_list<int> myForwardList = {10, 10, 20, 30, 45, 45, 50};
    for (int count = 0; count < 10; count++)
    {
        myList.push_back(count * 100);
    }
    cout << "loop throw a list" << endl;
    auto pos = myList.begin();
    while (pos != myList.end())
    {
        cout << *pos++ << endl;
    }
    cout << "loop throw a froward list" << endl;
    myForwardList.reverse();
    myForwardList.sort();
    copy(myForwardList.begin(), myForwardList.end(), ostream_iterator<int>(cout, "\t"));
    cout << endl;
    cout << "size of a froward list " << distance(myForwardList.begin(), myForwardList.end()) << endl;
    cout << "loop throw a froward list after rmoving duplications" << endl;
    myForwardList.unique();
    myForwardList.resize(distance(myForwardList.begin(), myForwardList.end()));
    copy(myForwardList.begin(), myForwardList.end(), ostream_iterator<int>(cout, "\t"));
    cout << endl;
    cout << "size of a froward list now is : " << distance(myForwardList.begin(), myForwardList.end()) << endl;
    return 0;
}