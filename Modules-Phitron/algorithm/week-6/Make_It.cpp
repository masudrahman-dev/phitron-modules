#include <iostream>
#include <vector>

using namespace std;

bool canReachN(int N)
{
    // Initialize a vector to store whether it's possible to reach each number from 1 to N
    vector<bool> dp(N + 1, false);

    // Base case: It's possible to reach 1 by starting from 1
    dp[1] = true;

    // Loop through all numbers from 1 to N
    for (int i = 1; i <= N; ++i)
    {
        // If it's possible to reach the current number i, update the possibilities for i + 3 and i * 2
        if (dp[i])
        {
            if (i + 3 <= N)
                dp[i + 3] = true;
            if (i * 2 <= N)
                dp[i * 2] = true;
        }
    }

    // Check if it's possible to reach N
    return dp[N];
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        if (canReachN(N))
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
