#include <bits/stdc++.h>
using namespace std;

string replaceEGYPT(const string &str)
{
    string result = str;
    size_t found = result.find("EGYPT");
    while (found != string::npos)
    {
        result.replace(found, 5, " ");
        found = result.find("EGYPT", found + 1);
    }
    return result;
}

int main()
{
    string str;
    getline(cin, str);

    string replaced = replaceEGYPT(str);
    cout << replaced << endl;

    return 0;
}
