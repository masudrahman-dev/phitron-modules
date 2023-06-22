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
// void insertAtHead(Node *&head, int val)
// {
//     Node *newNode = new Node(val);
//     newNode->next = head;
//     head = newNode;
// }
// void insertAtTail(Node *&head, int data)
// {
//     Node *newNode = new Node(data);
//     if (head == nullptr)
//     {
//         head = newNode;
//     }
//     else
//     {
//         // insert at tail
//         Node *temp = head;
//         while (temp->next != nullptr)
//         {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//     }
// }
// void insertAtPosition(Node *&head, int val, int pos)
// {
//     if (pos == 0)
//     {
//         insertAtHead(head, val);
//         return;
//     }
//     Node *newNode = new Node(val);
//     Node *temp = head;
//     for (int i = 0; i < pos - 1; i++)
//     {
//         if (temp == nullptr)
//         {
//             cout << "Invalid position!" << endl;
//             return;
//         }
//         temp = temp->next;
//     }
//     newNode->next = temp->next;
//     temp->next = newNode;
// }
// void printLinkedList(Node *head)
// {
//     Node *temp = head;
//     while (temp != nullptr)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main()
// {
//     Node *head = nullptr;

//     cout << "Enter the elements of the linked list (-1 to stop):" << endl;
//     int value;
//     while (cin >> value, value != -1)
//     {
//         insertAtTail(head, value);
//     }
//     cout << "Linked List: ";
//     printLinkedList(head);

//     int pos, val;
//     cout << "insert position: ";
//     cin >> pos;
//     cout << "insert value: ";
//     cin >> val;
//     insertAtPosition(head, val, pos);
//     cout << "after insert list: ";
//     printLinkedList(head);
//     // Clean up the memory (free allocated nodes)
//     Node *temp = head;
//     while (temp != nullptr)
//     {
//         Node *temp = temp;
//         temp = temp->next;
//         delete temp;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int data)
//     {
//         this->data = data;
//         this->next = nullptr;
//     }
// };

// void insertAtHead(Node *&head, int val)
// {
//     Node *newNode = new Node(val);
//     newNode->next = head;
//     head = newNode;
// }

// void insertAtIndex(Node *&head, int index, int val)
// {
//     if (index == 0)
//     {
//         insertAtHead(head, val);
//         return;
//     }

//     Node *newNode = new Node(val);
//     Node *prev = nullptr;
//     Node *curr = head;

//     int currIndex = 0;
//     while (curr != nullptr && currIndex < index)
//     {
//         prev = curr;
//         curr = curr->next;
//         currIndex++;
//     }

//     if (currIndex != index)
//     {
//         cout << "Invalid" << endl;
//         delete newNode;
//         return;
//     }

//     prev->next = newNode;
//     newNode->next = curr;
// }

// void printList(Node *head)
// {
//     Node *temp = head;
//     while (temp != nullptr)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main()
// {
//     Node *head = nullptr;
//     int val;

//     // Take input for the linked list
//     while (cin >> val && val != -1)
//     {
//         insertAtHead(head, val);
//     }

//     // Perform queries
//     // int q;
//     // cin >> q;

//     // while (q--)
//     // {
//     //     int index, value;
//     //     cin >> index >> value;
//     //     insertAtIndex(head, index, value);
//     //     printList(head);
//     // }
//     int index, value;
//     cin >> index >> value;
//     insertAtIndex(head, index, value);
//     printList(head);
//     // Cleanup - delete the linked list
//     Node *curr = head;
//     while (curr != nullptr)
//     {
//         Node *nextNode = curr->next;
//         delete curr;
//         curr = nextNode;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int data)
//     {
//         this->data = data;
//         this->next = nullptr;
//     }
// };

// void insertAtHead(Node *&head, int val)
// {
//     Node *newNode = new Node(val);
//     newNode->next = head;
//     head = newNode;
// }

// void insertAtTail(Node *&head, int data)
// {
//     Node *newNode = new Node(data);
//     if (head == nullptr)
//     {
//         head = newNode;
//     }
//     else
//     {
//         Node *temp = head;
//         while (temp->next != nullptr)
//         {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//     }
// }

