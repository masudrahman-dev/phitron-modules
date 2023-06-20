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

// void insert_at_tail(Node *&head, int val)
// {
//     Node *newNode = new Node(val);
//     if (head == NULL)
//     {
//         head = newNode;
//         return;
//     }

//     Node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = newNode;
// }
// int get_size(Node *head)
// {
//     Node *temp = head;
//     int count = 0;
//     while (temp != NULL)
//     {
//         temp = temp->next;
//         count++;
//     }
//     cout << count;
//     return count;
// }
// void insert_at_head(Node *&head, int val)
// {
//     Node *newNode = new Node(val);
//     if (head == NULL)
//     {
//         head = newNode;
//         return;
//     }
//     Node *temp = head;
//     head = newNode;
//     newNode->next = temp;
// }

// void insert_any_pos(Node *&head, int index, int val)
// {
//     Node *newNode = new Node(val);
//     if (index == 1)
//     {
//         insert_at_head(head, val);
//         return;
//     }
// }
// void printList(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->val << " ";
//         temp = temp->next;
//     }
// }

// int main()
// {

//     Node *head = NULL;
//     while (true)
//     {
//         int val;
//         cin >> val;

//         if (val != -1)
//         {
//             break;
//         }
//         insert_at_tail(head, val);
//     }

//     printList(head);
//     cout << endl;
//     get_size(head);
//     return 0;
// }

#include <iostream>
#include <climits>

using namespace std;

struct Node
{
    int val;
    Node *next;
};

Node *createNode(int val)
{
    Node *newNode = new Node();
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

void addNode(Node *&head, int val)
{
    if (head == NULL)
    {
        head = createNode(val);
    }
    else
    {
        Node *current = head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = createNode(val);
    }
}

void printMaxMin(Node *head)
{
    int max = INT_MIN;
    int min = INT_MAX;

    while (head != NULL)
    {
        if (head->val > max)
        {
            max = head->val;
        }

        if (head->val < min)
        {
            min = head->val;
        }

        head = head->next;
    }

    cout << max << " " << min << endl;
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        addNode(head, val);
    }

    printMaxMin(head);

    return 0;
}
