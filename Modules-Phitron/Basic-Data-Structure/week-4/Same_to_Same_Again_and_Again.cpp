#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    stack<int> stackA;
    queue<int> queueB;

<<<<<<< HEAD

=======
    // Read list A and push elements into the stack
>>>>>>> 3ea815081c650486e71d19b81e50515bcb06ac68
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        stackA.push(val);
    }

<<<<<<< HEAD
=======
    // Read list B and enqueue elements into the queue
>>>>>>> 3ea815081c650486e71d19b81e50515bcb06ac68
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        queueB.push(val);
    }

<<<<<<< HEAD

=======
    // Compare elements from stack and queue
>>>>>>> 3ea815081c650486e71d19b81e50515bcb06ac68
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

<<<<<<< HEAD
=======
    // Check if both stack and queue are empty
>>>>>>> 3ea815081c650486e71d19b81e50515bcb06ac68
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
