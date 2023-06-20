#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++) // N
    {
        for (int j = i + 1; j < n; j++) //N  N*N 
        {
            if (a[i] > a[j])
                swap(a[i], a[j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}

// You have selected "O(Nlog(N))" but correct answer is "O(N*N)".
