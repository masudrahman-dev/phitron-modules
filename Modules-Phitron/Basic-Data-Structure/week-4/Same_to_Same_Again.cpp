#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val) : data(val), next(nullptr) {}
};

class Stack
{
private:
    Node *top;

public:
    Stack() : top(nullptr) {}

    void push(int val)
    {
        Node *newNode = new Node(val);
        newNode->next = top;
        top = newNode;
    }

    int pop()
    {
        if (isEmpty())
        {
            return -1; 
        }
        int val = top->data;
        Node *temp = top;
        top = top->next;
        delete temp;
        return val;
    }

    bool isEmpty()
    {
        return top == nullptr;
    }
};

class Queue
{
private:
    Node *front;
    Node *rear;

public:
    Queue() : front(nullptr), rear(nullptr) {}

    void enqueue(int val)
    {
        Node *newNode = new Node(val);
        if (isEmpty())
        {
            front = rear = newNode;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
        }
    }

    int dequeue()
    {
        if (isEmpty())
        {
            return -1; 
        }
        int val = front->data;
        Node *temp = front;
        front = front->next;
        delete temp;
        return val;
    }

    bool isEmpty()
    {
        return front == nullptr;
    }
};

int main()
{
    int n, m;
    cin >> n >> m;

    Stack stack;
    Queue queue;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        stack.push(val);
    }

    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        queue.enqueue(val);
    }

    bool sameLists = true;

    while (!stack.isEmpty() && !queue.isEmpty())
    {
        int stackVal = stack.pop();
        int queueVal = queue.dequeue();

        if (stackVal != queueVal)
        {
            sameLists = false;
            break;
        }
    }

    if (sameLists && stack.isEmpty() && queue.isEmpty())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
