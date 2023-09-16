#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> edges;

// Custom comparison function to sort edges
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
    int E;
    cin >> E;

    for (int i = 0; i < E; i++)
    {
        int A, B;
        cin >> A >> B;
        edges.push_back(make_pair(A, B));
    }

    // Sort the edges using the custom comparison function
    sort(edges.begin(), edges.end(), compareEdges);

    // Output the sorted edges
    for (const auto &edge : edges)
    {
        cout << edge.first << " " << edge.second << endl;
    }

    return 0;
}
