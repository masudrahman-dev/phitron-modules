#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, result = 0;
    char s, q;
    cin >> a >> s >> b >> q >> c;

    if (s == '+')
    {
        result = a + b;
    }
    else if (s == '-')
    {
        result = a - b;
    }
    else
    {
        result = a * b;
    }
    if (c == result)
    {
        cout << "Yes";
    }
    else
    {
        cout << result;
    }

    return 0;
}
