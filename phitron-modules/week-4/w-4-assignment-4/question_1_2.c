// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter a positive integer (1-5): ");
//     scanf("%d", &n);
//     if (n < 1 || n > 5) {
//         printf("Invalid input. Enter a positive integer between 1 and 5.\n");
//         return 0;
//     }
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             printf("%d ", j);
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
    if (n < 1 || n > 5)
    {
        printf("Enter a positive integer between 1 and 5.\n");
        return 0;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
