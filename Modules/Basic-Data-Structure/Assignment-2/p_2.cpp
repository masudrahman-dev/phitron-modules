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

// void insert_node(Node *&head, int val)
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

// void print_list(Node *head)
// {
//     Node *temp = head;

//     int count = 0;
//     while (temp != NULL)
//     {
//         count++;

//         temp = temp->next;
//     }
//     Node *temp2 = head;
//     for (int i = 0; i < count; i++)
//     {
//         // cout << i << endl;
//         int first = temp2->data;
//         Node *temp3 = head;
//         for (int j = 0; j < count - 1; j++)
//         {
//             cout << j << "   " << first << "-----" << temp3->next->data << endl;
//             temp3 = temp3->next;
//         }
//         cout << endl;
//         temp2 = temp2->next;
//          first = temp2->data;
//     }
// }

// int main()
// {
//     Node *head = NULL;
//     int val;
//     while (cin >> val, val != -1)
//     {
//         insert_node(head, val);
//     }

//     print_list(head);

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

bool containsDuplicates(Node* head) {
    unordered_set<int> uniqueValues;

    Node* current = head;
    while (current != nullptr) {
        if (uniqueValues.count(current->data) > 0) {
            return true;  // Found a duplicate value
        }

        uniqueValues.insert(current->data);
        current = current->next;
    }

    return false;  // No duplicates found
}

void insert(Node*& head, int data) {
    Node* newNode = new Node(data);
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}

void printLinkedList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    int value;
    while (cin >> value, value != -1) {
        insert(head, value);
    }

    cout << "Linked List: ";
    printLinkedList(head);

    if (containsDuplicates(head)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    // Clean up the memory (free allocated nodes)
    Node* current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
