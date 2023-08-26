#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int val)
    {
        data = val;
        next = prev = nullptr;
    }
};

class DoublyLinkedList
{
public:
    Node *head;
    Node *tail;

    DoublyLinkedList()
    {
        head = tail = nullptr;
    }

    void insertAtIndex(int index, int value)
    {
        Node *newNode = new Node(value);

        if (index == 0)
        {
            newNode->next = head;
            if (head)
            {
                head->prev = newNode;
            }
            head = newNode;
            if (!tail)
            {
                tail = head;
            }
        }
        else if (index == len())
        {

            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        else if (index > 0 && index < len())
        {
            Node *current = head;
            for (int i = 0; i < index; i++)
            {
                current = current->next;
            }
            newNode->next = current;
            newNode->prev = current->prev;
            current->prev->next = newNode;
            current->prev = newNode;
        }
        else
        {
            cout << "Invalid" << endl;
            delete newNode;
            return;
        }

        printLeftToRight();
        printRightToLeft();
    }

    void printLeftToRight()
    {
        cout << "L -> ";
        Node *current = head;
        while (current)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    void printRightToLeft()
    {
        cout << "R -> ";
        Node *current = tail;
        while (current)
        {
            cout << current->data << " ";
            current = current->prev;
        }
        cout << endl;
    }

    int len()
    {
        int count = 0;
        Node *current = head;
        while (current)
        {
            count++;
            current = current->next;
        }
        return count;
    }
};

int main()
{
    int Q;
    cin >> Q;

    DoublyLinkedList dll;

    for (int i = 0; i < Q; i++)
    {
        int X, V;
        cin >> X >> V;
        dll.insertAtIndex(X, V);
    }

    return 0;
}
