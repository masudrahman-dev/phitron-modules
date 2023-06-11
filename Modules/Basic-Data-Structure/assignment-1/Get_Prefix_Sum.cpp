#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    vector<long long > data(n);
    for (int i = 0; i < n; i++)
    {
        cin >> data[i];
    }

    vector<long long > prefix_sum(n);
    prefix_sum[0] = data[0];
    for (int i = 1; i < n; i++)
    {
        prefix_sum[i] = data[i] + prefix_sum[i - 1];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << prefix_sum[i] << " ";
    }

    return 0;
}
