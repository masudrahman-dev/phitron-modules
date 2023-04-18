#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int pos, val;
    scanf("%d %d", &pos, &val);
    // reverse array
    for (int j = n; j >= pos + 1; j--)
    {
        printf("%d ", arr[j]);
        arr[j] = arr[j - 1];
        printf("%d ", arr[j]);
        printf("\n");
    }

    arr[pos] = val;

    for (int k = 0; k < n; k++)
    {
        printf("%d\n", arr[k]);
    }

    return 0;
}