#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string s;
        getline(cin, s);

        stringstream ss(s);
        string word;
        map<string, int> wordFreq;
        vector<string> maxFreqWords;
        int maxFreq = 0;

        while (ss >> word)
        {
            wordFreq[word]++;
            if (wordFreq[word] == maxFreq)
            {
                maxFreqWords.push_back(word);
            }
            else if (wordFreq[word] > maxFreq)
            {
                maxFreqWords.clear();
                maxFreqWords.push_back(word);
                maxFreq = wordFreq[word];
            }
        }

        cout << maxFreqWords[0] << " " << maxFreq << endl;
    }

    return 0;
}
