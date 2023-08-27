#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    stack<int> stackA;
    queue<int> queueB;


    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        stackA.push(val);
    }

    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        queueB.push(val);
    }


    while (!stackA.empty() && !queueB.empty())
    {
        int topStack = stackA.top();
        int frontQueue = queueB.front();

        if (topStack != frontQueue)
        {
            cout << "NO" << endl;
            return 0;
        }

        stackA.pop();
        queueB.pop();
    }

    if (stackA.empty() && queueB.empty())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
