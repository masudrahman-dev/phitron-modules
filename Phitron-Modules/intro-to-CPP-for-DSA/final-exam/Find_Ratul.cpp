#include <bits/stdc++.h>
using namespace std;

string findRatul(const string &str)
{
    stringstream ss(str);
    string word;
    while (ss >> word)
    {

        if (word == "Ratul")
        {
            // cout << "YES" << endl;
            return "YES";
        }
    }
    return "NO";
}

int main()
{
    string str;
    getline(cin, str);

    string v = findRatul(str);
    cout << v;
    return 0;
}
// int index = str.find("Ratul");
// cout << index;
// if (index != -1)
// {
//     cout << "YES" << endl;
// }
// else
// {
//     cout << "NO" << endl;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s;
//     cin >> s;

//     bool found = false;
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i] == 'R' && s[i + 1] == 'a' && s[i + 2] == 't' && s[i + 3] == 'u' && s[i + 4] == 'l')
//         {
//             found = true;
//         }
//     }

//     if (found == true)
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }

//     return 0;
// }
