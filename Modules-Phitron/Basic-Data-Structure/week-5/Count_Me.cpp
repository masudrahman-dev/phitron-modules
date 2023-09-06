#include <bits/stdc++.h>
using namespace std;


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
     
        while (ss >> word)
        {
            wordFreq[word]++;
        }

        string mostFreqWord;
        int maxFreq = 0;


        for ( auto &pair : wordFreq)
        {
            if (pair.second > maxFreq)
            {
                mostFreqWord = pair.first;
                maxFreq = pair.second;
            }
        }

        cout << mostFreqWord << " " << maxFreq << endl;
    }

    return 0;
}
