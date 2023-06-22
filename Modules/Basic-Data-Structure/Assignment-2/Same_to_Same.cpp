// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };
// void insert_node_tail(Node *&head, int val)
// {
//     Node *newNode = new Node(val);
//     if (head == NULL)
//     {
//         head = newNode;
//         return;
//     }

//     Node *curr = head;
//     while (curr->next != NULL)
//     {
//         curr = curr->next;
//     }
//     curr->next = newNode;
// }
// void insert_node_two_tail(Node *&head, int val)
// {
//     Node *newNode = new Node(val);
//     if (head == NULL)
//     {
//         head = newNode;
//         return;
//     }

//     Node *curr = head;
//     while (curr->next != NULL)
//     {
//         curr = curr->next;
//     }
//     curr->next = newNode;
// }

// bool isSame(){

// }
// int main()
// {
//     Node *head = NULL;

//     int val;
//     while (cin >> val, val != -1)
//     {
//         insert_node_tail(head, val);
//     }
//     Node *head_2 = NULL;
//     int val_2;
//     while (cin >> val_2, val_2 != -1)
//     {
//         insert_node_two_tail(head_2, val_2);
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// struct Node
// {
//     int val;
//     Node *next;
// };
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

void insert_node(Node *&head, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

bool isSame(Node *head1, Node *head2)
{
    while (head1 != NULL && head2 != NULL)
    {
        if (head1->val != head2->val)
        {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }


    if (head1 != NULL || head2 != NULL)
    {
        return false;
    }

    return true;
}

int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;

    int val;
    while (cin >> val && val != -1)
    {
        insert_node(head1, val);
    }

    while (cin >> val && val != -1)
    {
        insert_node(head2, val);
    }

    if (isSame(head1, head2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
