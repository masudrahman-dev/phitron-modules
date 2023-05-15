// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>
// #include <ctype.h>

// int main()
// {
//     int n = 5;
//     // scanf("%d", &n);
//     // int arr[n][m];
//     for (int i = 1; i <= n; i++)
//     {

//         for (int j = 1; j <= n; j++)
//         {
//             if (i == j)
//             {
//                 printf("\\");
//             }
//             else
//             {
//                 printf("*");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int counter;
    scanf("%d", &counter);

    for (int i = 0; i < counter; i++)
    {
        for (int z = 0; z < counter; z++)
        {
            if (i == z && i != counter / 2 && z != counter / 2)
            {
                printf("\\");
            }
            else if (i == counter / 2 && z == counter / 2)
            {
                printf("X");
            }
            else if (z != counter / 2 && i == ((counter - 1) - z))
            {
                printf("/");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}
