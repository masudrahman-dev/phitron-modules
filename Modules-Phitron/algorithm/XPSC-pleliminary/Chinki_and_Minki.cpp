#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<int> coins(N);
        int totalSum = 0;

        for (int i = 0; i < N; ++i)
        {
            cin >> coins[i];
            totalSum += coins[i];
        }

        int targetSum = totalSum / 2;
        vector<vector<bool>> dp(N + 1, vector<bool>(targetSum + 1, false));

        dp[0][0] = true;

        for (int i = 1; i <= N; ++i)
        {
            for (int j = 0; j <= targetSum; ++j)
            {
                dp[i][j] = dp[i - 1][j];
                if (j >= coins[i - 1])
                {
                    dp[i][j] = dp[i][j] || dp[i - 1][j - coins[i - 1]];
                }
            }
        }

        int minDiff = totalSum;
        for (int j = targetSum; j >= 0; --j)
        {
            if (dp[N][j])
            {
                minDiff = totalSum - 2 * j;
                break;
            }
        }

        cout << minDiff << endl;
    }

    return 0;
}
