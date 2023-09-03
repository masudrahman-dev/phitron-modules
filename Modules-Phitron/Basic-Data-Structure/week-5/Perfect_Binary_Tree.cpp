#include <bits/stdc++.h>

using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
// Function to count the total number of nodes in the binary tree
int countNodes(Node *root)
{
    if (root == nullptr)
    {
        return 0;
    }

    int count = 0;
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *current = q.front();
        q.pop();
        count++;

        if (current->left != nullptr)
        {
            q.push(current->left);
        }

        if (current->right != nullptr)
        {
            q.push(current->right);
        }
    }

    return count;
}

// Function to check if the binary tree is perfect
string isPerfectBinaryTree(Node *root)
{
    int totalNodes = countNodes(root);
    int maxHeight = 0;
    int tempNodes = 1;

    while (tempNodes <= totalNodes)
    {
        tempNodes *= 2;
        maxHeight++;
    }

    int perfectNodes = pow(2, maxHeight) - 1;

    if (totalNodes == perfectNodes)
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}

int main()
{
    // Input binary tree
    Node *root = input_tree();

    // Check if the tree is perfect and output the result
    string result = isPerfectBinaryTree(root);
    cout << result << endl;

    return 0;
}