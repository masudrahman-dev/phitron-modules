// #include <stdio.h>
// int main()
// {
//     int a, b, c, d;
//     long long result;
//     scanf("%d %d %d %d", &a, &b, &c, &d);

//     while (1)
//     {
//         result = a + b * c;
//         // printf("%d\n", result);
//         if (result == d)
//         {
//             printf("YES");
//             break;
//         }
//         result = a + b - c;
//         // printf("%d\n", result);
//         if (result == d)
//         {
//             printf("YES");

//             break;
//         }
//         result = a - b + c;
//         // printf("%d\n", result);
//         if (result == d)
//         {
//             printf("YES");

//             break;
//         }
//         result = a - b * c;
//         // printf("%d\n", result);
//         if (result == d)
//         {
//             printf("YES");

//             break;
//         }
//         result = a * b + c;
//         // printf("%d\n", result);
//         result = a * b - c;
//         if (result == d)
//         {
//             printf("YES");

//             break;
//         }
//         // printf("%d\n", result);

//         if (result == d)
//         {
//             printf("YES");

//             break;
//         }
//         else
//         {
//             printf("NO\n");
//         }
//         break;
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int a, b, c, d;
    long long result;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int found = 0; // flag variable to keep track of whether a solution is found

    result = a + b * c;
    if (result == d)
    {
        printf("YES");
        found = 1;
    }

    result = a + b - c;
    if (result == d)
    {
        printf("YES");
        found = 1;
    }

    result = a - b + c;
    if (result == d)
    {
        printf("YES");
        found = 1;
    }

    result = a - b * c;
    if (result == d)
    {
        printf("YES");
        found = 1;
    }

    result = a * b + c;
    if (result == d)
    {
        printf("YES");
        found = 1;
    }

    result = a * b - c;
    if (result == d)
    {
        printf("YES");
        found = 1;
    }

    if (!found)
    {
        printf("NO");
    }

    return 0;
}
