#include <bits/stdc++.h>
using namespace std;

vector<vector<char>> grid;
vector<vector<bool>> visited;

int N, M;

bool isValid(int x, int y)
{
    return x >= 0 && x < N && y >= 0 && y < M && grid[x][y] == '.';
}

int dfs(int x, int y)
{
    visited[x][y] = true;
    int area = 1; // Initialize the area of the component

    // Possible directions: Up, Down, Left, Right
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};

    for (int i = 0; i < 4; i++)
    {
        int newX = x + dx[i];
        int newY = y + dy[i];

        if (isValid(newX, newY) && !visited[newX][newY])
        {
            area += dfs(newX, newY); // Recursively count the area of this component
        }
    }

    return area;
}

int main()
{
    cin >> N >> M;

    grid.resize(N, vector<char>(M));
    visited.resize(N, vector<bool>(M, false));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> grid[i][j];
        }
    }

    int minArea = -1; // Initialize to -1 if no components found

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (grid[i][j] == '.' && !visited[i][j])
            {
                int componentArea = dfs(i, j);

                // Update the minimum area if this component is smaller
                if (minArea == -1 || componentArea < minArea)
                {
                    minArea = componentArea;
                }
            }
        }
    }

    cout << minArea << endl;

    return 0;
}
