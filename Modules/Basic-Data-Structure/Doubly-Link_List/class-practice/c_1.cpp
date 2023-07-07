#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *pre;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->pre = NULL;
    }
};

void insertNormal(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = newNode;
}
void insertAtTail(Node *&tail, int val)
{

    Node *newNode = new Node(val);
    tail->next = newNode;
    newNode->pre = tail;
    tail = tail->next;
}
void insertAtHead(Node *&head, int val)
{

    Node *newNode = new Node(val);

    newNode->next = head;
    head->pre = newNode;
    head = newNode;
}
void insertAnyPos(Node *&head, Node *&tail, int val, int pos)
{

    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    Node *curr = head;
    if (pos == 1)
    {
        insertAtHead(head, val);
        return;
    }

    for (int i = 1; i <= pos - 1; i++)
    {
        curr = curr->next;
    }
    cout << "current position value: ";
    cout << curr->val << endl;

    newNode->next = curr->next;
    curr->next = newNode;
    newNode->next->pre = newNode;
    newNode->pre = curr;
    cout << "After current position value: ";
    cout << curr->val << endl;
}

int listLength(Node *head)
{

    Node *curr = head;
    int cnt = 0;
    while (curr != NULL)
    {
        cnt++;
        curr = curr->next;
    }
    return cnt;
}

void printNormal(Node *head)
{

    Node *curr = head;
    cout << "Tail List: " << endl;
    while (curr != NULL)
    {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;
}

void printReverse(Node *tail)
{
    Node *curr = tail;
    cout << "Reverse List: " << endl;
    while (curr != NULL)
    {
        cout << curr->val << " ";
        curr = curr->pre;
    }
}

int main()
{
    // Node *head = new Node(10);
    // Node *a = new Node(20);
    // Node *b = new Node(30);
    // Node *c = new Node(40);
    // Node *tail = c;

    // // connection
    // head->next = a;
    // a->pre = head;
    // a->next = b;
    // b->pre = a;
    // b->next = c;
    // c->pre = b;
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    cout << "insert at tail: " << endl;
    while (cin >> val and val != -1)
    {
        insertNormal(head, val);
    }

    cout << "insert position: ";
    int pos;
    cin >> pos;
    cout << "insert position value: ";
    int val2;
    cin >> val2;
    int Length = listLength(head);
    // cout << Length << endl;

    if (pos >= Length)
    {
        cout << "invalid" << endl;
    }
    else if (pos == Length)
    {
        insertAtTail(tail, val);
    }
    else
    {
        insertAnyPos(head, tail, val2, pos);
        printNormal(head);
        printReverse(tail);
    }

    return 0;
}
