#include <stdio.h>
int main()
{
    int n, x, v;
    scanf("%d", &n);
    int arr[n];
    int copy_arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // access array value
    scanf("%d %d", &x, &v);
    for (int j = 0; j < n; j++)
    {
        if (j == x)
        {
            arr[j] = v;
        }
        copy_arr[j] = arr[j];
        // printf("%d ", arr[j]);

        // printf("%d ", copy_arr[j]);
    }

    // reverse array

    int k = 0;
    int len = n - 1;
    while (k < len)
    {
        int temp;

        temp = copy_arr[k];
        copy_arr[k] = copy_arr[len];
        copy_arr[len] = temp;
        k++;
        len--;
    }

    for (int l = 0; l < n; l++)
    {
        printf("%d ", copy_arr[l]);
    }

    return 0;
}