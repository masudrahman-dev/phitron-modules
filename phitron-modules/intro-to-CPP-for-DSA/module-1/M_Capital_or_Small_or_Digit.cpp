#include <bits/stdc++.h>
using namespace std;
int main()
{

    char c;
    cin >> c;
    if (c >= '0' && c <= '9')
    {
        cout << "IS DIGIT";
    }
    else
    {
        if (isupper(c))
        {
            cout << "ALPHA\nIS CAPITAL";
        }
        else
        {
            cout << "ALPHA\nIS SMALL";
        }
    }

    return 0;
}
