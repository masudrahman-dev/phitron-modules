#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d ", &n);
    int arr_1[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr_1[i]);
    }
    scanf("%d ", &m);
    int arr_2[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr_2[i]);
    }

    // arr_1

    int arr_ans[n + m];
    for (int j = 0; j < n; j++)
    {
        arr_ans[j] = arr_1[j];

        // printf("%d\n", arr_ans[j]);f
    }
    // arr_2
    int j = n;
    for (int k = 0; k < m; k++)
    {
        arr_ans[j] = arr_2[k];
        j++;
    }

    for (int i = 0; i < n + m; i++)
    {
        printf("%d\n", arr_ans[i]);
    }

    return 0;
}