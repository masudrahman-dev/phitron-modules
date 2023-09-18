#include <bits/stdc++.h>
using namespace std;

struct Edge
{
    int to;
    int weight;
};

vector<vector<Edge>> graph;
vector<long long> dist;

void dijkstra(int source)
{
    dist.assign(graph.size(), LLONG_MAX);
    dist[source] = 0;

    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
    pq.push({0, source});

    while (!pq.empty())
    {
        int u = pq.top().second;
        long long d = pq.top().first;
        pq.pop();

        if (d > dist[u])
            continue;

        for (const Edge &e : graph[u])
        {
            int v = e.to;
            int w = e.weight;

            if (dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    graph.resize(n + 1);

    for (int i = 0; i < e; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;
        graph[a].push_back({b, w});
    }

    int q;
    cin >> q;

    while (q--)
    {
        int x, y;
        cin >> x >> y;

        dijkstra(x);

        if (dist[y] == LLONG_MAX)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << dist[y] << endl;
        }
    }

    return 0;
}
