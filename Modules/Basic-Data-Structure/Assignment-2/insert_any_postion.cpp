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

// void insert_at_head(Node *&head, int val)
// {
//     Node *newNode = new Node(val);
//     newNode->next = head;
//     head = newNode;
// }

// void insert_any_pos(Node *&head, int val, int pos)
// {
//     if (pos == 0)
//     {
//         insert_at_head(head, val);
//         return;
//     }
//     Node *newNode = new Node(val);
//     Node *temp = head;
//     for (int i = 0; i < pos - 1; i++)
//     {
//         if (temp == NULL)
//         {
//             cout << "Invalid position!" << endl;
//             return;
//         }
//         temp = temp->next;
//     }
//     newNode->next = temp->next;
//     temp->next = newNode;
// }
// void delete_node(Node *head, int pos)
// {
//     Node *temp = head;
//     for (int i = 0; i < pos - 1; i++)
//     {
//         if (temp == NULL)
//         {
//             cout << "Invalid position!" << endl;
//             return;
//         }
//         temp = temp->next;
//     }
//     Node *deleteNode = temp->next;
//     temp->next = temp->next->next;
//     delete deleteNode;
//     cout << "deleted from position" << endl
//          << endl;
// }
// void delete_head(Node *&head, int pos)
// {

//     Node *deleteNode = head;
//     head = head->next;
//     cout << "deleted from head" << endl
//          << endl;
// }
// void print_list(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl
//          << endl;
// }

// int main()
// {
//     Node *head = NULL;

//     while (true)
//     {
//         cout << "Option 0: Terminate" << endl;
//         cout << "Option 1: Insert at Tail" << endl;
//         cout << "Option 2: Insert at Head" << endl;
//         cout << "Option 3: Insert at Any Position" << endl;
//         cout << "Option 8: Delete at Any Position" << endl;
//         cout << "Option 9: Print List" << endl;

//         int opt;
//         cin >> opt;

//         if (opt == 0)
//         {
//             break;
//         }
//         else if (opt == 1)
//         {
//             cout << "Insert value: ";
//             int val;
//             cin >> val;
//             insert_at_tail(head, val);
//         }
//         else if (opt == 2)
//         {
//             cout << "Insert value: ";
//             int val;
//             cin >> val;
//             insert_at_head(head, val);
//         }
//         else if (opt == 3)
//         {
//             cout << "Insert value: ";
//             int val;
//             cin >> val;
//             cout << "Insert position: ";
//             int pos;
//             cin >> pos;
//             insert_any_pos(head, val, pos);
//         }
//         else if (opt == 8)
//         {
//             cout << "insert position: ";
//             int pos;
//             cin >> pos;
//             if (pos == 0)
//             {
//                 delete_head(head, pos);
//             }
//             else
//             {
//                 delete_node(head, pos);
//             }
//         }
//         else if (opt == 9)
//         {
//             print_list(head);
//         }
//     }

//     return 0;
// }

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
        this->next = nullptr;
    }
};

void insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == nullptr)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtHead(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insertAtPosition(Node *&head, int val, int pos)
{
    if (pos == 0)
    {
        insertAtHead(head, val);
        return;
    }
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        if (temp == nullptr)
        {
            cout << "Invalid position!" << endl;
            return;
        }
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteNode(Node *&head, int pos)
{
    if (head == nullptr)
    {
        cout << "List is empty. Cannot delete node." << endl;
        return;
    }
    Node *temp = head;
    if (pos == 0)
    {
        head = head->next;
        delete temp;
        cout << "Deleted from position " << pos << endl
             << endl;
        return;
    }
    for (int i = 0; i < pos - 1; i++)
    {
        if (temp->next == nullptr)
        {
            cout << "Invalid position!" << endl;
            return;
        }
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
    cout << "Deleted from position " << pos << endl
         << endl;
}

void printList(Node *head)
{
    if (head == nullptr)
    {
        cout << "List is empty." << endl;
        return;
    }
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl
         << endl;
}

void deleteList(Node *&head)
{
    Node *current = head;
    while (current != nullptr)
    {
        Node *nextNode = current->next;
        delete current;
        current = nextNode;
    }
    head = nullptr;
    cout << "List deleted." << endl;
}

int main()
{
    Node *head = nullptr;

    while (true)
    {
        cout << "Option 0: Terminate" << endl;
        cout << "Option 1: Insert at Tail" << endl;
        cout << "Option 2: Insert at Head" << endl;
        cout << "Option 3: Insert at Any Position" << endl;
        cout << "Option 8: Delete at Any Position" << endl;
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
            insertAtTail(head, val);
        }
        else if (opt == 2)
        {
            cout << "Insert value: ";
            int val;
            cin >> val;
            insertAtHead(head, val);
        }
        else if (opt == 3)
        {
            cout << "Insert value: ";
            int val;
            cin >> val;
            cout << "Insert position: ";
            int pos;
            cin >> pos;
            insertAtPosition(head, val, pos);
        }
        else if (opt == 8)
        {
            cout << "Delete position: ";
            int pos;
            cin >> pos;
            deleteNode(head, pos);
        }
        else if (opt == 9)
        {
            printList(head);
        }
    }

    deleteList(head);

    return 0;
}
