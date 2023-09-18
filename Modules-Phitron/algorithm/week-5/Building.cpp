#include <bits/stdc++.h>
using namespace std;

struct edge
{
    int from, to, weight;
};

bool compareedges(const edge &a, const edge &b)
{
    return a.weight < b.weight;
}

vector<int> parent, depth;

int find(int x)
{
    if (x == parent[x])
    {
        return x;
    }
    return parent[x] = find(parent[x]);
}

bool unite(int x, int y)
{
    x = find(x);
    y = find(y);
    if (x == y)
    {
        return false;
    }
    if (depth[x] < depth[y])
    {
        parent[x] = y;
    }
    else if (depth[x] > depth[y])
    {
        parent[y] = x;
    }
    else
    {
        parent[y] = x;
        depth[x]++;
    }
    return true;
}

int main()
{
    int n, e;
    cin >> n >> e;

    vector<edge> edges(e);

    for (int i = 0; i < e; i++)
    {
        cin >> edges[i].from >> edges[i].to >> edges[i].weight;
    }

    sort(edges.begin(), edges.end(), compareedges);

    parent.resize(n + 1);
    depth.resize(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
    }

    long long minCost = 0;
    int edgeCount = 0;

    for (const edge &edge : edges)
    {
        if (unite(edge.from, edge.to))
        {
            minCost += edge.weight;
            edgeCount++;
        }
    }

    if (edgeCount == n - 1)
    {
        cout << minCost << endl;
    }
    else
    {
        cout << "-1" << endl;
    }

    return 0;
}
