#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int pos;
    scanf("%d", &pos);
    for (int j = pos; j < n; j++)
    {
        // printf("%d\n", arr[j]);
        arr[j] = arr[j + 1];
        // printf("%d\n", arr[j]);
    }
    for (int k = 0; k < n - 1; k++)
    {
        printf("%d\n", arr[k]);
    }

    return 0;
}