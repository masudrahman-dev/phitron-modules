
#include <stdio.h>

int sum(int arr[], int n)
{
    // base case
    if (n == 0)
    {
        return 0;
    }
    else
    {
        // recursively calling the function
        printf("%d\n", arr[0]);
        return arr[0] + sum(arr + 1, n - 1);
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
    int total = sum(arr, n);
    printf("%d", total);
    return 0;
}
