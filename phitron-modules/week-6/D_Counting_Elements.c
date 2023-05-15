// #include <stdio.h>

// int countMatchingPairs(int arr[], int n)
// {
//     int count = 0;
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 count++;
//                 break;
//             }
//         }
//     }
//     return count;
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

//     int count = countMatchingPairs(arr, n);
//     printf("%d\n", count);

//     return 0;
// }

#include <stdio.h>
#include <stdbool.h>

int countMatchingPairs(int arr[], int n)
{
    int count = 0;
    bool isDuplicate[n];
    for (int i = 0; i < n; i++)
    {
        isDuplicate[i] = false;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j] && !isDuplicate[i])
            {
                count++;
                isDuplicate[i] = true;
                break;
            }
        }
    }

    return count;
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

    int count = countMatchingPairs(arr, n);
    printf("%d\n", count);

    return 0;
}
