#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n, e;
    cin >> n >> e;


    vector<vector<int>> adj(n);
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int k;
    cin >> k;


    int count = adj[k].size();

    cout << count << endl;

    return 0;
}
