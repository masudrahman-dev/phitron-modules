#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 7;

int minMarksNeeded(int n, int m, vector<int> &marks)
{
    vector<int> dp(m + 1, INF);
    dp[0] = 0;

    for (int i = 1; i <= m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i - marks[j] >= 0)
            {
                dp[i] = min(dp[i], dp[i - marks[j]] + 1);
            }
        }
    }

    return (dp[m] == INF) ? -1 : dp[m];
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> marks(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> marks[i];
        }

        int minMarks = minMarksNeeded(n, 1000 - m, marks); // Find the marks needed to reach 1000
        cout << minMarks << endl;
    }

    return 0;
}
