#include <bits/stdc++.h>
using namespace std;

bool canAchieve(int n, int m, vector<int> &marks) {
    vector<bool> dp(1001, false);
    dp[0] = true;

    for (int i = 0; i < n; ++i) {
        for (int j = marks[i]; j <= 1000; ++j) {
            dp[j] = dp[j] || dp[j - marks[i]];
        }
    }

    return dp[1000 - m];
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

        if (canAchieve(n, m, marks)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
