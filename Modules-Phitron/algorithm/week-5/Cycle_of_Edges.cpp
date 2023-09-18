#include <bits/stdc++.h>
using namespace std;

class UnionFind
{
public:
    vector<int> parent, rank;

    UnionFind(int n)
    {
        parent.resize(n);
        rank.resize(n, 0);
        for (int i = 0; i < n; i++)
        {
            parent[i] = i;
        }
    }

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

    UnionFind uf(n + 1);
    int cycleEdges = 0;

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        if (!uf.unite(a, b))
        {
            cycleEdges++;
        }
    }

    cout << cycleEdges << endl;

    return 0;
}
