#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Function to check if the string is valid
bool isValidString(const string &s)
{
    stack<char> st; // Use a stack to keep track of characters

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
                st.pop(); // A deletes previous B
            }
            else if (c == 'B' && st.top() == 'A')
            {
                st.pop(); // B deletes previous A
            }
            else
            {
                st.push(c); // Otherwise, push the character onto the stack
            }
        }
    }

    return st.empty(); // If the stack is empty, the string is valid
}

int main()
{
    int T;
    cin >> T;

    while (T--)
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
