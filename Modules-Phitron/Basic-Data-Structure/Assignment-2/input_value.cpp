#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insert_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
        // temp->next = newNode;
    }

    temp->next = newNode;
    // cout << newNode << endl;
    // cout << temp << endl;
}
int main()
{
    Node *head = NULL;

    // while (true)
    // {
    //     int val;
    //     cin >> val;
    //     if (val == -1)
    //     {
    //         break;
    //     }

    //     cout << val << endl;
    // }

    int val;
    while (cin >> val, val != -1)
    {
        insert_tail(head, val);
    }

    return 0;
}
