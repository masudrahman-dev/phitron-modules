// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// struct Edge
// {
//     int from, to, weight;

//     Edge(int u, int v, int w) : from(u), to(v), weight(w) {}

//     bool operator<(const Edge &other) const
//     {
//         return weight < other.weight;
//     }
// };

// struct DisjointSet
// {
//     vector<int> parent, rank;

//     DisjointSet(int size)
//     {
//         parent.resize(size);
//         rank.resize(size, 0);
//         for (int i = 0; i < size; i++)
//         {
//             parent[i] = i;
//         }
//     }

//     int find(int x)
//     {
//         if (x != parent[x])
//         {
//             parent[x] = find(parent[x]);
//         }
//         return parent[x];
//     }

//     bool unite(int x, int y)
//     {
//         x = find(x);
//         y = find(y);
//         if (x == y)
//             return false;
//         if (rank[x] < rank[y])
//         {
//             parent[x] = y;
//         }
//         else
//         {
//             parent[y] = x;
//             if (rank[x] == rank[y])
//             {
//                 rank[x]++;
//             }
//         }
//         return true;
//     }
// };

// int main()
// {
//     int N, E;
//     cin >> N >> E;

//     vector<Edge> edges;
//     for (int i = 0; i < E; i++)
//     {
//         int A, B, W;
//         cin >> A >> B >> W;
//         edges.push_back(Edge(A, B, W));
//     }

//     // Sort the edges in increasing order of weight
//     sort(edges.begin(), edges.end());

//     DisjointSet dsu(N + 1);
//     int minConstructionCost = 0;
//     int numRemovedRoads = 0;

//     for (Edge edge : edges)
//     {
//         int u = edge.from;
//         int v = edge.to;
//         int weight = edge.weight;

//         if (dsu.find(u) != dsu.find(v))
//         {
//             dsu.unite(u, v);
//             minConstructionCost += weight;
//         }
//         else
//         {
//             numRemovedRoads++;
//         }
//     }

//     if (numRemovedRoads >= N - 1)
//     {
//         cout << numRemovedRoads << " " << minConstructionCost << endl;
//     }
//     else
//     {
//         cout << "Not Possible" << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int from, to, weight;

    Edge(int u, int v, int w)
    {
        this->from = u;
        this->to = v;
        this->weight = w;
    }

    bool operator<(const Edge &other) const
    {
        return weight < other.weight;
    }
};

class DisjointSet
{

public:
    vector<int> parent, rank;
    DisjointSet(int size)
    {
        parent.resize(size);
        rank.resize(size, 0);
        for (int i = 0; i < size; i++)
        {
            parent[i] = i;
        }
    }

    int find(int x)
    {
        if (x != parent[x])
        {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }

    bool unite(int x, int y)
    {
        x = find(x);
        y = find(y);
        if (x == y)
            return false;
        if (rank[x] < rank[y])
        {
            parent[x] = y;
        }
        else
        {
            parent[y] = x;
            if (rank[x] == rank[y])
            {
                rank[x]++;
            }
        }
        return true;
    }
};

int main()
{
    int n, e;
    cin >> n >> e;

    vector<Edge> edges;
    for (int i = 0; i < e; i++)
    {
        int A, B, W;
        cin >> A >> B >> W;
        edges.push_back(Edge(A, B, W));
    }

    sort(edges.begin(), edges.end());

    DisjointSet dsu(n + 1);
    int minCost = 0;
    int numRemoved = 0;

    for (Edge edge : edges)
    {
        int u = edge.from;
        int v = edge.to;
        int weight = edge.weight;

        if (dsu.find(u) != dsu.find(v))
        {
            dsu.unite(u, v);
            minCost += weight;
        }
        else
        {
            numRemoved++;
        }
    }

    if (numRemoved >= n - 1)
    {
        cout << numRemoved << " " << minCost << endl;
    }
    else
    {
        cout << "Not Possible" << endl;
    }

    return 0;
}
