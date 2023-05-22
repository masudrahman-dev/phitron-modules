#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void min_max(int arr[], int n)
{
    // int sort_arr[n];
    int min = arr[0];
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        // printf("%d ", arr[i]);
        if (min > arr[i])
        {
            min = arr[i];
        }
        else if (max < arr[i])
        {
            max = arr[i];
        }
    }

    printf("%d %d\n", min, max);
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    min_max(arr, n);
    return 0;
}
