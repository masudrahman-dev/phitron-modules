#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1001;

vector<int> adj[MAX_N];
bool visited[MAX_N];

void dfs(int i, vector<int> &cpm)
{
    visited[i] = true;
    cpm.push_back(i);

    for (int neighbor : adj[i])
    {
        if (!visited[neighbor])
        {
            dfs(neighbor, cpm);
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    set<int> nodes;
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
        nodes.insert(a);
        nodes.insert(b);
    }

    vector<int> cpm_sizes;

    for (int node : nodes)
    {
        if (!visited[node])
        {
            vector<int> cpm;
            dfs(node, cpm);
            if (cpm.size() > 1)
            {
                cpm_sizes.push_back(cpm.size());
            }
        }
    }


    if (!cpm_sizes.empty())
    {
        sort(cpm_sizes.begin(), cpm_sizes.end());
    }

    for (int size : cpm_sizes)
    {
        cout << size << " ";
    }

    cout << endl;

    return 0;
}
