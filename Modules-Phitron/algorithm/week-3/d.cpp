#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <limits>

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

    // Print the shortest distances from the start vertex
    for (int i = 0; i < num_vertices; ++i)
    {
        cout << "Shortest distance from " << start << " to " << i << " is: " << distances[i] << endl;
    }
}

int main()
{
    int num_vertices = 4;
    vector<unordered_map<int, int>> graph(num_vertices);

    // Define the graph with weighted edges
    graph[0][1] = 1;
    graph[0][2] = 4;
    graph[1][0] = 1;
    graph[1][2] = 2;
    graph[1][3] = 5;
    graph[2][0] = 4;
    graph[2][1] = 2;
    graph[2][3] = 1;
    graph[3][1] = 5;
    graph[3][2] = 1;

    int start_vertex = 0;
    dijkstra(graph, start_vertex);

    return 0;
}
