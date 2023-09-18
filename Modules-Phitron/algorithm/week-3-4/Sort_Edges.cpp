#include <bits/stdc++.h>
using namespace std;

bool compareEdges(const pair<int, int> &edge1, const pair<int, int> &edge2)
{
    if (edge1.first == edge2.first)
    {
        return edge1.second < edge2.second;
    }
    return edge1.first < edge2.first;
}

int main()
{
    int e;
    cin >> e;

    vector<pair<int, int>> edges;

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        edges.push_back(make_pair(a, b));
    }
    if (!edges.empty())
    {

        sort(edges.begin(), edges.end(), compareEdges);
    }

    for (const auto &edge : edges)
    {
        cout << edge.first << " " << edge.second << endl;
    }

    return 0;
}
