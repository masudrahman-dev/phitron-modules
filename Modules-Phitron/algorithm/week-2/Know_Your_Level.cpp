#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n, e;
    cin >> n >> e;

    vector<vector<int>> adj(n); // Adjacency list to represent the graph
    for (int i = 0; i < e; i++)
    {
        int A, B;
        cin >> A >> B;
        adj[A].push_back(B);
        adj[B].push_back(A); // Since it's an undirected graph
    }

    int L;
    cin >> L;

    vector<int> level(n, -1); // Initialize all pizza shops to an invalid level
    queue<int> q;
    q.push(0);    // Start from pizza shop 0
    level[0] = 0; // Level of the first pizza shop is 0

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
        if (level[i] == L)
        {
            cout << i << " ";
            found = true;
        }
    }

    if (!found)
    {
        cout << "-1"; // No pizza shops at level L
    }

    cout << endl;

    return 0;
}
