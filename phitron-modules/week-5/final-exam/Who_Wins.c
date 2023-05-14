// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int t = 0, p = 0, d = 0;
//     int arr[n][n];
//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 0; j < 2; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     printf("\n");

//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 0; j < 2; j++)
//         {
//             if (arr[i][j] == arr[i][j + 1])
//             {
//                 // printf("Draw");
//                 continue;
//                 ;
//             }
//             // printf("%d ", arr[i][j] == arr[i][j + 1]);

//             if (arr[i][j] > arr[i][j + 1])
//             {
//                 t++;
//                 // printf("%d ", arr[i][j]);
//             }
//             else
//             {
//                 p++;
//                 // printf("%d ", arr[i][j]);
//             }

//             // printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
//     // printf("%d %d\n", t, p);
//     // printf("%s\n", str[0]);

//     if (t == p)
//     {
//         printf("Tiger");
//         return 0;
//     }
//     else if (t > p)
//     {
//         printf("Tiger");
//         return 0;
//     }
//     else
//     {
//         printf("Pathan");
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int t = 0, p = 0;

    for (int i = 0; i < n; i++)
    {
        int x1, x2;
        scanf("%d %d", &x1, &x2);

        if (x1 > x2)
        {
            t++;
        }
        else if (x2 > x1)
        {
            p++;
        }
    }

    if (t > p)
    {
        printf("Tiger\n");
    }
    else if (p > t)
    {
        printf("Pathan\n");
    }
    else
    {
        printf("Draw\n");
    }

    return 0;
}
