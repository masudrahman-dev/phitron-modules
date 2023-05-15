#include <stdio.h>

int minOperations(int arr[], int n)
{
    int countEven = 0;
    int countOdd = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            countEven++;
        else
            countOdd++;
    }

    if (countEven == countOdd)
        return 0;

    if (countEven > countOdd)
    {
        int diff = countEven - countOdd;
        if (diff % 2 == 0)
            return diff / 2;
        else
            return -1;
    }
    else
    {
        int diff = countOdd - countEven;
        return diff;
    }
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int minOps = minOperations(arr, n);
        printf("%d\n", minOps);
    }

    return 0;
}
