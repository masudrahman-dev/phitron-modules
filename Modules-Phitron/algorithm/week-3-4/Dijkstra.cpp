#include <iostream>
#include <vector>
#include <unordered_map>
#include <limits>
#include <queue>

using namespace std;

typedef pair<int, int> pii;

void dijkstra(const vector<unordered_map<int, int>> &graph, int start)
{
    int num_vertices = graph.size();
    vector<int> distances(num_vertices, numeric_limits<int>::max());
    distances[start] = 0;

    priority_queue<pii, vector<pii>, greater<pii>> pq;
    pq.push({0, start});

    while (!pq.empty())
    {
        int current_distance = pq.top().first;
        int current_vertex = pq.top().second;
        pq.pop();

        if (current_distance > distances[current_vertex])
        {
            continue;
        }

        for (const auto &neighbor : graph[current_vertex])
        {
            int neighbor_vertex = neighbor.first;
            int weight = neighbor.second;
            int distance = current_distance + weight;

            if (distance < distances[neighbor_vertex])
            {
                distances[neighbor_vertex] = distance;
                pq.push({distance, neighbor_vertex});
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

    dijkstra(graph, start_vertex);

    return 0;
}
