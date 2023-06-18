// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // freopen("input.txt", "r", stdin);
//     // freopen("output.txt", "w", stdout);
//     int n = 7;

//     int m = (n / 2);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (i == j)
//             {

//                 if (i == j && i == m)
//                 {
//                     cout << "x";
//                 }
//                 else
//                 {
//                     cout << "\\";
//                 }
//             }
//             if (i + j == n - 1)
//             {
//                 if (i + j == n - 1 &&  i == m)
//                 {
//                     // cout << " ";
//                 }
//                 else
//                 {

//                     cout << "/";
//                 }
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }
// //    else if (i == j & i == m)
// //             {
// //                 cout << "x";
// //             }
// // else if (i == j & i == m),
// // {
// //     cout << "x", ar m hocche, m = (n / 2) + 1

// // int m = (n / 2) ; Middle row index

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int n = 7;
    int n;
    cin >> n;
    int m = n / 2;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j && i == m)
            {
                cout << "X";
            }

            else if (i == j)
            {
                cout << "\\";
            }
            else if (i + j == n - 1)
            {
                cout << "/";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
