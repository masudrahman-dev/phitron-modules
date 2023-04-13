#include <stdio.h>
int main()
{
    int n, index;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < n; j++)
    {
        if (arr[j] <= 10)
        {
            index = arr[j];
            printf("A[%d] = %d\n", j, index);
        }
    }
    return 0;
}