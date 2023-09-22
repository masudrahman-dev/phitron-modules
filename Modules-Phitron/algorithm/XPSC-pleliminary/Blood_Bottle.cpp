// #include <iostream>
// #include <string>

// using namespace std;

// int main()
// {
//     int T;
//     cin >> T;

//     while (T--)
//     {
//         string s;
//         cin >> s;

//         int zazaCount = 0;
//         int i = 0;
//         int n = s.length();

//         while (i < n)
//         {
//             if (s[i] == '1')
//             {
//                 int j = i;
//                 while (j < n && s[j] == '1')
//                 {
//                     j++;
//                 }
//                 zazaCount++;
//                 i = j;
//             }
//             else
//             {
//                 i++;
//             }
//         }

//         cout << zazaCount << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <string>

// using namespace std;

// int main()
// {
//     int T;
//     cin >> T;

//     while (T--)
//     {
//         string S;
//         cin >> S;

//         int zazaCount = 0;
//         int currentCount = 0;

//         for (char bottle : S)
//         {
//             if (bottle == '1')
//             {
//                 currentCount++;
//             }
//             else
//             {
//                 zazaCount += (currentCount + 1) / 2;
//                 currentCount = 0;
//             }
//         }

//         zazaCount += (currentCount + 1) / 2;
//         cout << zazaCount << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int zazaDrank = 0;
        int consecutiveOnes = 0;

        for (char c : s)
        {
            if (c == '1')
            {
                consecutiveOnes++;
            }
            else
            {
                zazaDrank += (consecutiveOnes + 1) / 2;
                consecutiveOnes = 0;
            }
        }

        zazaDrank += (consecutiveOnes + 1) / 2;

        cout << zazaDrank << endl;
    }

    return 0;
}
