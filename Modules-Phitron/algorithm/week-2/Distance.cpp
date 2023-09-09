#include <bits/stdc++.h>
using namespace std;

int getMinDistance(vector<vector<int>> &graph, int source, int destination)
{
    int n = graph.size();

    if (source < 0 || source >= n || destination < 0 || destination >= n)
    {
        return -1;
    }

    vector<bool> visited(n, false);
    queue<int> q;

    q.push(source);
    visited[source] = true;

    unordered_map<int, int> distance;

    while (!q.empty())
    {
        int current = q.front();
        q.pop();

        for (int neighbor : graph[current])
        {
            if (!visited[neighbor])
            {
                q.push(neighbor);
                visited[neighbor] = true;
                distance[neighbor] = distance[current] + 1;
            }
        }
    }

    return (visited[destination]) ? distance[destination] : -1;
}

int main()
{
    int n, e;
    cin >> n >> e;

    vector<vector<int>> graph(n);

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;

        if (a >= 0 && a < n && b >= 0 && b < n)
        {
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
       
    }

    int Q;
    cin >> Q;

    for (int q = 0; q < Q; q++)
    {
        int s, d;
        cin >> s >> d;

        int minDistance = getMinDistance(graph, s, d);
        cout << minDistance << endl;
    }

    return 0;
}