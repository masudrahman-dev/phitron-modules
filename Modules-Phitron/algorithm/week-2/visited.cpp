#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<vector<int>> &graph, vector<bool> &visited, int node)
{
    visited[node] = true; // Mark the current node as visited
    cout << "Visited node " << node << endl;

    for (int neighbor : graph[node])
    {
        if (!visited[neighbor])
        {
            dfs(graph, visited, neighbor); // Recursive DFS for unvisited neighbors
        }
    }
}

int main()
{
    int n = 5; // Number of nodes
    vector<vector<int>> graph(n);

    // Define the edges of the graph
    graph[0].push_back(1);
    graph[0].push_back(3);
    graph[1].push_back(0);
    graph[1].push_back(2);
    graph[1].push_back(4);
    graph[2].push_back(1);
    graph[3].push_back(0);
    graph[4].push_back(1);

    vector<bool> visited(n, false); // Initialize visited vector

    cout << "DFS Traversal:" << endl;
    dfs(graph, visited, 0); // Start DFS from node 0

    return 0;
}
