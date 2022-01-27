#include <iostream>
#include <queue>
using namespace std;
int main()
{
    // priority queue `last in first out` LIFO
    priority_queue<int> p_queue;
    p_queue.push(33);
    p_queue.push(44);
    p_queue.push(55);
    p_queue.push(66);
    // loop throw priority queue
    while (!p_queue.empty())
    {
        cout << p_queue.top() << endl;
        p_queue.pop();
    }

    // simple queue `first in first out` FIFO
    queue<int> _queue;
    _queue.push(33);
    _queue.push(44);
    _queue.push(55);
    _queue.push(66);
    // loop throw simple queue
    while (!_queue.empty())
    {
        cout << _queue.front() << endl;
        _queue.pop();
    }

    return 0;
}