#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 7;
    int s = n - 1;
    int k = 1;
    int line = (n * 2) - 1;
    for (int i = 1; i <= line; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            cout << "#";
        }
        for (int j = 1; j <= k; j++)
        {
            cout << "$";
        }
        if (i <= n - 1)
        { 
            s = s - 1;
            k = k + 2;
        }
        else
        {
            s = s + 1;
            k = k - 2;
        }

        cout << endl;
    }

    return 0;
}
