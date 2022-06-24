#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
int main()
{
    vector<int> myVector;
    cout << "type a string to end insertion " << endl;
    cout << "Enter some numbres here " << endl;
    istream_iterator<int> start_input(cin);
    istream_iterator<int> end_input;
    copy(start_input, end_input, back_inserter(myVector));
    cout << "Entred numbres are ..." << endl;
    copy(myVector.begin(), myVector.end(), ostream_iterator<int>(cout, "\t"));
    cout << endl;

    return 0;
}