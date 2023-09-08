#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, e;
    vector<vector<int>> graph(n);

    for (int i = 0; i < e; i++)
    {
        int a, b;

        cin >> a, b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    return 0;
}
