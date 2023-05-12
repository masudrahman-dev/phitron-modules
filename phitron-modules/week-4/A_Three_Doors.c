// /**
//  * https://codeforces.com/problemset/problem/1709/A
//  */

#include <stdio.h>
void solve()
{
    int key;
    scanf("%d", &key);
    int arr[5];

    for (int i = 1; i <= 3; i++)
    {
        scanf("%d", &arr[i]);
    }

    if (arr[key] == 0)
    {
        printf("NO\n");
        return;
    }
    key = arr[key];

    if (arr[key] == 0)
    {
        printf("NO\n");
        return;
    }
    printf("YES\n");
}

int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        solve();
    }
    return 0;
}

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// void solve()
// {
//     int key;
//     scanf("%d", &key);
//     int door[5];
//     for (int i = 0; i < 3; i++)
//     {
//         scanf("%d", &door[i]);
//     }
//     if (door[key] == 0)
//     {
//         printf("NO\n");
//         return;
//     }

//     key = door[key];

//     if (door[key] == 0)
//     {
//         printf("NO\n");
//         return;
//     }
//     printf("YES\n");
// }
// int main()
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }
