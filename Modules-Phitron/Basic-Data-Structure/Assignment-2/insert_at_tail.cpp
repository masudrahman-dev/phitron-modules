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
void insert_at_tail(Node *&head, int val)
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
    // temp last node e ache
    temp->next = newNode;
}
void print_list(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl
         << endl;
}
int main()
{
    Node *head = NULL;

    while (true)
    {
        cout << "Option 0: Terminate" << endl;
        cout << "Option 1: Insert at Tail" << endl;
        cout << "Option 2: Insert at Head" << endl;
        cout << "Option 3: Insert Any Position" << endl;
        cout << "Option 9: Print List" << endl;

        int opt;
        cin >> opt;

        if (opt == 0)
        {
            break;
        }
        else if (opt == 1)
        {
            cout << "inset value: ";
            int val;
            cin >> val;
            insert_at_tail(head, val);
        }
        else if (opt == 9)
        {
            print_list(head);
        }
    }

    // if (opt == 1)
    // {
    //     int val;
    //     while (cin >> val, val != -1)
    //     {
    //         insert_at_tail(head, val);
    //     }
    // }
    // print_list(head);
    return 0;
}
