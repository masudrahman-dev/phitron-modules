#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

void dfs(int current, const vector<vector<int>> &adj, unordered_set<int> &visited)
{
    visited.insert(current);
    for (int neighbor : adj[current])
    {
        if (visited.find(neighbor) == visited.end())
        {
            dfs(neighbor, adj, visited);
        }
    }
}

int main()
{
    int N, E;
    cin >> N >> E;

    // Create an adjacency list to represent the directed graph
    vector<vector<int>> adj(N);
    for (int i = 0; i < E; i++)
    {
        int A, B;
        cin >> A >> B;
        adj[A].push_back(B);
    }

    int K;
    cin >> K;

    unordered_set<int> visited;
    dfs(K, adj, visited);

    // Count the number of houses Kamal can go to (including his own house)
    int reachableHouses = visited.size();

    cout << reachableHouses - 1 << endl;

    return 0;
}
