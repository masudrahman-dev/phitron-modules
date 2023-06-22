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
    temp->next = newNode;
}

void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insert_any_pos(Node *&head, int val, int pos)
{
    if (pos == 0)
    {
        insert_at_head(head, val);
        return;
    }
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        if (temp == NULL)
        {
            cout << "Invalid position!" << endl;
            return;
        }
        temp = temp->next;
    }
    newNode->next = temp->next;
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
        cout << "Option 3: Insert at Any Position" << endl;
        cout << "Option 9: Print List" << endl;

        int opt;
        cin >> opt;

        if (opt == 0)
        {
            break;
        }
        else if (opt == 1)
        {
            cout << "Insert value: ";
            int val;
            cin >> val;
            insert_at_tail(head, val);
        }
        else if (opt == 2)
        {
            cout << "Insert value: ";
            int val;
            cin >> val;
            insert_at_head(head, val);
        }
        else if (opt == 3)
        {
            cout << "Insert value: ";
            int val;
            cin >> val;
            cout << "Insert position: ";
            int pos;
            cin >> pos;
            insert_any_pos(head, val, pos);
        }
        else if (opt == 9)
        {
            print_list(head);
        }
    }

    return 0;
}
