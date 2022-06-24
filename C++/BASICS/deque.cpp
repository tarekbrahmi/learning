#include <iostream>
#include <deque>
#include <iterator>
using namespace std;
int main()
{
    deque<int> Deque = {1, 3, 4, 5, 6, 6};
    Deque.push_back(66);
    Deque.push_front(0);
    copy(Deque.begin(), Deque.end(), ostream_iterator<int>(cout, "\t"));
    cout << endl;

    return 0;
}