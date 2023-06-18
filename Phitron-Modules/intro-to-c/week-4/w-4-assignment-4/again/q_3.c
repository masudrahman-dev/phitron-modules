// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int count_before_zero(int arr[], int n)
// {
//     int counter = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != 0)
//         {
//             counter++;
//         }
//     }
//     // printf("%d\n", counter);
//     return counter;
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

//     int count = count_before_zero(arr, n);
//     printf("%d\n", count);
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>

/* Function to count the number of elements before the first occurrence of zero */
int count_before_zero(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            count++;
        }
        else
        {
            break; // exit loop when first zero is found
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

    int count = count_before_zero(arr, n);

    printf("%d\n", count);

    return 0;
}
