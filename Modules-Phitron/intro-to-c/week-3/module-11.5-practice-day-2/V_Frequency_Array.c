// // #include <stdio.h>
// // #include <string.h>

// // int main()
// // {
// //     int n, m;
// //     scanf("%d %d", &n, &m);
// //     int arr[n];
// //     int count[100000] = {0};
// //     for (int i = 0; i < n; i++)
// //     {
// //         scanf("%d", &arr[i]);
// //     }
// //     for (int i = 0; i < n; i++)
// //     {
// //         int val = arr[i];
// //         count[val]++;
// //         // printf("%d\n", arr[i]);
// //     }
// //     for (int i = 0; i < m + 1; i++)
// //     {
// //         if (count[i] != 0)
// //         {
// //             printf("%d\n", count[i]);
// //         }
// //     }

// //     return 0;
// // }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     int n, m;
//     scanf("%d %d", &n, &m);
//     int arr[n];
//     int count[100000] = {0};
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//         // if (arr[i] < 0 || arr[i] > m)
//         // {
//         //     printf("Error: input value out of range\n");
//         //     return 1;
//         // }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         int val = arr[i];
//         count[val]++;
//     }
//     for (int i = 0; i <= m; i++)
//     {
//         // if (count[i] != 0)
//         // {
//         //     printf("%d\n", count[i]);
//         // }
//         printf("%d\n", count[i]);
//     }
//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     int n, m, a[100005], freq[100005] = {0}, i;

//     scanf("%d%d", &n, &m);

//     for (i = 0; i < n; i++)
//     {

//         scanf("%d", &a[i]);
//     }
//     for (i = 0; i < n; i++)
//     {
//         freq[a[i]]++;

//     }

//     for (i = 1; i <= m; i++)
//     {
//         printf("%d\n", freq[i]);
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     int n, m;
//     int a[100005], freq[100005] = {0};
//     scanf("%d%d", &n, &m);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         freq[a[i]]++;
//     }
//     for (int i = 1; i <= m; i++)
//     {
//         printf("%d\n", freq[i]);
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int c[m + 1];
    for (int i = 0; i < m + 1; i++)
    {
        c[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        int v = a[i];
        c[v]++;
    }
    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", c[i]);
    }
    return 0;
}