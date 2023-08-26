#include <bits/stdc++.h>
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

bool isPalindrome(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return true;
    }

    stack<int> s;
    Node *slow = head;
    Node *fast = head;

    while (fast != nullptr && fast->next != nullptr)
    {
        s.push(slow->data);
        slow = slow->next;
        fast = fast->next->next;
    }

    // Handle odd-length lists by moving slow one step further
    if (fast != nullptr)
    {
        slow = slow->next;
    }

    while (slow != nullptr)
    {
        int top = s.top();
        s.pop();
        if (top != slow->data)
        {
            return false;
        }
        slow = slow->next;
    }

    return true;
}

void insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);
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

int main()
{
    Node *head = nullptr;
    int val;

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insertAtTail(head, val);
    }

    if (isPalindrome(head))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    Node *current = head;
    while (current != nullptr)
    {
        Node *next = current->next;
        delete current;
        current = next;
    }

    return 0;
}
