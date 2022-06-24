#include <iostream>
#include <set>
#include <iterator>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    set<int> s1 = {1, 3, 4, 5, 6, 6};
    set<int> s2 = {1, 4, 5, 33, 55, 44};
    vector<int> MyVector(s1.size() + s2.size());

    cout << "All elements off set 1 are " << endl;
    copy(s1.begin(), s1.end(), ostream_iterator<int>(cout, "\t"));
    cout << endl;
    cout << "All elements off set 2 are " << endl;
    copy(s2.begin(), s2.end(), ostream_iterator<int>(cout, "\t"));
    cout << endl;
    // deffirence betwin tow sets
    auto position = set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), MyVector.begin());
    MyVector.resize(position - MyVector.begin());
    cout << "deffirence betwin tow sets " << endl;
    copy(MyVector.begin(), MyVector.end(), ostream_iterator<int>(cout, "\t"));
    cout << endl;

    // merging tow sets in vector
    MyVector.clear();
    MyVector.resize(s1.size()+s2.size());
    auto _position = set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), MyVector.begin());
    MyVector.resize(_position - MyVector.begin());
    cout << "Merging tow sets" << endl;
    copy(MyVector.begin(), MyVector.end(), ostream_iterator<int>(cout, "\t"));
    cout << endl;

    return 0;
}