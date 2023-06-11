#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> data_a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> data_a[i];
    }

    int m;
    cin >> m;

    vector<int> data_b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> data_b[i];
    }

    int x;
    cin >> x;

    data_a.insert(data_a.begin() + x, data_b.begin(), data_b.end());

    for (auto &&i : data_a)
    {

        cout << i << " ";
    }
    // for (auto &i : data_a)
    // {

    //     cout << i << " ";
    // }
    // for (auto i : data_a)
    // {

    //     cout << i << " ";
    // }



    return 0;
}
