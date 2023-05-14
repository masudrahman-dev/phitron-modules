#include <stdio.h>

int main()
{
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    //   printf("\n");
    for (j = 0; j < m; j++)
    { // printing last row
        printf("%d ", arr[n - 1][j]);
    }
    printf("\n");
    for (i = 0; i < n; i++)
    { // printing last column
        printf("%d ", arr[i][m - 1]);
    }
    return 0;
}
