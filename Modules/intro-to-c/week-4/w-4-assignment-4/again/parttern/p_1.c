#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     char ch = 'a';
//     for (int row = 1; row <= n; row++) // row
//     {

//         for (int col = 1; col <= row; col++) // col
//         {
//             printf("%c ", ch);
//         }
//         ch++;
//         printf("\n");
//     }

//     return 0;
// }
// int main()
// {
//     int n = 5;
//     // scanf("%d", &n);

//     for (int row = 1; row <= n; row++) // row
//     {
//         int CR = n - row;
//         for (int col = 1; col <= CR; col++) // col
//         {
//             printf("#");
//         }
//         for (int col = 1; col <= row; col++)
//         {
//             printf("%d", col);
//         }

//         printf("\n");
//     }

//     return 0;
// }
// int main()
// {
//     int n = 5;
//     // scanf("%d", &n);

//     for (int row = n; row >= 1; row--) // row
//     {
//         int cr = n - row;
//         for (int col = 1; col <= cr; col++) // col
//         {
//             printf(" ");
//         }
//         for (int col = 1; col <= row; col++)
//         {
//             printf("%d", col);
//         }

//         printf("\n");
//     }

//     return 0;
// }
// int main()
// {
//     int n = 5;

//     for (int row = 1; row <= n; row++) // row
//     {
//         int cr = n - row;
//         for (int col = 1; col <= cr; col++) // col
//         {
//             printf(" ");
//         }
//         for (int col = 1; col <= row; col++)
//         {
//             printf("%d", col);
//         }

//         printf("\n");
//     }

//     for (int row = n - 1; row >= 1; row--) // row
//     {
//         int cr = n - row;
//         for (int col = 1; col <= cr; col++) // col
//         {
//             printf(" ");
//         }
//         for (int col = 1; col <= row; col++)
//         {
//             printf("%c", col + 64);
//         }

//         printf("\n");
//     }

//     return 0;
// }
// int main()
// {
//     int n = 5;

//     for (int row = 1; row <= n; row++) // row
//     {

//         for (int col = 1; col <= row; col++) // col
//         {
//             printf("%d ", col * row);
//         }

//         printf("\n");
//     }

//     return 0;
// }

// print diamond
// int main()
// {
//     int n = 5;

//     for (int row = 1; row <= n; row++) // row
//     {

//         for (int col = 1; col <= n - row; col++) // col
//         {
//             printf(" ");
//         }
//         for (int col = 1; col <= 2 * row - 1; col++)
//         {
//             printf("%d", col);
//         }

//         printf("\n");
//     }
//     for (int row = n - 1; row >= 1; row--) // row
//     {

//         for (int col = 1; col <= n - row; col++) // col
//         {
//             printf(" ");
//         }
//         for (int col = 1; col <= 2 * row - 1; col++)
//         {
//             printf("%d", col);
//         }

//         printf("\n");
//     }

//     return 0;
// }
// int main()
// {
//     int n = 5;

//     for (int row = 1; row <= n; row++) // row
//     {

//         for (int col = 1; col <= n - row; col++) // col
//         {
//             printf(" ");
//         }
//         for (int col = 1; col <= 2 * row - 1; col++)
//         {
//             printf("%c", row + 64);
//         }

//         printf("\n");
//     }
//     for (int row = n - 1; row >= 1; row--) // row
//     {

//         for (int col = 1; col <= n - row; col++) // col
//         {
//             printf(" ");
//         }
//         for (int col = 1; col <= 2 * row - 1; col++)
//         {
//             printf("%d", col);
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
//         // printf("%d",row);
//         for (int col = 1; col <= n; col++)
//         {
//             if (row == 1 || row == n || col == 1 || col == n)
//             {
//                 printf("#");
//             }
//             else
//             {

//                 printf("%d", row);
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }

// don't understand
// int main()
// {
//     int n = 5;

//     for (int row = 1; row <= n; row++)
//     {

//         for (int col = 1; col <= n; col++)
//         {
//             if (row == col || row + col == n + 1)
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
//     int count = 0;

//     for (int row = n; row >= 1; row--)
//     {

//         for (int col = 1; col <= n - row; col++)
//         {
//             printf(" ");
//         }
//         for (int col = 1; col <= row; col++)
//         {
//             printf("%d", col);
//         }
//         for (int col = row - 1; col >= 1; col--)
//         {
//             printf("%d", col);
//         }

//         printf("\n");
//     }

//     for (int row = 2; row <= n; row++)
//     {

//         for (int col = 1; col <= n - row; col++)
//         {
//             printf(" ");
//         }
//         for (int col = 1; col <= row; col++)
//         {
//             printf("%d", col);
//         }
//         for (int col = row - 1; col >= 1; col--)
//         {
//             printf("%d", col);
//         }

//         printf("\n");
//     }

//     return 0;
// }
int main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if (j >= n - (i - 1) && j <= n + (i - 1))
            {
                printf("*");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }

    return 0;
}
