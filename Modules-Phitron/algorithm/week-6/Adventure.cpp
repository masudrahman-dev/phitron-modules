#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int knapsack(int N, int W, vector<int> &w, vector<int> &v)
{
    vector<vector<int>> dp(N + 1, vector<int>(W + 1, 0));

    for (int i = 1; i <= N; ++i)
    {
        for (int j = 0; j <= W; ++j)
        {
            if (w[i - 1] <= j)
            {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i - 1]] + v[i - 1]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    return dp[N][W];
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, W;
        cin >> N >> W;
        vector<int> w(N);
        vector<int> v(N);

        for (int i = 0; i < N; ++i)
        {
            cin >> w[i];
        }

        for (int i = 0; i < N; ++i)
        {
            cin >> v[i];
        }

        int result = knapsack(N, W, w, v);
        cout << result << endl;
    }

    return 0;
}
