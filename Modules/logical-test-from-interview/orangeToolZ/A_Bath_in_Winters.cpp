#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;

        int people = x / (2 * y);

        cout << people << endl;
    }

    return 0;
}

/**
 * time complexity = O(N)
 * explanation : time complexity depand on number test case
 */