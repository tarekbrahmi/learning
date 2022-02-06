#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
void ShowList(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << endl;
        n = n->next;
    }
}
int main()
{
    Node *first, *second, *third;
    first = NULL;
    second = NULL;
    third = NULL;
    first = new Node();
    second = new Node();
    third = new Node();
    first->data = 1;
    first->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    ShowList(first);

    return 0;
}
