#include <bits/stdc++.h>
using namespace std;


const int INF = INT_MAX;

vector<vector<pair<int, int>>> adj; // Adjacency list representation of the graph

vector<int> dijkstra(int source, int N)
{
    vector<int> distance(N + 1, INF); // Initialize distances to infinity
    distance[source] = 0;             // Distance from source to itself is 0

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, source});

    while (!pq.empty())
    {
        int u = pq.top().second;
        int dist = pq.top().first;
        pq.pop();

        if (dist > distance[u])
        {
            continue; // Skip if we've already found a shorter path
        }

        for (auto edge : adj[u])
        {
            int v = edge.first;
            int weight = edge.second;

            if (distance[u] + weight < distance[v])
            {
                distance[v] = distance[u] + weight;
                pq.push({distance[v], v});
            }
        }
    }

    return distance;
}

int main()
{
    int N, E;
    cin >> N >> E;

    adj.resize(N + 1);

    for (int i = 0; i < E; i++)
    {
        int A, B, W;
        cin >> A >> B >> W;
        adj[A].push_back({B, W});
        adj[B].push_back({A, W}); // Assuming the graph is undirected
    }

    int S;
    cin >> S;

    int T;
    cin >> T;

    vector<int> distance = dijkstra(S, N);

    for (int i = 0; i < T; i++)
    {
        int D, DW;
        cin >> D >> DW;

        if (distance[D] <= DW)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
