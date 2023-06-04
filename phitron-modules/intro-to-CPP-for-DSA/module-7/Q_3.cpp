#include <bits/stdc++.h>
using namespace std;

int main()
{
    string sentence, word;
    getline(cin, sentence);
    // cin.ignore();
    cin >> word;

    int count = 0;
    stringstream ss(sentence);
    string token;

    while (ss >> token)
    {
        if (token == word)

        {
            // cout << token << endl;
            count++;
        }
    }
    cout << count;
    return 0;
}
