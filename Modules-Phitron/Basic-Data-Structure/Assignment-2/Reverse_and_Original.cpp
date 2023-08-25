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

// void insertNode(Node **head, int val)
// {
//     Node *newNode = new Node(val);

//     if (*head == NULL)
//     {
//         *head = newNode;
//     }
//     else
//     {
//         Node *temp = *head;
//         while (temp->next != NULL)
//         {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//     }
// }

// void print_reverse(Node *head)
// {
//     stack<Node *> nodeStack;
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         nodeStack.push(temp);
//         temp = temp->next;
//     }
//     while (!nodeStack.empty())
//     {
//         Node *node = nodeStack.top();
//         nodeStack.pop();
//         cout << node->val << " ";
//     }
// }

// void printList(Node *head)
// {
//     while (head != NULL)
//     {
//         cout << head->val << " ";
//         head = head->next;
//     }
//     cout << endl;
// }

// int main()
// {
//     Node *head = NULL;
//     int val;
//     while (cin >> val && val != -1)
//     {
//         insertNode(&head, val);
//     }

//     print_reverse(head);
//     cout << endl;
//     printList(head);

//     return 0;
// }

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

void insertNode(Node **head, int val)
{
    Node *newNode = new Node(val);

    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        Node *temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void print_reverse(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    print_reverse(head->next);
    cout << head->val << " ";
}

void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (cin >> val && val != -1)
    {
        Node *newNode = new Node(val);
        newNode->next = head;
        head = newNode;

        if (tail == NULL)
        {
            tail = newNode;
        }
    }

    printList(head);
    print_reverse(head);
    cout << endl;

    return 0;
}
