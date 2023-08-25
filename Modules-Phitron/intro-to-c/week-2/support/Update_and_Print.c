#include <stdio.h>
int main()
{
    int n, index, value;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // access

    for (int j = 0; j < n; j++)
    {
        if (j == 3)
        {
            printf("%d\n", arr[3]);
        }
    }

    return 0;
}