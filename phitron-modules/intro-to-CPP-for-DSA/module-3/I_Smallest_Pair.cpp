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
        // int *arr = new int[n];
        int arr[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        int i, j;
        for (i = 1; i <= n; i++)
        {
            for (j = 2; j <= n; j++)
            {
                int sum = arr[i] + arr[j] + j - i;
                cout << sum << "\n";
            }
            j + 1;
        }
        // delete[] arr;
    }

    return 0;
}
