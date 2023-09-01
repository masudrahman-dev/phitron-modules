#include <iostream>
#include <vector>
#include <queue>

// Define a TreeNode structure
struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Function to build a binary tree from level order traversal
TreeNode *buildTree(const std::vector<int> &nodes)
{
    if (nodes.empty())
        return nullptr;

    TreeNode *root = new TreeNode(nodes[0]);
    std::queue<TreeNode *> q;
    q.push(root);

    for (int i = 1; i < nodes.size(); i += 2)
    {
        TreeNode *current = q.front();
        q.pop();

        if (nodes[i] != -1)
        {
            current->left = new TreeNode(nodes[i]);
            q.push(current->left);
        }

        if (i + 1 < nodes.size() && nodes[i + 1] != -1)
        {
            current->right = new TreeNode(nodes[i + 1]);
            q.push(current->right);
        }
    }

    return root;
}

// Function to calculate the sum of all node values
int sumOfNodes(TreeNode *root)
{
    if (root == nullptr)
        return 0;

    return root->data + sumOfNodes(root->left) + sumOfNodes(root->right);
}
// Function to delete the tree and release memory
void deleteTree(TreeNode *node)
{
    if (node == nullptr)
        return;

    deleteTree(node->left);
    deleteTree(node->right);
    delete node;
}
int main()
{
    std::vector<int> nodes = {10, 20, 30, 40, 50, -1, 60, -1, -1, -1, -1, -1, -1};

    // Build the binary tree from the input
    TreeNode *root = buildTree(nodes);

    // Calculate the sum of all node values
    int sum = sumOfNodes(root);

    std::cout << "Sum of all node values: " << sum << std::endl;

    // Clean up memory
    deleteTree(root);

    return 0;
}
