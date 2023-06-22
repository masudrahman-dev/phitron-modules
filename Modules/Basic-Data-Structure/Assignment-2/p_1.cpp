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
void insert_node(Node *&head, int val)
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
    }
    temp->next = newNode;
}

int print_list(Node *head)
{
    Node *temp = head;
    int counter = 0;
    while (temp != NULL)
    {
        // cout << temp->data << endl;
        temp = temp->next;
        counter++;
    }
    return counter;
}

int main()
{
    Node *head = NULL;
    int val;
    while (cin >> val, val != -1)
    {
        insert_node(head, val);
    }
    int counter = print_list(head);
    cout << counter;
    return 0;
}
