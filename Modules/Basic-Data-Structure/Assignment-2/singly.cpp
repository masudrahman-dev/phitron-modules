// // Linked list operations in C++

// #include <stdlib.h>

// #include <iostream>
// using namespace std;

// // Create a node
// struct Node
// {
//     int data;
//     struct Node *next;
// };

// void insertAtBeginning(struct Node **head_ref, int new_data)
// {
//     // Allocate memory to a node
//     struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

//     // insert the data
//     new_node->data = new_data;
//     new_node->next = (*head_ref);

//     // Move head to new node
//     (*head_ref) = new_node;
// }

// // Insert a node after a node
// void insertAfter(struct Node *prev_node, int new_data)
// {
//     if (prev_node == NULL)
//     {
//         cout << "the given previous node cannot be NULL";
//         return;
//     }

//     struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
//     new_node->data = new_data;
//     new_node->next = prev_node->next;
//     prev_node->next = new_node;
// }

// // Insert at the end
// void insertAtEnd(struct Node **head_ref, int new_data)
// {
//     struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *last = *head_ref; /* used in step 5*/

//     new_node->data = new_data;
//     new_node->next = NULL;

//     if (*head_ref == NULL)
//     {
//         *head_ref = new_node;
//         return;
//     }

//     while (last->next != NULL)
//         last = last->next;

//     last->next = new_node;
//     return;
// }

// // Delete a node
// void deleteNode(struct Node **head_ref, int key)
// {
//     struct Node *temp = *head_ref, *prev;

//     if (temp != NULL && temp->data == key)
//     {
//         *head_ref = temp->next;
//         free(temp);
//         return;
//     }
//     // Find the key to be deleted
//     while (temp != NULL && temp->data != key)
//     {
//         prev = temp;
//         temp = temp->next;
//     }

//     // If the key is not present
//     if (temp == NULL)
//         return;

//     // Remove the node
//     prev->next = temp->next;

//     free(temp);
// }

// // Search a node
// bool searchNode(struct Node **head_ref, int key)
// {
//     struct Node *current = *head_ref;

//     while (current != NULL)
//     {
//         if (current->data == key)
//             return true;
//         current = current->next;
//     }
//     return false;
// }

// // Sort the linked list
// void sortLinkedList(struct Node **head_ref)
// {
//     struct Node *current = *head_ref, *index = NULL;
//     int temp;

//     if (head_ref == NULL)
//     {
//         return;
//     }
//     else
//     {
//         while (current != NULL)
//         {
//             // index points to the node next to current
//             index = current->next;

//             while (index != NULL)
//             {
//                 if (current->data > index->data)
//                 {
//                     temp = current->data;
//                     current->data = index->data;
//                     index->data = temp;
//                 }
//                 index = index->next;
//             }
//             current = current->next;
//         }
//     }
// }

// // Print the linked list
// void printList(struct Node *node)
// {
//     while (node != NULL)
//     {
//         cout << node->data << " ";
//         node = node->next;
//     }
// }

// // Driver program
// int main()
// {
//     struct Node *head = NULL;

//     insertAtEnd(&head, 1);
//     insertAtBeginning(&head, 2);
//     insertAtBeginning(&head, 3);
//     insertAtEnd(&head, 4);
//     insertAfter(head->next, 5);

//     cout << "Linked list: ";
//     printList(head);

//     cout << "\nAfter deleting an element: ";
//     deleteNode(&head, 3);
//     printList(head);

//     int item_to_find = 3;
//     if (searchNode(&head, item_to_find))
//     {
//         cout << endl
//              << item_to_find << " is found";
//     }
//     else
//     {
//         cout << endl
//              << item_to_find << " is not found";
//     }

//     sortLinkedList(&head);
//     cout << "\nSorted List: ";
//     printList(head);
// }

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// class SinglyList
// {

// public:
//     Node *head;

//     SinglyList(/* args */)
//     {

//         this->head = NULL;
//     }

//     void add_node(int data)
//     {
//         Node *newNode = new Node(data);
//         newNode->next = this->head;
//         this->head = newNode;
//     }
// };

// int main()
// {

//     return 0;
// }

// Linked list implementation in C++

// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;

// // Creating a node
// class Node
// {
// public:
//     int value;
//     Node *next;
// };

// int main()
// {
//     Node *head;
//     Node *one = NULL;
//     Node *two = NULL;
//     Node *three = NULL;

//     // allocate 3 nodes in the heap
//     one = new Node();
//     two = new Node();
//     three = new Node();

//     // Assign value values
//     one->value = 1;
//     two->value = 2;
//     three->value = 3;

//     // Connect nodes
//     one->next = two;
//     two->next = three;
//     three->next = NULL;

//     // print the linked list value
//     head = one;
//     while (head != NULL)
//     {
//         cout << head->value;
//         head = head->next;
//     }
// }

// #include <stdio.h>

// int main()
// {
//     int a = 5;
//     int *b;
//     int **c;
//     b = &a;
//     c = &b;
//     printf("value of a = %d\n", a);
//     printf("value of a = %d\n", *(&a));
//     printf("value of a = %d\n", *b);
//     printf("value of a = %d\n", **c);
//     printf("value of b = address of a = %u\n", b);
//     printf("value of c = address of b = %u\n", c);
//     printf("address of a = %u\n", &a);
//     printf("address of a = %u\n", b);
//     printf("address of a = %u\n", *c);
//     printf("address of b = %u\n", &b);
//     printf("address of b = %u\n", c);
//     printf("address of c = %u\n", &c);
//     return 0;
// }

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

int main()
{

    // Node *a = new Node(10);
    // Node *b = new Node(20);
    // Node *c = new Node(30);
    // Node *d = new Node(40);
    // Node *e = new Node(50);

    // a->next = b;
    // b->next = c;
    // c->next = d;
    // d->next = e;
    // e->next = NULL;
    // cout << a->data << endl;
    // cout << b->data << endl;
    // cout << c->data << endl;
    // cout << d->data << endl;
    // cout << e->data << endl;
    // cout << a->next << endl;

    // cout << d->next << endl;
    // cout << e << endl;
    // cout << e->next << endl;
    // cout << e->data << endl;

    // create Node and link node
    Node *Head = NULL;
    int data;
    while (cin >> data, data != -1)
    {
        Node *Head = new Node(data);
    }

    cout << Head->next;
    return 0;
}
