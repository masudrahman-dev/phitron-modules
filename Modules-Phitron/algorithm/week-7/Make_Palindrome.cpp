#include <bits/stdc++.h>
using namespace std;

int minPalindrome(string s)
{
    int n = s.length();
    vector<vector<int>> dp(n, vector<int>(n, 0));

    for (int gap = 1; gap < n; gap++)
    {
        for (int l = 0, r = gap; r < n; l++, r++)
        {
            if (s[l] == s[r])
            {
                dp[l][r] = dp[l + 1][r - 1];
            }
            else
            {
                dp[l][r] = 1 + min(dp[l + 1][r], dp[l][r - 1]);
            }
        }
    }

    return dp[0][n - 1];
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string s;
        cin >> s;

        int result = minPalindrome(s);
        cout << result << endl;
    }

    return 0;
}
