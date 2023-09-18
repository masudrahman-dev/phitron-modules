#include <bits/stdc++.h>
using namespace std;


struct Cell
{
    int x, y, dist;
};

const int dx[] = {-2, -2, -1, -1, 1, 1, 2, 2};
const int dy[] = {-1, 1, -2, 2, -2, 2, -1, 1};

int minKnightSteps(int n, int m, int Ki, int Kj, int Qi, int Qj)
{
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    queue<Cell> q;

    q.push({Ki, Kj, 0});
    visited[Ki][Kj] = true;

    while (!q.empty())
    {
        Cell current = q.front();
        q.pop();

        if (current.x == Qi && current.y == Qj)
        {
            return current.dist;
        }

    
        for (int i = 0; i < 8; ++i)
        {
            int newX = current.x + dx[i];
            int newY = current.y + dy[i];

            if (newX >= 0 && newX < n && newY >= 0 && newY < m && !visited[newX][newY])
            {
                visited[newX][newY] = true;
                q.push({newX, newY, current.dist + 1});
            }
        }
    }

    return -1;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, Ki, Kj, Qi, Qj;
        cin >> n >> m >> Ki >> Kj >> Qi >> Qj;

        int steps = minKnightSteps(n, m, Ki, Kj, Qi, Qj);

        cout << steps << endl;
    }

    return 0;
}
