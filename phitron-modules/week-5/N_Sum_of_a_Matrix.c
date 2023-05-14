#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int solve(int i, int j)
{

    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    int b[r][c];
    // int arr[r][c];

    if (i == r || j == 0)
    {
        return 0;
    }

    scanf("%d", &a[i], b[j]);
    printf("%d\n", a[i][j]);
    solve(i += 1, j += 1);
}
int main()
{
    int i = 0, j = 0;
    solve(i, j);

    return 0;
}

// for (int i = 0; i < r; i++)
// {
//     for (int j = 0; j < c; j++)
//     {
//         scanf("%d", &a[i][j]);
//     }
// }
// for (int i = 0; i < r; i++)
// {
//     for (int j = 0; j < c; j++)
//     {
//         scanf("%d", &b[i][j]);
//     }
// }

// for (int i = 0; i < r; i++)
// {
//     for (int j = 0; j < c; j++)
//     {
//         arr[i][j] = a[i][j] + b[i][j];
//     }
// }
// for (int i = 0; i < r; i++)
// {
//     for (int j = 0; j < c; j++)
//     {
//         printf("%d ", arr[i][j]);
//     }
//     printf("\n");
// }