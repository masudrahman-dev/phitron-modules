#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// int main()
// {
//     int n = 5;

//     for (int row = 1; row <= n; row++)
//     {

//         for (int col = 1; col <= 2 * n - 1; col++)
//         {
//             printf("%d ", col);
//         }

//         printf("\n");
//     }

//     return 0;
// }
// int main()
// {
//     int n = 5;

//     for (int row = 1; row <= n; row++)
//     {

//         for (int col = 1; col <= row; col++)
//         {
//             printf("%d ", col);
//         }

//         printf("\n");
//     }

//     return 0;
// }
// int main()
// {
//     int n = 5;

//     for (int row = n; row >= 1; row--)
//     {

//         for (int col = 1; col <= row; col++)
//         {
//             printf("%d ", col);
//         }

//         printf("\n");
//     }

//     return 0;
// }
// int main()
// {
//     int n = 5;

//     for (int row = 1; row <= n; row++)
//     {

//         for (int col = 1; col <= n * 2; col++)
//         {
//             if (row == n || col == n * 2 || col == 1 || row == 1)
//             {
//                 printf("%d ", col);
//             }
//             else
//             {
//                 printf("  ");
//             }
//         }

//         printf("\n");
//     }

//     return 0;
// }
// int main()
// {
//     int n = 5;

//     for (int i = 1; i <= n; i++)
//     {
//         /* Prints one row of pattern */
//         for (int j = 1; j < pow(2, i); j++)
//         {
//             printf("%d", j);
//         }
//         /* move to next row */
//         printf("\n");
//     }

//     return 0;
// }
int main()
{
    int rows = 5;

    for (int i = 1; i <= rows; i++)
    {
        /* for j th row, first print rows-r spaces then stars */
        for (int j = 1; j <= rows; j++)
        {
            if (j <= rows - i )
            {
                printf("#");
            }
            else
            {
                printf("*");
            }
        }
        /* move to next row */
        printf("\n");
    }
    return 0;
}