#include <bits/stdc++.h>
using namespace std;

const int INF = INT_MAX;

vector<vector<pair<int, int>>> adj;

vector<int> dijkstra(int source, int n)
{
    vector<int> distance(n + 1, INF); 
    distance[source] = 0;            
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, source});

    while (!pq.empty())
    {
        int u = pq.top().second;
        int dist = pq.top().first;
        pq.pop();

        if (dist > distance[u])
        {
            continue; 
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
    int n, e;
    cin >> n >> e;

    adj.resize(n + 1);

    for (int i = 0; i < e; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;
        adj[a].push_back({b, w});
        adj[b].push_back({a, w}); 
    }

    int s;
    cin >> s;

    int t;
    cin >> t;

    vector<int> distance = dijkstra(s, n);

    for (int i = 0; i < t; i++)
    {
        int d, dw;
        cin >> d >> dw;

        if (distance[d] <= dw)
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
