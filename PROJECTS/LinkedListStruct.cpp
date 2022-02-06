#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
class LinkedList
{
private:
    Node *head, *tail;

public:
    LinkedList()
    {
        head = NULL;
        tail = NULL;
    }
    void createNode(int value)
    {
        Node *CurrentNode = new Node;
        CurrentNode->data = value;
        CurrentNode->next = NULL;
        if (head == NULL)
        {
            head = CurrentNode;
            tail = CurrentNode;
            CurrentNode = NULL;
        }
        else
        {
            tail->next = CurrentNode;
            tail = CurrentNode;
        }
    }
    void display()
    {
        Node *CurrentNode = new Node;
        CurrentNode = head;
        while (CurrentNode != NULL)
        {
            cout << CurrentNode->data << "\t";
            CurrentNode = CurrentNode->next;
        }
    }
    void insert_start(int value)
    {
        Node *CurrentNode = new Node;
        CurrentNode->data = value;
        CurrentNode->next = head;
        head = CurrentNode;
    }
    void insert_position(int pos, int value)
    {
        Node *pre = new Node;
        Node *cur = new Node;
        Node *CurrentNode = new Node;
        cur = head;
        for (int i = 1; i < pos; i++)
        {
            pre = cur;
            cur = cur->next;
        }
        CurrentNode->data = value;
        pre->next = CurrentNode;
        CurrentNode->next = cur;
    }
    void delete_first()
    {
        Node *CurrentNode = new Node;
        CurrentNode = head;
        head = head->next;
        delete CurrentNode;
    }
    void delete_last()
    {
        Node *current = new Node;
        Node *previous = new Node;
        current = head;
        while (current->next != NULL)
        {
            previous = current;
            current = current->next;
        }
        tail = previous;
        previous->next = NULL;
        delete current;
    }
    void delete_position(int pos)
    {
        Node *current = new Node;
        Node *previous = new Node;
        current = head;
        for (int i = 1; i < pos; i++)
        {
            previous = current;
            current = current->next;
        }
        previous->next = current->next;
    }
};
int main()
{
    LinkedList obj;
    obj.createNode(25);
    obj.createNode(50);
    obj.createNode(90);
    obj.createNode(40);
    cout << "\n--------------------------------------------------\n";
    cout << "---------------Displaying All Nodes---------------";
    cout << "\n--------------------------------------------------\n";
    obj.display();
    cout << "\n--------------------------------------------------\n";
    cout << "-----------------Inserting At End-----------------";
    cout << "\n--------------------------------------------------\n";
    obj.createNode(55);
    obj.display();
    cout << "\n--------------------------------------------------\n";
    cout << "----------------Inserting At Start----------------";
    cout << "\n--------------------------------------------------\n";
    obj.insert_start(50);
    obj.display();
    cout << "\n--------------------------------------------------\n";
    cout << "-------------Inserting At Particular--------------";
    cout << "\n--------------------------------------------------\n";
    obj.insert_position(5, 60);
    obj.display();
    cout << "\n--------------------------------------------------\n";
    cout << "----------------Deleting At Start-----------------";
    cout << "\n--------------------------------------------------\n";
    obj.delete_first();
    obj.display();
    cout << "\n--------------------------------------------------\n";
    cout << "-----------------Deleing At End-------------------";
    cout << "\n--------------------------------------------------\n";
    obj.delete_last();
    obj.display();
    cout << "\n--------------------------------------------------\n";
    cout << "--------------Deleting At Particular--------------";
    cout << "\n--------------------------------------------------\n";
    obj.delete_position(4);
    obj.display();
    cout << "\n--------------------------------------------------\n";

    return 0;
}