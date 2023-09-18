#include <iostream>
#include <vector>

using namespace std;

bool canAchievePerfectScore(int N, int M, vector<int> &marks)
{
    vector<bool> dp(1001, false); // dp[i] represents if it's possible to achieve a total of i marks

    // Base case: It's possible to achieve 0 marks
    dp[0] = true;

    // Loop through all available marks and update possibilities
    for (int i = 0; i < N; ++i)
    {
        for (int j = 1000; j >= marks[i]; --j)
        {
            dp[j] = dp[j] || dp[j - marks[i]];
        }
    }

    // Check if it's possible to achieve a perfect score of 1000
    return dp[1000 - M];
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, M;
        cin >> N >> M;

        vector<int> marks(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> marks[i];
        }

        if (canAchievePerfectScore(N, M, marks))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
