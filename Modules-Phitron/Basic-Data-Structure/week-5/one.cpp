#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->data = val;
        this->left = nullptr;
        this->right = nullptr;
    }
    ~Node() {}
};

int main()
{

    vector<int> nodes;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            continue;
        }

        nodes.push_back(val);
    }
    // vector<int> nodes = {10, 20, 30, 40, 50, -1, 60, -1, -1, -1, -1, -1, -1};

    for (auto &&node : nodes)
    {
        cout << node << endl;
    }

    return 0;
}
