#include <bits/stdc++.h>
using namespace std;

bool isValidString(const string &s)
{
    stack<char> st;

    for (char c : s)
    {
        if (st.empty())
        {
            st.push(c);
        }
        else
        {
            if (c == 'A' && st.top() == 'B')
            {
                st.pop();
            }
            else if (c == 'B' && st.top() == 'A')
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }
    }

    return st.empty();
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        if (isValidString(s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
