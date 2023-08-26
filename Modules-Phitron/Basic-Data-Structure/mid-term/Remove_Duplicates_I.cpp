#include <bits/stdc++.h>
using namespace std;

// Define a structure for a singly linked list node
struct Node
{
    int data;
    Node *next;
    Node(int val) : data(val), next(nullptr) {}
};

// Function to insert a new node at the end of the linked list
void insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        Node *current = head;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Function to remove duplicates from the linked list
void removeDuplicates(Node *head)
{
    unordered_set<int> seen;
    Node *current = head;
    Node *prev = nullptr;

    while (current != nullptr)
    {
        if (seen.find(current->data) != seen.end())
        {
            // Duplicate found, remove the current node
            prev->next = current->next;
            delete current;
            current = prev->next;
        }
        else
        {
            seen.insert(current->data);
            prev = current;
            current = current->next;
        }
    }
}

// Function to perform selection sort on the linked list
void sortList(Node *head)
{
    Node *current = head;

    while (current != nullptr)
    {
        Node *minNode = current;
        Node *temp = current->next;

        while (temp != nullptr)
        {
            if (temp->data < minNode->data)
            {
                minNode = temp;
            }
            temp = temp->next;
        }

        // Swap data values
        int tempData = current->data;
        current->data = minNode->data;
        minNode->data = tempData;

        current = current->next;
    }
}

// Function to print the linked list in ascending order
void printLinkedList(Node *head)
{
    Node *current = head;
    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main()
{
    Node *head = nullptr;
    int val;

    // Read input values until -1 is encountered
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insertAtTail(head, val);
    }

    // Remove duplicates
    removeDuplicates(head);
    // Sort the linked list in ascending order
    sortList(head);
    // Print the linked list in ascending order
    printLinkedList(head);

    // Clean up memory (free dynamically allocated nodes)
    while (head != nullptr)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
