// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int even = 0, odd = 0;
//         int a[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             if (a[i] % 2 == 0)
//             {
//                 even++;
//             }
//             else
//             {
//                 odd++;
//             }
//         }
//         int diff = abs(even - odd);
//         if (diff % 2 == 1)
//         {
//             cout << -1 << endl;
//         }
//         else
//         {
//             cout << diff / 2 << endl;
//         }
//     }
//     return 0;
// }

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
        int arr[n];
        int even = 0, odd = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }

        int diff = abs(even - odd);
        if (diff % 2 == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << diff / 2 << endl;
        }
    }

    return 0;
}
