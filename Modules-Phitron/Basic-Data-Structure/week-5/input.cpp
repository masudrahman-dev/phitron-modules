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

// Function to build a binary tree from user input
TreeNode *buildTreeFromUserInput()
{
    std::vector<int> nodes;
    int value;

    std::cout << "Enter node values for the binary tree (-1 to stop):" << std::endl;

    while (true)
    {
        std::cin >> value;
        if (value == -1)
            break;
        nodes.push_back(value);
    }

    if (nodes.empty())
    {
        std::cout << "No input provided. Tree is empty." << std::endl;
        return nullptr;
    }

    TreeNode *root = new TreeNode(nodes[0]);
    std::queue<TreeNode *> q;
    q.push(root);

    int index = 1;
    while (!q.empty() && index < nodes.size())
    {
        TreeNode *current = q.front();
        q.pop();

        // Left child
        if (nodes[index] != -1)
        {
            current->left = new TreeNode(nodes[index]);
            q.push(current->left);
        }
        index++;

        // Right child
        if (index < nodes.size() && nodes[index] != -1)
        {
            current->right = new TreeNode(nodes[index]);
            q.push(current->right);
        }
        index++;
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
    // Build the binary tree from user input
    TreeNode *root = buildTreeFromUserInput();

    if (root == nullptr)
    {
        std::cout << "No tree constructed. Exiting." << std::endl;
        return 0;
    }

    // Calculate the sum of all node values
    int sum = sumOfNodes(root);

    std::cout << "Sum of all node values: " << sum << std::endl;

    // Clean up memory
    deleteTree(root);

    return 0;
}
