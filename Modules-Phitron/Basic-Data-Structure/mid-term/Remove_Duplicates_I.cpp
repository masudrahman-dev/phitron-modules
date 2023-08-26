#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val) : data(val), next(nullptr) {}
};

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

void removeDuplicates(Node *head)
{
    unordered_set<int> seen;
    Node *current = head;
    Node *prev = nullptr;

    while (current != nullptr)
    {
        if (seen.find(current->data) != seen.end())
        {
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

        int tempData = current->data;
        current->data = minNode->data;
        minNode->data = tempData;

        current = current->next;
    }
}

void printList(Node *head)
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

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insertAtTail(head, val);
    }


    removeDuplicates(head);

    sortList(head);
    printList(head);


    while (head != nullptr)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
