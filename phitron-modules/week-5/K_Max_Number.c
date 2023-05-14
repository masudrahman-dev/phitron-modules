// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int max_num(int arr[], int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     if (arr[n - 1] < arr[n])
//     {
//         printf("%d\n", arr[n - 1]);
//     }

//     printf("%d ", arr[n - 1]);
//     max_num(arr, n - 1);
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int result = max_num(arr, n);
//     printf("%d\n", result);
//     return 0;
// }

#include <stdio.h>

int max(int arr[], int n)
{
    if (n == 1)
    {
        return arr[0];
    }
    else
    {
        int m = max(arr, n - 1);
        return m > arr[n - 1] ? m : arr[n - 1];
    }
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
    printf("%d", max(arr, n));
    return 0;
}
