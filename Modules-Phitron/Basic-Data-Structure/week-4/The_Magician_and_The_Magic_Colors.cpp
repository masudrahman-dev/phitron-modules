#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Function to determine the result of color mixing
string mixColors(const string &colors)
{
    stack<char> result;

    for (char color : colors)
    {
        if (!result.empty() && result.top() == color)
        {
            result.pop(); // Two same colors vanish each other
        }
        else if (!result.empty())
        {
            char topColor = result.top();
            if ((topColor == 'R' && color == 'B') || (topColor == 'B' && color == 'R'))
            {
                result.pop(); // Red + Blue = Purple
                result.push('P');
            }
            else if ((topColor == 'R' && color == 'G') || (topColor == 'G' && color == 'R'))
            {
                result.pop(); // Red + Green = Yellow
                result.push('Y');
            }
            else if ((topColor == 'B' && color == 'G') || (topColor == 'G' && color == 'B'))
            {
                result.pop(); // Blue + Green = Cyan
                result.push('C');
            }
            else
            {
                result.push(color); // No mixing, push the color onto the stack
            }
        }
        else
        {
            result.push(color); // Stack is empty, push the color onto the stack
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
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        string colors;
        cin >> colors;

        string finalColors = mixColors(colors);
        cout << finalColors << endl;
    }

    return 0;
}
