#include <bits/stdc++.h>
using namespace std;

int main()
{

    int count = 0;
    int n = 10;
    for (int i = n; i > 0; i /= 2) // O(log n)
    {
        // cout << i << " ";
        for (int j = 0; j < n; j += 5) // // O( n)
        {
            count += 1;
        }
    }

    int m = 1;
    for (int i = 0; m <= n; i++)
    {
        cout << i << " ";
        m += i;
    }

    return 0;
}
