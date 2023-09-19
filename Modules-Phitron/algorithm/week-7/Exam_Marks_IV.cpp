#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int maxWaysToChooseMarks(int n, int m, vector<int>& marks) {
    vector<int> dp(m + 1, 0);
    dp[0] = 1; // There is one way to achieve a sum of 0, by not choosing any mark.

    for (int i = 0; i < n; ++i) {
        for (int j = marks[i]; j <= m; ++j) {
            dp[j] = (dp[j] + dp[j - marks[i]]) % MOD;
        }
    }

    return dp[m];
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> marks(n);
        for (int i = 0; i < n; ++i) {
            cin >> marks[i];
        }

        int maxWays = maxWaysToChooseMarks(n, 1000 - m, marks); // Find the max ways to reach 1000
        cout << maxWays << endl;
    }

    return 0;
}
