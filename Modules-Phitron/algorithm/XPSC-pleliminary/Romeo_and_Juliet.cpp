#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> adj; // Adjacency list to represent the graph
vector<bool> visited;

bool dfs(int currentCity, int targetCity, int steps, int maxSteps)
{
    if (currentCity == targetCity && steps <= maxSteps)
    {
        return true; // Romeo and Juliet can be reunited
    }

    if (steps >= maxSteps || visited[currentCity])
    {
        return false; // Cannot reunite or already visited this city
    }

    visited[currentCity] = true;

    for (int neighbor : adj[currentCity])
    {
        if (dfs(neighbor, targetCity, steps + 1, maxSteps))
        {
            return true;
        }
    }

    visited[currentCity] = false; // Backtrack
    return false;
}

int main()
{
    int N, E;
    cin >> N >> E;

    adj.resize(N);
    visited.resize(N, false);

    for (int i = 0; i < E; i++)
    {
        int A, B;
        cin >> A >> B;
        adj[A].push_back(B);
        adj[B].push_back(A); // Since the roads are two-way
    }

    int X, Y, K;
    cin >> X >> Y >> K;

    if (dfs(X, Y, 0, K))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}

