#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

// Function to reverse a linked list
Node *reverseLinkedList(Node *head)
{
    Node *prev = nullptr;
    Node *current = head;
    Node *next = nullptr;

    while (current != nullptr)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}

// Function to check if a linked list is a palindrome
bool isPalindrome(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return true; // An empty list or a list with a single element is a palindrome
    }

    Node *slow = head;
    Node *fast = head;

    // Find the middle of the linked list using the two pointers technique
    while (fast->next != nullptr && fast->next->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node *secondHalf = slow->next;
    slow->next = nullptr; // Split the linked list into two halves

    // Reverse the second half of the linked list
    secondHalf = reverseLinkedList(secondHalf);

    // Compare the first half with the reversed second half
    Node *p1 = head;
    Node *p2 = secondHalf;

    while (p1 != nullptr && p2 != nullptr)
    {
        if (p1->data != p2->data)
        {
            return false;
        }
        p1 = p1->next;
        p2 = p2->next;
    }

    return true;
}

int main()
{
    Node *head = nullptr;
    int val;

    // Read input and construct the linked list
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        Node *newNode = new Node(val);
        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Check if the linked list is a palindrome
    if (isPalindrome(head))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    // Clean up memory (free allocated nodes)
    Node *current = head;
    while (current != nullptr)
    {
        Node *next = current->next;
        delete current;
        current = next;
    }

    return 0;
}
