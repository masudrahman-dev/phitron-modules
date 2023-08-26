#include <iostream>

class Node
{
private:
    int data; // Adding an integer data member
public:
    Node(int value); // Constructor that initializes the data
    ~Node();
    int getData();           // Getter method to retrieve the data
    void setData(int value); // Setter method to set the data
};

Node::Node(int value)
{
    data = value; // Initialize the data member with the provided value
}

Node::~Node()
{
    std::cout << "Node destructor called." << std::endl;
}

int Node::getData()
{
    return data;
}

void Node::setData(int value)
{
    data = value;
}

int main()
{
    // Creating Node objects with data
    Node node1(42); // Initialize node1 with data 42
    Node node2(17); // Initialize node2 with data 17

    // Retrieving and displaying data
    std::cout << "Data in node1: " << node1.getData() << std::endl;
    std::cout << "Data in node2: " << node2.getData() << std::endl;

    // Modifying data
    node1.setData(99); // Change the data in node1

    std::cout << "Modified data in node1: " << node1.getData() << std::endl;

    return 0;
}
