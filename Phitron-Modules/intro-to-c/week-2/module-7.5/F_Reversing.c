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

    int j = n;
    while (j > 0)
    {

        j--;
        printf("%d ", arr[j]);
    }

    return 0;
}