#include <bits/stdc++.h>
using namespace std;

bool visited[100];

int main()
{
    int n, m;
    cin >> n >> m;

    // Initialize the graph with 'n' empty vectors
    vector<vector<int>> graph(n);

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;

        // Add edges to the adjacency list
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    cout << endl;

    // Print the adjacency list
    for (int i = 0; i < n; i++)
    {
        cout << "Adjacent vertices of node " << i << ": ";
        for (int j = 0; j < graph[i].size(); j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
