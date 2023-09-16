#include <iostream>
#include <vector>
#include <unordered_map>
#include <limits>

using namespace std;

void bellmanFord(const vector<unordered_map<int, int>> &graph, int start)
{
    int num_vertices = graph.size();
    vector<int> distances(num_vertices, numeric_limits<int>::max());
    distances[start] = 0;

    for (int i = 0; i < num_vertices - 1; ++i)
    {
        for (int u = 0; u < num_vertices; ++u)
        {
            for (const auto &neighbor : graph[u])
            {
                int v = neighbor.first;
                int weight = neighbor.second;
                if (distances[u] != numeric_limits<int>::max() && distances[u] + weight < distances[v])
                {
                    distances[v] = distances[u] + weight;
                }
            }
        }
    }

    cout << "Shortest distances from vertex " << start << ":\n";
    for (int i = 0; i < num_vertices; ++i)
    {
        cout << "To vertex " << i << ": " << distances[i] << endl;
    }
}

int main()
{
    int num_vertices, num_edges;
    cout << "Enter the number of vertices and edges: ";
    cin >> num_vertices >> num_edges;

    vector<unordered_map<int, int>> graph(num_vertices);

    cout << "Enter the edges and their weights (from_vertex to_vertex weight):\n";
    for (int i = 0; i < num_edges; ++i)
    {
        int from, to, weight;
        cin >> from >> to >> weight;
        graph[from][to] = weight;
    }

    int start_vertex;
    cout << "Enter the starting vertex: ";
    cin >> start_vertex;

    bellmanFord(graph, start_vertex);

    return 0;
}
