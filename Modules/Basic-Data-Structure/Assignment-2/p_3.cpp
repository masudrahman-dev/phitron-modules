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

// void insertNode(Node *&head, int data)
// {
//     Node *newNode = new Node(data);
//     if (head == NULL)
//     {
//         head = newNode;
//     }
//     else
//     {
//         Node *current = head;
//         while (current->next != NULL)
//         {
//             current = current->next;
//         }
//         current->next = newNode;
//     }
// }
// void printLinkedList(Node *head)
// {
//     Node *current = head;
//     int cnt = 0;
//     while (current != NULL)
//     {
//         cnt++;
//         cout << current->data << " ";
//         current = current->next;
//     }
//     cout << endl;
//     cout << cnt << endl;
//     int mid = cnt / 2;

//     Node *temp = head;
//     for (int i = 0; i < mid; i++)
//     {
//         if (mid % 2 == 0)
//         {
//             cout << mid << endl;
//         }
//         else
//         {
//             cout << "mid" << endl;
//         }
//     }
// }

// int main()
// {
//     Node *head = NULL;

//     int val;

//     // cout << 5 / 2 << endl;
//     // cout << 6 / 2 << endl;
//     while (cin >> val, val != -1)
//     {
//         insertNode(head, val);
//     }
//     printLinkedList(head);
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
        this->next = nullptr;
    }
};

void printMiddleElement(Node *head)
{
    if (head == nullptr)
    {
        cout << "Empty linked list." << endl;
        return;
    }

    Node *slowPtr = head;
    Node *fastPtr = head;
    Node *prev = nullptr;

    while (fastPtr != nullptr && fastPtr->next != nullptr)
    {
        fastPtr = fastPtr->next->next;
        prev = slowPtr;
        slowPtr = slowPtr->next;
    }

    if (fastPtr == nullptr)
    {
        // Even number of elements, print both middle elements
        cout << "Middle elements: " << prev->data << " " << slowPtr->data << endl;
    }
    else
    {
        // Odd number of elements, print the single middle element
        cout << "Middle element: " << slowPtr->data << endl;
    }
}

void insert(Node *&head, int data)
{
    Node *newNode = new Node(data);
    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        Node *current = head;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        current->next = newNode;
    }
}

void printLinkedList(Node *head)
{
    Node *current = head;
    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main()
{
    Node *head = nullptr;

    cout << "Enter the elements of the linked list (-1 to stop):" << endl;
    int value;
    while (cin >> value, value != -1)
    {
        insert(head, value);
    }

    cout << "Linked List: ";
    printLinkedList(head);

    cout << "Middle Element(s): ";
    printMiddleElement(head);

    // Clean up the memory (free allocated nodes)
    Node *current = head;
    while (current != nullptr)
    {
        Node *temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}

// #include <iostream>

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

// void printMiddleElement(Node *head)
// {
//     if (head == nullptr)
//     {
//         std::cout << "Empty linked list." << std::endl;
//         return;
//     }

//     Node *slowPtr = head;
//     Node *fastPtr = head;
//     Node *prev = nullptr;

//     while (fastPtr != nullptr && fastPtr->next != nullptr)
//     {
//         fastPtr = fastPtr->next->next;
//         prev = slowPtr;
//         slowPtr = slowPtr->next;
//     }

//     if (fastPtr == nullptr)
//     {
//         // Even number of elements, print both middle elements
//         std::cout << "Middle elements: " << prev->data << " " << slowPtr->data << std::endl;
//     }
//     else
//     {
//         // Odd number of elements, print the single middle element
//         std::cout << "Middle element: " << slowPtr->data << std::endl;
//     }
// }

// void insert(Node *&head, int data)
// {
//     Node *newNode = new Node(data);
//     if (head == nullptr)
//     {
//         head = newNode;
//     }
//     else
//     {
//         Node *current = head;
//         while (current->next != nullptr)
//         {
//             current = current->next;
//         }
//         current->next = newNode;
//     }
// }

// void printLinkedList(Node *head)
// {
//     Node *current = head;
//     while (current != nullptr)
//     {
//         std::cout << current->data << " ";
//         current = current->next;
//     }
//     std::cout << std::endl;
// }

// int main()
// {
//     Node *head = nullptr;

//     std::cout << "Enter the elements of the linked list (-1 to stop):" << std::endl;
//     int value;
//     while (std::cin >> value, value != -1)
//     {
//         insert(head, value);
//     }

//     std::cout << "Linked List: ";
//     printLinkedList(head);

//     std::cout << "Middle Element(s): ";
//     printMiddleElement(head);

//     // Clean up the memory (free allocated nodes)
//     Node *current = head;
//     while (current != nullptr)
//     {
//         Node *temp = current;
//         current = current->next;
//         delete temp;
//     }

//     return 0;
// }
