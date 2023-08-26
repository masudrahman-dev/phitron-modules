#include <iostream>
using namespace std;

class Node
{
private:
    int value;
    Node *next;

public:
    Node(int value);
    ~Node(); // Destructor
    void setNext(Node *node);
    Node *insertAtTail();
    Node *getNext();
};

Node::Node(int value)
{
    this->value = value;
    this->next = nullptr;
    cout << "Node created with value " << value << endl;
}

Node::~Node()
{
    cout << "Node with value " << value << " destroyed" << endl;
}

void Node::setNext(Node *node)
{
    next = node;
}

Node *Node::getNext()
{
    return next;
}
Node *Node::insertAtTail()
{
    
}

int main()
{
    // Node *Head = new Node(11); // Create the first node on the heap
    // Node *secondNode = new Node(22);
    // Head->setNext(secondNode); // Link the first node to the second
    Node *Head = nullptr;
    Node *Tail = nullptr;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }

        Head = new Node(val);
    }

    // Clean up the nodes
    delete Head;
    delete Tail;

    return 0;
}
