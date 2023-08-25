#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string word;
        cin >> word;
        int len = word.length();
        // cout << len << endl;
        if (len <= 10)
        {
            cout << word << endl;
        }
        else
        {

            char firstChar = word[0];
            char lastChar = word[len - 1];
            // cout << firstChar << lastChar << endl;
            cout << firstChar << len - 2 << lastChar << endl;
        }
    }

    return 0;
}

/**
 * Time complexity = O(N)
 * explanation:
 * the code need to complete the steps denpand on test case if the testcase is increase the time will be increase
 */