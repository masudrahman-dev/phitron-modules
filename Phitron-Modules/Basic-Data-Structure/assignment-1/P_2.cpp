#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 7;
    int s = n - 1;
    int k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            cout << "#";
        }
        for (int j = 1; j <= k; j++)
        {
            cout << "*";
        }
        cout << endl;
        s--;
        k = k + 2;
    }
    int s2 = 1;
    int k2 = (n * 2) - 1;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= s2; j++)
        {
            cout << "#";
        }
        for (int j = 1; j <= k2-1; j++)
        {
            cout << "*";
        }

        cout << endl;
        s2 = s2 + 1;
        k2 = k2 - 2;
    }

    return 0;
}
