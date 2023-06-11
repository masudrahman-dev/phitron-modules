#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{

    Node *head = new Node(2);
    Node *a = new Node(3);
    head->next = a;
    cout << a->val << endl;
    cout << head->next->val << endl;
    return 0;
}
