// #include <bits/stdc++.h>
// using namespace std;

// string reverseWord(const string &word)
// {
//     string reversed = word;
//     reverse(reversed.begin(), reversed.end());
//     return reversed;
// }

// int main()
// {
//     string str;
//     getline(cin, str);

//     stringstream ss(str);
//     string word;
//     bool firstWord = true;

//     while (ss >> word)
//     {
//         if (!firstWord)
//         {
//             cout << " ";
//         }
//         cout << reverseWord(word);
//         firstWord = false;
//     }
//     cout << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

string reverseWord(const string &word)
{
    string reversed = word;
    reverse(reversed.begin(), reversed.end());

    return reversed;
}
int main()
{

    string str;
    getline(cin, str);
    stringstream ss(str);
    string word;

    bool firstWord = true;
    while (ss >> word)
    {
        // cout << word << endl;

        if (!firstWord)
        {
            cout << " ";
        }
        cout << reverseWord(word);
        firstWord = false;
    }

    return 0;
}
