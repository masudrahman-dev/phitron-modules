#include <iostream>
#include <queue>
#include <climits>

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

// Function to find the maximum and minimum values of leaf nodes in a binary tree
void findMinMaxLeafValues(Node *root)
{
    if (root == nullptr)
    {
        cout << "No leaf nodes found." << endl;
        return;
    }

    queue<Node *> q;
    q.push(root);

    int maxLeafValue = INT_MIN;
    int minLeafValue = INT_MAX;

    while (!q.empty())
    {
        Node *current = q.front();
        q.pop();

        if (current->left == nullptr && current->right == nullptr)
        {
            // If it's a leaf node, update max and min values
            maxLeafValue = max(maxLeafValue, current->val);
            minLeafValue = min(minLeafValue, current->val);
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

    cout << maxLeafValue << " " << minLeafValue << endl;
}

int main()
{
    // Read the input binary tree in level order
    vector<int> levelOrder = {10, 20, 30, 40, 50, -1, 60, -1, -1, -1, -1, -1, -1};

    // Build the binary tree from the level order input
    int index = 0;
    Node *root = new Node(levelOrder[index++]);
    queue<Node *> q;
    q.push(root);

    while (index < levelOrder.size())
    {
        Node *current = q.front();
        q.pop();

        int leftVal = levelOrder[index++];
        if (leftVal != -1)
        {
            current->left = new Node(leftVal);
            q.push(current->left);
        }

        if (index < levelOrder.size())
        {
            int rightVal = levelOrder[index++];
            if (rightVal != -1)
            {
                current->right = new Node(rightVal);
                q.push(current->right);
            }
        }
    }

    // Find and print the maximum and minimum leaf values
    findMinMaxLeafValues(root);

    return 0;
}
