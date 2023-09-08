#include <bits/stdc++.h>
using namespace std;



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
        adj[b].push_back(a); 
    }

    int l;
    cin >> l;

    vector<int> level(n, -1);
    queue<int> q;
    q.push(0);    
    level[0] = 0;

    while (!q.empty())
    {
        int current = q.front();
        q.pop();

        for (int neighbor : adj[current])
        {
            if (level[neighbor] == -1)
            {
                level[neighbor] = level[current] + 1;
                q.push(neighbor);
            }
        }
    }

    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (level[i] == l)
        {
            cout << i << " ";
            found = true;
        }
    }

    if (!found)
    {
        cout << "-1";
    }

    cout << endl;

    return 0;
}
