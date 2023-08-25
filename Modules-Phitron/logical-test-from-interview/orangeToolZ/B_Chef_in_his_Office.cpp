#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    int totalHours = 0;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int total = 0;
        for (int i = 1; i <= 4; i++)
        {
            total += x;
        }
        totalHours = total + y;
        cout << totalHours << endl;
    }

    return 0;
}

/**
 * Time complexity = O(N*N)
 * 
 * explanation:
 * 
 * above the code I use tow nested loops one while loop that run t input and the another is for loop that run depend on working days if working days is increase the time complexity will be increase.
 * 
 * 
 * 
*/