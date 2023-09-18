#include <bits/stdc++.h>
using namespace std;

struct Edge
{
    int from, to, weight;
};

int main()
{
    int n, e;
    cin >> n >> e;

    vector<Edge> edges(e);

    for (int i = 0; i < e; i++)
    {
        cin >> edges[i].from >> edges[i].to >> edges[i].weight;
    }

    int s;
    cin >> s;

    int t;
    cin >> t;

    vector<long long> dist(n + 1, LLONG_MAX);
    dist[s] = 0;


    for (int i = 0; i < n - 1; i++)
    {
        for (const Edge &edge : edges)
        {
            int u = edge.from;
            int v = edge.to;
            int w = edge.weight;

            if (dist[u] != LLONG_MAX && dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
            }
        }
    }

    bool negativeCycle = false;
    for (const Edge &edge : edges)
    {
        int u = edge.from;
        int v = edge.to;
        int w = edge.weight;

        if (dist[u] != LLONG_MAX && dist[u] + w < dist[v])
        {
            negativeCycle = true;
            break;
        }
    }

    if (negativeCycle)
    {
        cout << "Negative Cycle Detected" << endl;
    }
    else
    {
        for (int i = 0; i < t; i++)
        {
            int d;
            cin >> d;

            if (dist[d] == LLONG_MAX)
            {
                cout << "Not Possible" << endl;
            }
            else
            {
                cout << dist[d] << endl;
            }
        }
    }

    return 0;
}
