// #include <stdio.h>

// int main()
// {
//     iint a[n][m];            // declare a 2D array of size n x m
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             scanf("%d", &a[i][j]); // read input values for array elements
//         }
//     }nt n, m, x;
//     scanf("%d %d", &n, &m); // read input values for n and m
//     
//     scanf("%d", &x); // read input value for x
//     int found = 0;   // flag to check if x is found in array
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (a[i][j] == x)
//             {
//                 found = 1; // update flag if x is found
//                 break;
//             }
//         }
//         if (found)
//         {
//             break; // break outer loop if x is found
//         }
//     }
//     if (found)
//     {
//         printf("will not take number\n"); // x is found in array
//     }
//     else
//     {
//         printf("will take number\n"); // x is not found in array
//     }
//     return 0;
// }

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m); // read input values for n and m
    int arr[n][m];          // declare a 2D array of size n x m
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]); // read input values for array elements
        }
    }
    int x;
    scanf("%d", &x);
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            break;
        }
    }
    if (flag)
    {
        printf("will not take number\n");
    }
    else
    {
        printf("will take number\n");
    }

    return 0;
}
