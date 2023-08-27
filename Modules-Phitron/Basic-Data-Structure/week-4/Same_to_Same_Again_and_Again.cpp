#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    stack<int> stackA;
    queue<int> queueB;

    // Read list A and push elements into the stack
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        stackA.push(val);
    }

    // Read list B and enqueue elements into the queue
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        queueB.push(val);
    }

    // Compare elements from stack and queue
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

    // Check if both stack and queue are empty
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
