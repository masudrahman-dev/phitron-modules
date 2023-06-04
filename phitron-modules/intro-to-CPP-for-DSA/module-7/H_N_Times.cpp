#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char c;
        cin >> n >> c;
        for (size_t i = 0; i < n; i++)
        {
            cout << c << " ";
        }
        cout << "\n";
    }

    return 0;
}
