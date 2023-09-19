#include <iostream>
#include <string>
#include <vector>

using namespace std;

int shortestCombinedLength(string A, string B) {
    int lenA = A.length();
    int lenB = B.length();
    
    // Initialize a 2D vector to store the longest common suffix length
    vector<vector<int>> dp(lenA + 1, vector<int>(lenB + 1, 0));

    // Fill the dp table to find the longest common suffix length
    for (int i = 1; i <= lenA; i++) {
        for (int j = 1; j <= lenB; j++) {
            if (A[i - 1] == B[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
        }
    }

    // Calculate the combined length of both strings minus the common suffix
    int combinedLength = lenA + lenB - (2 * dp[lenA][lenB]);
    return combinedLength;
}

int main() {
    int T;
    cin >> T;
    cin.ignore(); // Consume the newline character after T

    while (T--) {
        string A, B;
        getline(cin, A);
        getline(cin, B);

        int result = shortestCombinedLength(A, B);
        cout << result << endl;
    }

    return 0;
}
