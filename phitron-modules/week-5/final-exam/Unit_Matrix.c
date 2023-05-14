// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[n][n];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     // printf("\n");
//     int first = arr[0][0];
//     int flag = 1;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {

//             if (i == j && arr[i][i] != first)
//             {
//                 flag = 0;

//                 // break;
//             }
//             else if (i != j && arr[i][j] != 0)
//             {
//                 flag = 0;
//                 // break;
//             }
//                 }
//         printf("\n");
//     }
//     if (flag)
//     {
//         printf("YES\n");
//     }
//     else
//     {
//         printf("NO\n");
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int n, isUnit = 1;
    scanf("%d", &n);
    int matrix[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j && matrix[i][j] != 1)
            { // checking primary diagonal elements
                isUnit = 0;
                break;
            }
            if (i != j && matrix[i][j] != 0)
            { // checking non-diagonal elements
                isUnit = 0;
                break;
            }
        }
    }
    if (isUnit)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
