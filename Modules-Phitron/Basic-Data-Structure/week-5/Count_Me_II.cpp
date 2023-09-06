#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }

        if (!v.empty())
        {
            map<int, int> freq;
            int maxCount = 0;
            int mostFreqVal = v[0];

            for (int i = 0; i < n; ++i)
            {
                freq[v[i]]++;
                if (freq[v[i]] > maxCount || (freq[v[i]] == maxCount && v[i] > mostFreqVal))
                {
                    mostFreqVal = v[i];
                    maxCount = freq[v[i]];
                }
            }
            cout << mostFreqVal << " " << maxCount << endl;
        }
    }

    return 0;
}
