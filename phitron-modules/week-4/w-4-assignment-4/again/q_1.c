#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
// int main()
// {
//     int n = 5, x, y, k;

//     for (x = 1; x <= n; x++)
//     {
//         for (y = x; y < n; y++)
//         {
//             printf(" ");
//         }
//         for (k = 1; k < (x * 2); k++)
//         {
//             printf("%d", k);
//         }
//         printf("\n");
//     }
//     for (x = 4; x >= 1; x--)
//     {
//         for (y = n; y > x; y--)
//         {
//             printf(" ");
//         }
//         for (k = 1; k < (x * 2); k++)
//         {
//             printf("%d", k);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         // printf("%d\n", i);
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }

//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int i, j, n;

//     printf("Enter the number of rows: ");
//     scanf("%d", &n);

//     for (i = 1; i <= n; i++) {
//         for (j = 1; j <= n; j++) {
//             printf("%d ",j);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int i, j, n;

//     printf("Enter the number of rows: ");
//     scanf("%d", &n);

//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int i, j, n;

//     printf("Enter the number of rows: ");
//     scanf("%d", &n);

//     for (i = n; i >= 1; i--)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i, j, rows;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     // for (i = 1; i <= rows; i++)
//     // {
//     //     for (j = 1; j <= i; j++)
//     //     {
//     //         printf("%d ", i);
//     //         // printf("%d ", j);
//     //     }
//     //     printf("\n");

//     //     for (j = rows - 1; j >= i; j--)
//     //     {
//     //         printf("%d ", i);
//     //     }
//     //     printf("\n");
//     // }
//     for (int j = 1; j <= rows; j++) // int j = 1; j <= rows; j++
//     {
//         for (i = j; i >= 1; i--) // i = rows; i >= 1; i--
//         {
//             printf("%d ", j);
//             /* code */
//         }

//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i, j, rows;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     for (i = 1; i <= rows; i++)
//     {
//         for (j = 1; j <= rows - i; j++)
//         {
//             printf(" ");
//         }
//         for (j = 1; j <= 2 * i - 1; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i, j, rows;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     for (i = 1; i <= rows; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i, j, rows;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     for (i = 1; i <= rows; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int i, j, rows, num = 1;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     for (i = 1; i <= rows; i++)
//     {
//         for (j = 1; j <= rows - i; j++)
//         {
//             printf(" ");
//         }
//         for (j = 1; j <= 2 * i - 1; j++)
//         {
//             printf("%d ", num);
//             num++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i, j, rows;
//     char ch = 'A';
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     for (i = 1; i <= rows; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("%c", ch);
//             ch++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i, j, rows;
//     char ch = 'A';
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     for (i = 1; i <= rows; i++)
//     {
//         for (j = 1; j <= rows - i; j++)
//         {
//             printf(" ");
//         }
//         for (j = 1; j <= 2 * i - 1; j++)
//         {
//             printf("%c", ch);
//             ch++;
//         }
//         printf("\n");
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int i, j, rows;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     for (i = 1; i <= rows; i++)
//     {
//         for (j = 1; j <= rows; j++)
//         {
//             if (i == 1 || i == rows || j == 1 || j == rows)
//             {
//                 printf("%d", j);
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i, j, rows;
//     char ch = 'A';
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     for (i = 1; i <= rows; i++)
//     {
//         for (j = 1; j <= rows; j++)
//         {
//             if (i == 1 || i == rows || j == 1 || j == rows)
//             {
//                 printf("%c", ch);
//                 ch++;
//             }
//             else
//             {
//                 printf(" ");
//                 ch++;
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i, j, rows, space;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     space = rows - 1;
//     for (i = 1; i <= rows; i++)
//     {
//         for (j = 1; j <= space; j++)
//         {
//             printf(" ");
//         }
//         space--;
//         for (j = 1; j <= 2 * i - 1; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
/// }

// #include <stdio.h>
// int main()
// {
//     int i, j, rows, space, num = 1;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     space = rows - 1;
//     for (i = 1; i <= rows; i++)
//     {
//         for (j = 1; j <= space; j++)
//         {
//             printf(" ");
//         }
//         space--;
//         for (j = 1; j <= 2 * i - 1; j++)
//         {
//             printf("%d", num);
//             num++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i, j, rows, num = 1;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     for (i = rows; i >= 1; i--)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("%d ", num);
//             num++;
//         }
//         printf("\n");
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int i, j, rows;
//     char ch = 'A';
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     for (i = rows; i >= 1; i--)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("%c ", ch);
//             ch++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i, j, rows, space, num = 1;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     space = rows - 1;
//     for (i = 1; i <= rows; i++)
//     {
//         for (j = 1; j <= space; j++)
//         {
//             printf(" ");
//         }
//         space--;
//         for (j = 1; j <= 2 * i - 1; j++)
//         {
//             printf("%d", num);
//             num++;
//         }
//         printf("\n");
//     }
//     space = 1;
//     num = num - 2;
//     for (i = 1; i <= rows - 1; i++)
//     {
//         for (j = 1; j <= space; j++)
//         {
//             printf(" ");
//         }
//         space++;
//         for (j = 1; j <= 2 * (rows - i) - 1; j++)
//         {
//             printf("%d", num);
//             num--;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i, j, rows, space, num = 1;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     space = rows - 1;
//     for (i = 1; i <= rows; i++)
//     {
//         for (j = 1; j <= space; j++)
//         {
//             printf(" ");
//         }
//         space--;
//         for (j = 1; j <= 2 * i - 1; j++)
//         {
//             printf("%d", num);
//             num++;
//         }
//         printf("\n");
//     }
//     space = 1;
//     num = num - 2;
//     for (i = 1; i <= rows - 1; i++)
//     {
//         for (j = 1; j <= space; j++)
//         {
//             printf(" ");
//         }
//         space++;
//         for (j = 1; j <= 2 * (rows - i) - 1; j++)
//         {
//             printf("%d", num);
//             num--;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main()
// {
//     int rows = 5;
//     for (int i = 1; i <= rows; i++)
//     {
//         for (int j = 1; j <= rows - i; j++)
//         {
//             printf(" ");
//         }

//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d", j);
//         }
//         for (int j = 1; j <= i - 1; j++)
//         {
//             printf("%d", i);
//         }
//         printf("\n");
//     }
//     for (int i = rows - 1; i >= 1; i--)
//     {
//         for (int j = 1; j <= rows - i; j++)
//         {
//             printf(" ");
//         }

//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d", j);
//         }
//         for (int j = 1; j <= i - 1; j++)
//         {
//             printf("%d", j);
//         }
//         printf("\n");
//     }

//     return 0;
// }
