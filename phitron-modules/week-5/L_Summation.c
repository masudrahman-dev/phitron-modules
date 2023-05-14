// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int solve(int arr[], int n, int i)
// {
//     int sum = 0;
//     if (n == i)
//     {
//         return sum;
//     }
//     // sum += arr[i];
//     printf("%d %d\n", sum, arr[i]);
//     sum += solve(arr, n, i + 1);
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
//     // for (int i = 0; i < n; i++)
//     // {
//     //     printf("%d\n", arr[i]);
//     // }

//     int result = solve(arr, n, 0);
//     printf("%d\n", result);
//     return 0;
// }

#include <stdio.h>

int sum(int arr[], int n)
{
    int add = 0;
    if (n == 0)
    { // base case: array is empty, return 0
        return add;
    }
    // printf("%d ", arr[n - 1]);
    // printf("%d %d", arr, n - 1);
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    // printf("\n");
    add += arr[n - 1] + sum(arr, n - 1); // recursive case: add last element and sum of the rest of the array
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
    int total = sum(arr, n);
    // printf("\n");
    printf("%d", total);
    return 0;
}
