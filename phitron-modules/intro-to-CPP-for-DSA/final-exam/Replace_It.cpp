// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string s, x;
//         cin >> s >> x;
//         int n = s.size();
//         for (int i = 0; i < n; i++)
//         {
//             if (s[i] == x[0])
//             {
//                 s.replace(i, x.size(), "$");
//                 i += x.size() - 1;
//             }
//         }
//         cout << s << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

string rpFunc(string str, string subStr, char ch)
{
    int index = str.find(subStr);
    while (index != -1)
    {
        str.replace(index, subStr.length(), 1, ch);
        index = str.find(subStr, index + 1);
    }
    return str;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string s, x;
        getline(cin, s, ' ');
        getline(cin, x);

        s = rpFunc(s, x, '$');
        cout << s << endl;
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// string replace(string str, string subStr, char replaceChar)
// {
//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str.substr(i, subStr.length()) == subStr)
//         {
//             str.replace(i, subStr.length(), 1, replaceChar);
//         }
//     }
//     return str;
// }

// int main()
// {
//     int T;
//     cin >> T;
//     while (T--)
//     {
//         string S, X;
//         cin >> S >> X;

//         S = replace(S, X, '$');
//         cout << S << endl;
//     }

//     return 0;
// }
