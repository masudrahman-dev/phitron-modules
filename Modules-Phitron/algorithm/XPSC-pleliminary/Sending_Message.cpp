#include <bits/stdc++.h>

using namespace std;

int main()
{
    string word1, word2;

    while (cin >> word1 >> word2)
    {
        int i = 0, j = 0;
        bool possible = true;
        int word1_len = word1.length();
        int word2_len = word2.length();
        while (i < word1_len && j < word2_len)
        {
            if (word1[i] == word2[j])
            {
                i++;
                j++;
            }
            else
            {
                i++;
            }
        }

        if (j == word2.length())
        {
            cout << "Possible" << endl;
        }
        else
        {
            cout << "Impossible" << endl;
        }
    }

    return 0;
}
