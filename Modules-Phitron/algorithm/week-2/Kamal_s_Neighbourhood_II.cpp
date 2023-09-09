#include <bits/stdc++.h>
using namespace std;

void dfs(int current, vector<vector<int>> &adj, unordered_set<int> &visited)
{
    visited.insert(current);
    for (int neighbor : adj[current])
    {
        if (visited.find(neighbor) == visited.end())
        {
            dfs(neighbor, adj, visited);
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    vector<vector<int>> adj(n);

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
    }

    int k;
    cin >> k;

    unordered_set<int> visited;
    dfs(k, adj, visited);


    int house = visited.size();

    cout << house - 1 << endl;

    return 0;
}
