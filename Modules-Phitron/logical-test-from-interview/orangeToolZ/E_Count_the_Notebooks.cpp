#include <bits/stdc++.h>
using namespace std;

int calculate(int w)
{
    int pages = w * 1000;
    int notebooks = pages / 100;
    return notebooks;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w;
        cin >> w;
        int notebooks = calculate(w);
        cout << notebooks << endl;
    }

    return 0;
}

/**
 * Time complexity = O(N)
 * explanation:
 * above the code the time complexity depand on number of test of while loop;
 */