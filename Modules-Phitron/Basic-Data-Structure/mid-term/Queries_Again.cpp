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

    // Function to insert a value at the specified index
    void insertAtIndex(int index, int value)
    {
        Node *newNode = new Node(value);

        if (index == 0)
        {
            // Insert at the beginning
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
        else if (index == size())
        {
            // Insert at the end
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        else if (index > 0 && index < size())
        {
            // Insert in the middle
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
            // Invalid index
            cout << "Invalid" << endl;
            delete newNode;
            return;
        }

        printLeftToRight();
        printRightToLeft();
    }

    // Function to print the linked list from left to right
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

    // Function to print the linked list from right to left
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

    // Function to get the size of the linked list
    int size()
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
