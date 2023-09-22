#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int solve(vector<int> &A, int n, int d)
{
    int totalSum = 0;
    for (int num : A)
    {
        totalSum += num;
    }

    if ((d + totalSum) % 2 != 0)
    {
        return 0;
    }

    int targetSum = (d + totalSum) / 2;

    vector<vector<int>> dp(n + 1, vector<int>(targetSum + 1, 0));
    dp[0][0] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= targetSum; j++)
        {
            dp[i][j] = dp[i - 1][j];
            if (j >= A[i - 1])
            {
                dp[i][j] = (dp[i][j] + dp[i - 1][j - A[i - 1]]) % MOD;
            }
        }
    }

    return dp[n][targetSum];
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, d;
        cin >> n >> d;

        vector<int> A(n);
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }

        int ways = solve(A, n, d);
        cout << ways << endl;
    }

    return 0;
}
