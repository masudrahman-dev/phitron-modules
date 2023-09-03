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

void min_max(Node *root)
{
    if (root == nullptr)
    {
        cout << "No leaf nodes found." << endl;
        return;
    }

    queue<Node *> q;
    q.push(root);

    int maxLeaf = INT_MIN;
    int minLeaf = INT_MAX;

    while (!q.empty())
    {
        Node *current = q.front();
        q.pop();

        if (current->left == nullptr && current->right == nullptr)
        {
            // leaf node update max and min values
            maxLeaf = max(maxLeaf, current->val);
            minLeaf = min(minLeaf, current->val);
        }

        if (current->left != nullptr)
        {
            q.push(current->left);
        }

        if (current->right != nullptr)
        {
            q.push(current->right);
        }
    }

    cout << maxLeaf << " " << minLeaf << endl;
}

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
int main()
{

    Node *root = input_tree();

    if (root == NULL)
    {
        cout << "Tree nai" << endl;
    }
    else
    {
        min_max(root);
    }

    return 0;
}
