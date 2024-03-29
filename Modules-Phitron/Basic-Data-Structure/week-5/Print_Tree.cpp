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
void printReverse(Node *root)
{
    if (root == nullptr)
    {
        cout << "Tree not exist." << endl;
        return;
    }

    queue<Node *> q;
    vector<vector<int>> levels;

    q.push(root);

    while (!q.empty())
    {
        int levelSize = q.size();
        vector<int> levelNodes;

        for (int i = 0; i < levelSize; ++i)
        {
            Node *current = q.front();
            q.pop();

            levelNodes.push_back(current->val);

            if (current->left != nullptr)
            {
                q.push(current->left);
            }

            if (current->right != nullptr)
            {
                q.push(current->right);
            }
        }

        levels.push_back(levelNodes);
    }

    // Print reverse order
    for (int i = levels.size() - 1; i >= 0; --i)
    {
        for (int nodeValue : levels[i])
        {
            cout << nodeValue << " ";
        }
    }

    cout << endl;
}

int main()
{
    Node *root = input_tree();

    printReverse(root);

    return 0;
}
