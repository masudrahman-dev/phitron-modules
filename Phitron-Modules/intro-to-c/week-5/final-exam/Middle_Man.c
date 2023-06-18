// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > arr[i + 1])
//         {
//             int temp = arr[i];
//             arr[i] = arr[i + 1];
//             arr[i + 1] = temp;
//         }

//         printf("%d ", arr[i]);
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int n, i, j, tmp;
//     int *ages;

//     scanf("%d", &n);

//     ages = (int *)malloc(n * sizeof(int));

//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &ages[i]);
//     }

//     // sort the array
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n - 1; j++)
//         {
//             if (ages[j] > ages[j + 1])
//             {
//                 tmp = ages[j];
//                 ages[j] = ages[j + 1];
//                 ages[j + 1] = tmp;
//             }
//         }
//     }

//     // output the middle age(s)
//     if (n % 2 == 1)
//     {
//         printf("%d\n", ages[n / 2]);
//     }
//     else
//     {
//         printf("%d %d\n", ages[n / 2 - 1], ages[n / 2]);
//     }

//     free(ages);
//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int max = arr[0];
//     int min = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//         if (arr[i] < min)
//         {
//             min = arr[i];
//         }
//     }
//     printf("%d %d", max, min);
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, temp, mid, mid1, mid2;
    int age[100];


    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &age[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (age[i] > age[j])
            {
                temp = age[i];
                age[i] = age[j];
                age[j] = temp;
            }
        }
    }

    //  middle element
    if (n % 2 == 0)
    {
        mid1 = n / 2;
        mid2 = mid1 + 1;
        printf("%d %d", age[mid1 - 1], age[mid2 - 1]);
    }
    else
    {
        mid = (n + 1) / 2;
        printf("%d", age[mid - 1]);
    }

    return 0;
}
