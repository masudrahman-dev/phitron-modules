#include <bits/stdc++.h>
using namespace std;

vector<vector<char>> grid;
vector<vector<bool>> visited;

int n, m;

bool isValid(int x, int y)
{
    return x >= 0 && x < n && y >= 0 && y < m && grid[x][y] == '.';
}

void dfs(int x, int y)
{
    visited[x][y] = true;

    // Possible directions: Up, Down, Left, Right
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};

    for (int i = 0; i < 4; i++)
    {
        int newX = x + dx[i];
        int newY = y + dy[i];

        if (isValid(newX, newY) && !visited[newX][newY])
        {
            dfs(newX, newY);
        }
    }
}

int main()
{
    cin >> n >> m;

    grid.resize(n, vector<char>(m));
    visited.resize(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    int si, sj, di, dj;
    cin >> si >> sj >> di >> dj;

    // Start DFS from cell S
    dfs(si, sj);

    // Check if cell D is visited after DFS
    if (visited[di][dj])
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
