// #include <iostream>
// using namespace std;

// // Node definition
// struct Node
// {
//     int data;
//     Node *next;
// };

// // Function to insert a new node at the end of the linked list
// void insert(Node **head, int value)
// {
//     Node *newNode = new Node;
//     newNode->data = value;
//     newNode->next = NULL;

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

// // Function to find the maximum and minimum values in the linked list
// void findMinMax(Node *head, int &maxVal, int &minVal)
// {
//     if (head == NULL)
//     {
//         cout << "Linked list is empty." << endl;
//         return;
//     }

//     maxVal = head->data;
//     minVal = head->data;
//     Node *temp = head->next;

//     while (temp != NULL)
//     {
//         if (temp->data > maxVal)
//         {
//             maxVal = temp->data;
//         }
//         if (temp->data < minVal)
//         {
//             minVal = temp->data;
//         }
//         temp = temp->next;
//     }
// }

// // Function to print the maximum and minimum values
// void printMinMax(Node *head)
// {
//     int maxVal, minVal;
//     findMinMax(head, maxVal, minVal);
//     cout << "Maximum value: " << maxVal << endl;
//     cout << "Minimum value: " << minVal << endl;
// }

// // Function to delete the linked list and free memory
// void deleteLinkedList(Node *head)
// {
//     while (head != NULL)
//     {
//         Node *temp = head;
//         head = head->next;
//         delete temp;
//     }
// }

// int main()
// {
//     Node *head = NULL;
//     int value;

//     cout << "Enter the values of the linked list, terminate with -1:" << endl;
//     while (cin >> value)
//     {
//         if (value == -1)
//         {
//             break;
//         }
//         insert(&head, value);
//     }

//     cout << "Maximum and minimum values in the linked list:" << endl;
//     printMinMax(head);

//     deleteLinkedList(head); // Free memory

//     return 0;
// }

// #include <bits/stdc++.h>

// using namespace std;

// struct Node
// {
//     int data;
//     Node *next;
// };

// Node *createNode(int data)
// {
//     Node *newNode = new Node();
//     newNode->data = data;
//     newNode->next = NULL;
//     return newNode;
// }

// void printMaxMin(Node *head)
// {
//     int max = INT_MIN;
//     int min = INT_MAX;

//     while (head != NULL)
//     {
//         if (head->data > max)
//         {
//             max = head->data;
//         }

//         if (head->data < min)
//         {
//             min = head->data;
//         }

//         head = head->next;
//     }

//     cout << max << " " << min << endl;
// }

// int main()
// {
//     Node *head = NULL;

//     int data;
//     while (cin >> data, data != -1)
//     {
//         Node *newNode = createNode(data);
//         if (head == NULL)
//         {
//             head = newNode;
//         }
//         else
//         {
//             Node *current = head;
//             while (current->next != NULL)
//             {
//                 current = current->next;
//             }
//             current->next = newNode;
//         }
//     }

//     printMaxMin(head);

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
