#include <bits/stdc++.h>
using namespace std;
class Node
{

public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void fun(int *ptr)
{
    *ptr = 20;
    // ptr = NULL;
    cout << ptr << endl;
}
int main()
{
    // Node head(10);
    // Node b(20);
    // Node c(30);
    // head.next = &b;
    // b.next = &c;
    // cout << head.val << endl;
    // cout << b.val << endl;
    // cout << c.val << endl;
    // cout << head.next->next->val << endl;
    // cout << &c << endl;

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    int val = 10;
    int *ptr = &val;

    fun(ptr);
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << val << endl;

    // cout << head->next->next->next->next->next << endl;
    // Node *temp = head;
    // while (temp != NULL)
    // {
    //     cout << temp->val << endl;
    //     temp = temp->next;
    // }
    // while (head->next != NULL)
    // {
    //     cout << head->val << endl;
    //     head = head->next;
    // }

    // head->next = b;
    // cout << head->next->val << endl;
    // Node *head = new Node(0);
    // int val;
    // while (cin >> val, val != -1)
    // {
    //     Node *newNode = new Node(val);
    //     head->next = newNode;
    //     // cout << head->next->val << endl;
    // }

    // while (head->next != NULL)
    // {
    //     cout << head->val << endl;
    //     head = head->next;
    // }

    return 0;
}
