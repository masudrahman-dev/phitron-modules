#include <stdio.h>
#include <string.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n];
    int count[10] = {0};

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int val = a[i];
        count[val]++;
    }

    for (int i = 0; i <= m; i++)
    {
        if (count[i] != 0)
        {

            // printf("%d - %d \n", i, count[i]);
            printf("%d\n", count[i]);
        }
    }
}

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int *a = (int *)malloc(n * sizeof(int));
//     int count[5] = {0};

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         int val = a[i];
//         if (val >= 0 && val <= 4)
//         {
//             count[val]++;
//         }
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d - %d \n", i, count[i]);
//     }

//     free(a);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     int count[5] = {0};

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (int i = 0; i < n + 1; i++)
//     {
//         int val = a[i];
//         count[val]++;

//         // if (val >= 0 && val <= 4)
//         // {
//         //     count[val]++;
//         // }
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d - %d \n", i, count[i]);
//     }

//     return 0;
// }
