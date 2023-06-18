#include <bits/stdc++.h>
using namespace std;

int main()
{

    int x, n;
    cin >> x >> n;
    int i = 2;
    long long int sum = 0;
    while (i < n)
    {
        int v = pow(x, i);
        sum += v;

        i += 2;
    }
    cout << sum << endl;
    return 0;
}
