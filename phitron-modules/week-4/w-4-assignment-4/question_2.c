// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter a positive integer (1-9): ");
//     scanf("%d", &n);
//     if (n < 1 || n > 9)
//     {
//         printf("Invalid input. Enter a positive integer between 1 and 9.\n");
//         return 0;
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d", j);
//         }
//         for (int j = i - 1; j >= 1; j--)
//         {
//             printf("%d", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    if (n < 1)
    {
        printf("Enter a positive integer.\n");
        return 0;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}
