#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, E;
    cin >> N >> E;

    // Create an adjacency list to represent the graph
    vector<vector<int>> adj(N);
    for (int i = 0; i < E; i++)
    {
        int A, B;
        cin >> A >> B;
        adj[A].push_back(B);
        adj[B].push_back(A); // Since it's an undirected graph
    }

    int K;
    cin >> K;

    // Count the number of houses directly connected to Kamal's house (house number K)
    int directConnections = adj[K].size();

    cout << directConnections << endl;

    return 0;
}
