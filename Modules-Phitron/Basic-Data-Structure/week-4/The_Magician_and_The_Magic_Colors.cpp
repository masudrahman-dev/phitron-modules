#include <bits/stdc++.h>
using namespace std;

string mixColors(const string &colors)
{
    stack<char> result;

    for (char color : colors)
    {
        if (!result.empty() && result.top() == color)
        {
            result.pop();
        }
        else if (!result.empty())
        {
            char topColor = result.top();
            if ((topColor == 'R' && color == 'B') || (topColor == 'B' && color == 'R'))
            {
                result.pop();
                result.push('P');
            }
            else if ((topColor == 'R' && color == 'G') || (topColor == 'G' && color == 'R'))
            {
                result.pop();
                result.push('Y');
            }
            else if ((topColor == 'B' && color == 'G') || (topColor == 'G' && color == 'B'))
            {
                result.pop();
                result.push('C');
            }
            else
            {
                result.push(color);
            }
        }
        else
        {
            result.push(color);
        }
    }

    string finalColors;
    while (!result.empty())
    {
        finalColors = result.top() + finalColors;
        result.pop();
    }

    return finalColors;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string colors;
        cin >> colors;

        string finalColors = mixColors(colors);
        cout << finalColors << endl;
    }

    return 0;
}
