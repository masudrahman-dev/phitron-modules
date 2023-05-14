
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int d_1 = 0;
    int d_2 = 0;
    int j = n - 1;
    for (int i = 0; i < n; i++)
    {
        d_1 += arr[i][i];
        d_2 += arr[j][i];
        j--;
    }
    int total_d_1 = abs(d_1);
    int total_d_2 = abs(d_2);
    int result = total_d_1 + total_d_2;
    // printf("%d\n", d_1);
    // printf("%d\n", d_2);
    printf("%d\n", result);
    return 0;
}
