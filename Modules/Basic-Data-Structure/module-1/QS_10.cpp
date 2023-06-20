#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n]; // 4**5   t = n*n s= n
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
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
// // why time complexity O(N)

// What will be the final outcome of the following complexity?
//  O(N*N+N+N/2)
/**
 *  O(N*N+2N/2)
 *  O(N*N+N)
 *  O(N*N+N)
 *  O(N*N) worst case
 *
 */
// You have selected "O(N)" but correct answer is "O(N*N)".
