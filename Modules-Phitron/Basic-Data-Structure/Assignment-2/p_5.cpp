#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

void insertAtTail(Node *&head, int data)
{
    Node *newNode = new Node(data);
    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

bool isSorted(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return true;
    }

    Node *curr = head;
    while (curr->next != nullptr)
    {
        if (curr->data > curr->next->data)
        {
            return false;
        }
        curr = curr->next;
    }
    return true;
}

int main()
{
    Node *head = nullptr;

    cout << "Enter the elements of the linked list (-1 to stop):" << endl;
    int value;
    while (cin >> value, value != -1)
    {
        insertAtTail(head, value);
    }

    if (isSorted(head))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    // Clean up the memory (free allocated nodes)
    Node *curr = head;
    while (curr != nullptr)
    {
        Node *nextNode = curr->next;
        delete curr;
        curr = nextNode;
    }

    return 0;
}
