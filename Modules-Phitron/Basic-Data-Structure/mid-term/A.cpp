#include <bits/stdc++.h>
using namespace std;

int main()
{
    int balls, person;

    cin >> balls >> person;
    if (person == 1)
    {
        cout << 0 << endl;
    }
    else
    {
        int remaining = balls - person;
        cout << remaining;
    }

    return 0;
}
