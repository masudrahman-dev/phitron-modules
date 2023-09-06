#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            v.push_back(val);
        }

        set<int> unique_values(v.begin(), v.end());
        vector<int> sorted_desc_order(unique_values.rbegin(), unique_values.rend());
        for (auto &&val : sorted_desc_order)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
