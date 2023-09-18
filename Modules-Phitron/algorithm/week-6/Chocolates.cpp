#include <iostream>
#include <vector>

using namespace std;

bool canDivideChocolates(int N, vector<int> &chocolates)
{
    int totalChocolates = 0;

    // Calculate the total number of chocolates in all boxes
    for (int i = 0; i < N; ++i)
    {
        totalChocolates += chocolates[i];
    }

    // Check if the total number of chocolates is even
    if (totalChocolates % 2 != 0)
    {
        return false; // If it's odd, can't be divided equally
    }

    int targetChocolates = totalChocolates / 2;
    vector<bool> dp(targetChocolates + 1, false);

    // Base case: It's possible to achieve 0 chocolates
    dp[0] = true;

    // Loop through all boxes and update possibilities for different chocolate counts
    for (int i = 0; i < N; ++i)
    {
        for (int j = targetChocolates; j >= chocolates[i]; --j)
        {
            dp[j] = dp[j] || dp[j - chocolates[i]];
        }
    }

    // If it's possible to achieve exactly half of the total chocolates, it's possible to divide them equally
    return dp[targetChocolates];
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<int> chocolates(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> chocolates[i];
        }

        if (canDivideChocolates(N, chocolates))
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