// void insertAtPosition(Node *&head, int val, int pos)
// {
//     if (pos == 0)
//     {
//         insertAtHead(head, val);
//         return;
//     }
//     Node *newNode = new Node(val);
//     Node *temp = head;
//     for (int i = 0; i < pos - 1; i++)
//     {
//         if (temp == nullptr)
//         {
//             cout << "Invalid position!" << endl;
//             return;
//         }
//         temp = temp->next;
//     }
//     newNode->next = temp->next;
//     temp->next = newNode;
// }

// void printLinkedList(Node *head)
// {
//     Node *temp = head;
//     while (temp != nullptr)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// void deleteLinkedList(Node *&head)
// {
//     Node *temp = head;
//     while (temp != nullptr)
//     {
//         Node *nextNode = temp->next;
//         delete temp;
//         temp = nextNode;
//     }
//     head = nullptr;
// }

// int main()
// {
//     Node *head = nullptr;

//     cout << "Enter the elements of the linked list (-1 to stop):" << endl;
//     int value;
//     while (cin >> value, value != -1)
//     {
//         insertAtTail(head, value);
//     }
//     cout << "Linked List: ";
//     printLinkedList(head);

//     int pos, val;
//     cout << "Insert position: ";
//     cin >> pos;
//     cout << "Insert value: ";
//     cin >> val;
//     insertAtPosition(head, val, pos);
//     cout << "After insert list: ";
//     printLinkedList(head);

//     // Clean up the memory (free allocated nodes)
//     deleteLinkedList(head);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int data)
//     {
//         this->data = data;
//         this->next = nullptr;
//     }
// };

// void insertAtHead(Node *&head, int val)
// {
//     Node *newNode = new Node(val);
//     newNode->next = head;
//     head = newNode;
// }

// void insertAtIndex(Node *&head, int index, int val)
// {
//     if (index == 0)
//     {
//         insertAtHead(head, val);
//         return;
//     }

//     Node *newNode = new Node(val);
//     Node *prev = nullptr;
//     Node *curr = head;

//     int currIndex = 0;
//     while (curr != nullptr && currIndex < index)
//     {
//         prev = curr;
//         curr = curr->next;
//         currIndex++;
//     }

//     if (currIndex != index)
//     {
//         cout << "Invalid" << endl;
//         delete newNode;
//         return;
//     }

//     prev->next = newNode;
//     newNode->next = curr;
// }

// void printList(Node *head)
// {
//     Node *temp = head;
//     while (temp != nullptr)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }
// void deleteLinkedList(Node *&head)
// {
//     Node *temp = head;
//     while (temp != nullptr)
//     {
//         Node *nextNode = temp->next;
//         delete temp;
//         temp = nextNode;
//     }
//     head = nullptr;
// }

// int main()
// {
//     Node *head = nullptr;
//     int val;

//     // Take input for the linked list
//     while (cin >> val && val != -1)
//     {
//         insertAtHead(head, val);
//     }

//     // Perform queries
//     int q;
//     cin >> q;

//     while (q--)
//     {
//         int index, value;
//         cin >> index >> value;
//         insertAtIndex(head, index, value);
//         printList(head);
//     }

//     // Clean up the memory (free allocated nodes)
//     deleteLinkedList(head);

//     // Cleanup - delete the linked list
//     // Node *curr = head;
//     // while (curr != nullptr)
//     // {
//     //     Node *nextNode = curr->next;
//     //     delete curr;
//     //     curr = nextNode;
//     // }
//     return 0;
// }

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;

void insert(int index, int value)
{
    if (index < 0)
    {
        cout << "Invalid" << endl;
        return;
    }

    Node *newNode = new Node();
    newNode->data = value;

    if (head == NULL)
    {
        head = newNode;
    }
    else if (index == 0)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        Node *temp = head;
        for (int i = 0; i < index - 1; i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                cout << "Invalid" << endl;
                return;
            }
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void printList()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    int n, data, index;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> data;
        insert(i, data);
    }

    printList();

    return 0;
}
