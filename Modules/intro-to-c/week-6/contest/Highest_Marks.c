#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int max = 0;
    int new_arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (max < arr[i])
        {
            max = arr[i];
            // printf("%d\n", arr[i]);
        }
    }
    // printf("%d\n", max);
    for (int i = 0; i < n; i++)
    {
        new_arr[i] = max - arr[i];
        // printf("%d ", arr[i]);

        printf("%d ", new_arr[i]);
    }

    return 0;
}
