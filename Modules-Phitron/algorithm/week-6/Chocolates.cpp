#include <bits/stdc++.h>
using namespace std;


bool canDivide(int n, vector<int> &chocolates)
{
    int totalChocolates = 0;


    for (int i = 0; i < n; ++i)
    {
        totalChocolates += chocolates[i];
    }

  
    if (totalChocolates % 2 != 0)
    {
        return false; 
    }

    int targetChocolates = totalChocolates / 2;
    vector<bool> dp(targetChocolates + 1, false);

  
    dp[0] = true;


    for (int i = 0; i < n; ++i)
    {
        for (int j = targetChocolates; j >= chocolates[i]; --j)
        {
            dp[j] = dp[j] || dp[j - chocolates[i]];
        }
    }

    return dp[targetChocolates];
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> chocolates(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> chocolates[i];
        }

        if (canDivide(n, chocolates))
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
