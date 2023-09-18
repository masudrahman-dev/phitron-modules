#include <iostream>
#include <queue>
#include <vector>

using namespace std;

struct Cell
{
    int x, y, dist;
};

// Possible knight moves
const int dx[] = {-2, -2, -1, -1, 1, 1, 2, 2};
const int dy[] = {-1, 1, -2, 2, -2, 2, -1, 1};

int minKnightSteps(int N, int M, int Ki, int Kj, int Qi, int Qj)
{
    vector<vector<bool>> visited(N, vector<bool>(M, false));
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

        // Try all possible knight moves
        for (int i = 0; i < 8; ++i)
        {
            int newX = current.x + dx[i];
            int newY = current.y + dy[i];

            if (newX >= 0 && newX < N && newY >= 0 && newY < M && !visited[newX][newY])
            {
                visited[newX][newY] = true;
                q.push({newX, newY, current.dist + 1});
            }
        }
    }

    // If the queen is unreachable
    return -1;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, M, Ki, Kj, Qi, Qj;
        cin >> N >> M >> Ki >> Kj >> Qi >> Qj;

        int steps = minKnightSteps(N, M, Ki, Kj, Qi, Qj);

        cout << steps << endl;
    }

    return 0;
}
