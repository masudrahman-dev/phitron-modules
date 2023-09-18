#include <iostream>
#include <vector>
#include <unordered_map>
#include <limits>

using namespace std;

void bellmanFord(const vector<unordered_map<int, int>>& graph, int start) {
    int num_vertices = graph.size();
    vector<int> distances(num_vertices, numeric_limits<int>::max());
    distances[start] = 0;

    for (int i = 0; i < num_vertices - 1; ++i) {
        for (int u = 0; u < num_vertices; ++u) {
            for (const auto& neighbor : graph[u]) {
                int v = neighbor.first;
                int weight = neighbor.second;
                if (distances[u] != numeric_limits<int>::max() && distances[u] + weight < distances[v]) {
                    distances[v] = distances[u] + weight;
                }
            }
        }
    }

    // Check for negative weight cycles
    for (int u = 0; u < num_vertices; ++u) {
        for (const auto& neighbor : graph[u]) {
            int v = neighbor.first;
            int weight = neighbor.second;
            if (distances[u] != numeric_limits<int>::max() && distances[u] + weight < distances[v]) {
                cout << "Negative weight cycle detected." << endl;
                return;
            }
        }
    }

    // Print the shortest distances from the start vertex
    for (int i = 0; i < num_vertices; ++i) {
        cout << "Shortest distance from " << start << " to " << i << " is: " << distances[i] << endl;
    }
}

int main() {
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
    bellmanFord(graph, start_vertex);

    return 0;
}
